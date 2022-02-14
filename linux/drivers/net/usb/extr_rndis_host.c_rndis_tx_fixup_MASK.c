
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct sk_buff {unsigned int len; int data; scalar_t__ head; } ;
struct rndis_data_hdr {void* data_len; void* data_offset; void* msg_len; void* msg_type; } ;
typedef int gfp_t ;


 unsigned int VAR_0 ;
 struct rndis_data_hdr* FUNC_0 (struct sk_buff*,int) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int ,unsigned int) ;
 int FUNC_5 (struct rndis_data_hdr*,int ,int) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int,int,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (int) ;

struct sk_buff *
FUNC_12(struct usbnet *VAR_1, struct sk_buff *VAR_2, gfp_t VAR_3)
{
 struct rndis_data_hdr *VAR_4;
 struct sk_buff *VAR_5;
 unsigned VAR_6 = VAR_2->len;

 if (FUNC_3(!FUNC_6(VAR_2))) {
  int VAR_7 = FUNC_8(VAR_2);


  if (FUNC_11((sizeof *VAR_4) <= VAR_7))
   goto fill;


  VAR_7 += FUNC_10(VAR_2);
  if (FUNC_3((sizeof *VAR_4) <= VAR_7)) {
   VAR_2->data = FUNC_4(VAR_2->head + sizeof *VAR_4,
         VAR_2->data, VAR_6);
   FUNC_9(VAR_2, VAR_6);
   goto fill;
  }
 }


 VAR_5 = FUNC_7(VAR_2, sizeof *VAR_4, 1, VAR_3);
 FUNC_2(VAR_2);
 if (FUNC_11(!VAR_5))
  return VAR_5;
 VAR_2 = VAR_5;




fill:
 VAR_4 = FUNC_0(VAR_2, sizeof *VAR_4);
 FUNC_5(VAR_4, 0, sizeof *VAR_4);
 VAR_4->msg_type = FUNC_1(VAR_0);
 VAR_4->msg_len = FUNC_1(VAR_2->len);
 VAR_4->data_offset = FUNC_1(sizeof(*VAR_4) - 8);
 VAR_4->data_len = FUNC_1(VAR_6);


 return VAR_2;
}
