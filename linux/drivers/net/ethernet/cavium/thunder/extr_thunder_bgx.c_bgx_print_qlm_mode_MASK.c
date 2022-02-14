
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct lmac {int lmac_type; int use_training; } ;
struct device {int dummy; } ;
struct bgx {int bgx_id; int is_dlm; struct lmac* lmac; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;
 int FUNC_0 (struct device*,char*,char*) ;
 int FUNC_1 (char*,char*,int,...) ;

__attribute__((used)) static void FUNC_2(struct bgx *VAR_0, u8 VAR_1)
{
 struct device *VAR_2 = &VAR_0->pdev->dev;
 struct lmac *VAR_3;
 char VAR_4[27];

 if (!VAR_0->is_dlm && VAR_1)
  return;

 VAR_3 = &VAR_0->lmac[VAR_1];
 if (!VAR_0->is_dlm)
  FUNC_1(VAR_4, "BGX%d QLM mode", VAR_0->bgx_id);
 else
  FUNC_1(VAR_4, "BGX%d LMAC%d mode", VAR_0->bgx_id, VAR_1);

 switch (VAR_3->lmac_type) {
 case 131:
  FUNC_0(VAR_2, "%s: SGMII\n", (char *)VAR_4);
  break;
 case 130:
  FUNC_0(VAR_2, "%s: XAUI\n", (char *)VAR_4);
  break;
 case 132:
  FUNC_0(VAR_2, "%s: RXAUI\n", (char *)VAR_4);
  break;
 case 129:
  if (!VAR_3->use_training)
   FUNC_0(VAR_2, "%s: XFI\n", (char *)VAR_4);
  else
   FUNC_0(VAR_2, "%s: 10G_KR\n", (char *)VAR_4);
  break;
 case 128:
  if (!VAR_3->use_training)
   FUNC_0(VAR_2, "%s: XLAUI\n", (char *)VAR_4);
  else
   FUNC_0(VAR_2, "%s: 40G_KR4\n", (char *)VAR_4);
  break;
 case 134:
  FUNC_0(VAR_2, "%s: QSGMII\n", (char *)VAR_4);
  break;
 case 133:
  FUNC_0(VAR_2, "%s: RGMII\n", (char *)VAR_4);
  break;
 case 135:

  break;
 }
}
