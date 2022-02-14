
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct phy {TYPE_2__ dev; } ;
struct TYPE_4__ {int cm; int cn; int co; } ;
struct mixel_dphy_priv {TYPE_1__ cfg; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,char*,int,int,int) ;
 int FUNC_4 (TYPE_2__*,char*,int,int,int) ;
 struct mixel_dphy_priv* FUNC_5 (int ) ;
 int FUNC_6 (struct phy*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct phy *VAR_4)
{
 struct mixel_dphy_priv *VAR_5 = FUNC_5(VAR_4->dev.parent);

 if (VAR_5->cfg.cm < 16 || VAR_5->cfg.cm > 255 ||
     VAR_5->cfg.cn < 1 || VAR_5->cfg.cn > 32 ||
     VAR_5->cfg.co < 1 || VAR_5->cfg.co > 8) {
  FUNC_4(&VAR_4->dev, "Invalid CM/CN/CO values! (%u/%u/%u)\n",
   VAR_5->cfg.cm, VAR_5->cfg.cn, VAR_5->cfg.co);
  return -VAR_3;
 }
 FUNC_3(&VAR_4->dev, "Using CM:%u CN:%u CO:%u\n",
  VAR_5->cfg.cm, VAR_5->cfg.cn, VAR_5->cfg.co);
 FUNC_6(VAR_4, FUNC_0(VAR_5->cfg.cm), VAR_0);
 FUNC_6(VAR_4, FUNC_1(VAR_5->cfg.cn), VAR_1);
 FUNC_6(VAR_4, FUNC_2(VAR_5->cfg.co), VAR_2);
 return 0;
}
