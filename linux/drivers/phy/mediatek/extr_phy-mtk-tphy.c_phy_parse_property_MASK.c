
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_tphy {int dummy; } ;
struct mtk_phy_instance {scalar_t__ type; int eye_term; int eye_vrt; int eye_src; int bc12_en; TYPE_1__* phy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,int *) ;

__attribute__((used)) static void FUNC_3(struct mtk_tphy *VAR_1,
    struct mtk_phy_instance *VAR_2)
{
 struct device *VAR_3 = &VAR_2->phy->dev;

 if (VAR_2->type != VAR_0)
  return;

 VAR_2->bc12_en = FUNC_1(VAR_3, "mediatek,bc12");
 FUNC_2(VAR_3, "mediatek,eye-src",
     &VAR_2->eye_src);
 FUNC_2(VAR_3, "mediatek,eye-vrt",
     &VAR_2->eye_vrt);
 FUNC_2(VAR_3, "mediatek,eye-term",
     &VAR_2->eye_term);
 FUNC_0(VAR_3, "bc12:%d, src:%d, vrt:%d, term:%d\n",
  VAR_2->bc12_en, VAR_2->eye_src,
  VAR_2->eye_vrt, VAR_2->eye_term);
}
