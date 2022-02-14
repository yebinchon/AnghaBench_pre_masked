
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vl600_frame_hdr {void* pkt_cnt; void* serial; void* len; } ;
struct vl600_pkt_hdr {void* len; struct vl600_frame_hdr dummy; int h_proto; } ;
struct usbnet {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; scalar_t__ head; } ;
struct ethhdr {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void**) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (struct vl600_frame_hdr*,int ,int) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int,int,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 struct vl600_frame_hdr* FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_13(struct usbnet *VAR_1,
  struct sk_buff *VAR_2, gfp_t VAR_3)
{
 struct sk_buff *VAR_4;
 struct vl600_frame_hdr *VAR_5;
 struct vl600_pkt_hdr *VAR_6;
 static uint32_t VAR_7 = 1;
 int VAR_8 = VAR_2->len - sizeof(struct ethhdr);
 int VAR_9 = (VAR_2->len + sizeof(struct vl600_frame_hdr) + 3) & ~3;

 VAR_5 = (struct vl600_frame_hdr *) VAR_2->data;
 if (VAR_2->len > sizeof(*VAR_5) && VAR_2->len == FUNC_3(&VAR_5->len))
  return VAR_2;

 if (VAR_2->len < sizeof(struct ethhdr))

  return ((void*)0);

 if (!FUNC_6(VAR_2)) {
  int VAR_10 = FUNC_8(VAR_2);
  int VAR_11 = FUNC_12(VAR_2);

  if (VAR_11 >= VAR_9 - VAR_2->len - sizeof(*VAR_5) &&
    VAR_10 >= sizeof(*VAR_5))

   goto encapsulate;

  if (VAR_10 + VAR_11 + VAR_2->len >= VAR_9) {

   VAR_2->data = FUNC_4(VAR_2->head + sizeof(*VAR_5),
     VAR_2->data, VAR_2->len);
   FUNC_11(VAR_2, VAR_2->len);
   goto encapsulate;
  }
 }


 VAR_4 = FUNC_7(VAR_2, sizeof(struct vl600_frame_hdr), VAR_9 -
   VAR_2->len - sizeof(struct vl600_frame_hdr), VAR_3);
 FUNC_1(VAR_2);
 if (!VAR_4)
  return VAR_4;
 VAR_2 = VAR_4;

encapsulate:





 VAR_6 = (struct vl600_pkt_hdr *) VAR_2->data;




 VAR_6->h_proto = FUNC_2(VAR_0);
 FUNC_5(&VAR_6->dummy, 0, sizeof(VAR_6->dummy));
 VAR_6->len = FUNC_0(VAR_8);

 VAR_5 = FUNC_9(VAR_2, sizeof(*VAR_5));
 FUNC_5(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->len = FUNC_0(VAR_9);
 VAR_5->serial = FUNC_0(VAR_7++);
 VAR_5->pkt_cnt = FUNC_0(1);

 if (VAR_2->len < VAR_9)
  FUNC_10(VAR_2, VAR_9 - VAR_2->len);

 return VAR_2;
}
