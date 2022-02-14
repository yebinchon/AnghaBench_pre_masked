
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nfp_police_cfg_head {int port; } ;
struct nfp_flower_priv {TYPE_1__* app; } ;
struct TYPE_2__ {int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfp_police_cfg_head*,int ,int) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (TYPE_1__*,int,int ,int ) ;
 struct nfp_police_cfg_head* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_5(struct nfp_flower_priv *VAR_2,
         u32 VAR_3)
{
 struct nfp_police_cfg_head *VAR_4;
 struct sk_buff *VAR_5;

 VAR_5 = FUNC_3(VAR_2->app,
        sizeof(struct nfp_police_cfg_head),
        VAR_1,
        VAR_0);
 if (!VAR_5)
  return;

 VAR_4 = FUNC_4(VAR_5);
 FUNC_1(VAR_4, 0, sizeof(struct nfp_police_cfg_head));
 VAR_4->port = FUNC_0(VAR_3);

 FUNC_2(VAR_2->app->ctrl, VAR_5);
}
