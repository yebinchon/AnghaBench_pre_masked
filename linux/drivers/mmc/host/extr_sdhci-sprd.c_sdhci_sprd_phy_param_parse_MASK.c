
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_sprd_host {int* phy_delay; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int timing; int property; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct device_node*,int ,int*,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct sdhci_sprd_host *VAR_1,
           struct device_node *VAR_2)
{
 u32 *VAR_3 = VAR_1->phy_delay;
 int VAR_4, VAR_5, VAR_6;
 u32 VAR_7[4];

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  VAR_4 = FUNC_1(VAR_2,
    VAR_0[VAR_5].property, VAR_7, 4);
  if (VAR_4)
   continue;

  VAR_6 = VAR_0[VAR_5].timing;
  VAR_3[VAR_6] = VAR_7[0] | (VAR_7[1] << 8) | (VAR_7[2] << 16) | (VAR_7[3] << 24);
 }
}
