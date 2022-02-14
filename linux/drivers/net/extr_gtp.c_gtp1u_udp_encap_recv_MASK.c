
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct pdp_ctx {int dummy; } ;
struct gtp_dev {int role; int dev; } ;
struct gtp1_header {int flags; scalar_t__ type; int tid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct pdp_ctx* FUNC_0 (struct gtp_dev*,int ) ;
 int FUNC_1 (struct pdp_ctx*,struct sk_buff*,unsigned int,int ) ;
 int FUNC_2 (int ,char*,struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct gtp_dev *VAR_3, struct sk_buff *VAR_4)
{
 unsigned int VAR_5 = sizeof(struct udphdr) +
         sizeof(struct gtp1_header);
 struct gtp1_header *VAR_6;
 struct pdp_ctx *VAR_7;

 if (!FUNC_4(VAR_4, VAR_5))
  return -1;

 VAR_6 = (struct gtp1_header *)(VAR_4->data + sizeof(struct udphdr));

 if ((VAR_6->flags >> 5) != VAR_2)
  return 1;

 if (VAR_6->type != VAR_1)
  return 1;







 if (VAR_6->flags & VAR_0)
  VAR_5 += 4;


 if (!FUNC_4(VAR_4, VAR_5))
  return -1;

 VAR_6 = (struct gtp1_header *)(VAR_4->data + sizeof(struct udphdr));

 VAR_7 = FUNC_0(VAR_3, FUNC_3(VAR_6->tid));
 if (!VAR_7) {
  FUNC_2(VAR_3->dev, "No PDP ctx to decap skb=%p\n", VAR_4);
  return 1;
 }

 return FUNC_1(VAR_7, VAR_4, VAR_5, VAR_3->role);
}
