
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int protocol; } ;
struct pdp_ctx {int dummy; } ;



 int FUNC_0 (struct sk_buff*,struct pdp_ctx*,unsigned int,unsigned int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct sk_buff *VAR_0, struct pdp_ctx *VAR_1,
        unsigned int VAR_2, unsigned int VAR_3)
{
 switch (FUNC_1(VAR_0->protocol)) {
 case 128:
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 }
 return 0;
}
