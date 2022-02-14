
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enetc_hw {int dummy; } ;
struct enetc_si {TYPE_1__* pdev; struct enetc_hw hw; } ;
struct enetc_pf {int total_vfs; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,unsigned char*) ;
 int FUNC_1 (struct enetc_hw*,int,unsigned char*) ;
 int FUNC_2 (struct enetc_hw*,int,unsigned char*) ;
 struct enetc_pf* FUNC_3 (struct enetc_si*) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (unsigned char*) ;

__attribute__((used)) static void FUNC_6(struct enetc_si *VAR_1)
{
 unsigned char VAR_2[VAR_0];
 struct enetc_pf *VAR_3 = FUNC_3(VAR_1);
 struct enetc_hw *VAR_4 = &VAR_1->hw;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_3->total_vfs + 1; VAR_5++) {
  FUNC_1(VAR_4, VAR_5, VAR_2);
  if (!FUNC_5(VAR_2))
   continue;
  FUNC_4(VAR_2);
  FUNC_0(&VAR_1->pdev->dev, "no MAC address specified for SI%d, using %pM\n",
    VAR_5, VAR_2);
  FUNC_2(VAR_4, VAR_5, VAR_2);
 }
}
