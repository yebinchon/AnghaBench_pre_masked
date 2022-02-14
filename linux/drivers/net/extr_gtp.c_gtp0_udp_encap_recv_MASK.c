
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct pdp_ctx {int dummy; } ;
struct gtp_dev {int role; int dev; } ;
struct gtp0_header {int flags; scalar_t__ type; int tid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct pdp_ctx* FUNC_1 (struct gtp_dev*,int ) ;
 int FUNC_2 (struct pdp_ctx*,struct sk_buff*,unsigned int,int ) ;
 int FUNC_3 (int ,char*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct gtp_dev *VAR_2, struct sk_buff *VAR_3)
{
 unsigned int VAR_4 = sizeof(struct udphdr) +
         sizeof(struct gtp0_header);
 struct gtp0_header *VAR_5;
 struct pdp_ctx *VAR_6;

 if (!FUNC_4(VAR_3, VAR_4))
  return -1;

 VAR_5 = (struct gtp0_header *)(VAR_3->data + sizeof(struct udphdr));

 if ((VAR_5->flags >> 5) != VAR_1)
  return 1;

 if (VAR_5->type != VAR_0)
  return 1;

 VAR_6 = FUNC_1(VAR_2, FUNC_0(VAR_5->tid));
 if (!VAR_6) {
  FUNC_3(VAR_2->dev, "No PDP ctx to decap skb=%p\n", VAR_3);
  return 1;
 }

 return FUNC_2(VAR_6, VAR_3, VAR_4, VAR_2->role);
}
