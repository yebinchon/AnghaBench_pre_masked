
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ipq806x_gmac {int phy_mode; int nss_common; int id; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;


 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (struct ipq806x_gmac*,unsigned int) ;
 int FUNC_7 (struct ipq806x_gmac*,unsigned int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int*) ;
 int FUNC_10 (int ,int ,int) ;

__attribute__((used)) static int FUNC_11(struct ipq806x_gmac *VAR_4, unsigned int VAR_5)
{
 uint32_t VAR_6, VAR_7;
 int VAR_8;

 switch (VAR_4->phy_mode) {
 case 129:
  VAR_8 = FUNC_6(VAR_4, VAR_5);
  VAR_6 = FUNC_3(VAR_4->id) |
      FUNC_4(VAR_4->id);
  break;

 case 128:
  VAR_8 = FUNC_7(VAR_4, VAR_5);
  VAR_6 = FUNC_1(VAR_4->id) |
      FUNC_2(VAR_4->id);
  break;

 default:
  FUNC_5(&VAR_4->pdev->dev, "Unsupported PHY mode: \"%s\"\n",
   FUNC_8(VAR_4->phy_mode));
  return -VAR_0;
 }


 FUNC_9(VAR_4->nss_common, VAR_3, &VAR_7);
 VAR_7 &= ~VAR_6;
 FUNC_10(VAR_4->nss_common, VAR_3, VAR_7);


 FUNC_9(VAR_4->nss_common, VAR_1, &VAR_7);
 VAR_7 &= ~(VAR_2
   << FUNC_0(VAR_4->id));
 VAR_7 |= VAR_8 << FUNC_0(VAR_4->id);
 FUNC_10(VAR_4->nss_common, VAR_1, VAR_7);


 FUNC_9(VAR_4->nss_common, VAR_3, &VAR_7);
 VAR_7 |= VAR_6;
 FUNC_10(VAR_4->nss_common, VAR_3, VAR_7);

 return 0;
}
