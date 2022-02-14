
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nfp_ccm {int dummy; } ;
struct nfp_app {int ctrl; } ;


 struct sk_buff* FUNC_0 (struct nfp_ccm*,int ) ;
 int FUNC_1 (struct nfp_ccm*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct nfp_ccm *VAR_0, struct nfp_app *VAR_1, u16 VAR_2)
{
 struct sk_buff *VAR_3;

 FUNC_2(VAR_1->ctrl);
 VAR_3 = FUNC_0(VAR_0, VAR_2);
 if (!VAR_3)
  FUNC_1(VAR_0, VAR_2);
 FUNC_3(VAR_1->ctrl);

 return VAR_3;
}
