
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct enetc_hw {int dummy; } ;
struct enetc_si {TYPE_1__* pdev; struct enetc_hw hw; } ;
struct enetc_pf {int total_vfs; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *,char*,int,int) ;
 int FUNC_8 (struct enetc_hw*,int ) ;
 int FUNC_9 (struct enetc_hw*,int ,int) ;
 struct enetc_pf* FUNC_10 (struct enetc_si*) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct enetc_si *VAR_9)
{
 struct enetc_pf *VAR_10 = FUNC_10(VAR_9);
 struct enetc_hw *VAR_11 = &VAR_9->hw;
 int VAR_12, VAR_13;
 u32 VAR_14;

 VAR_14 = FUNC_8(VAR_11, VAR_0);
 VAR_12 = FUNC_11(FUNC_0(VAR_14), FUNC_1(VAR_14));

 VAR_14 = FUNC_4(VAR_1);
 VAR_14 |= FUNC_3(VAR_1);

 if (FUNC_12(VAR_12 < VAR_1)) {
  VAR_14 = FUNC_4(VAR_12);
  VAR_14 |= FUNC_3(VAR_12);

  FUNC_7(&VAR_9->pdev->dev, "Found %d rings, expected %d!\n",
    VAR_12, VAR_1);

  VAR_12 = 0;
 }


 VAR_14 |= FUNC_5(VAR_7 | VAR_8);

 FUNC_9(VAR_11, FUNC_2(0), VAR_14);

 if (VAR_12)
  VAR_12 -= VAR_1;


 VAR_14 = FUNC_5(VAR_7 | VAR_8);
 VAR_14 |= VAR_3 | VAR_2;

 if (VAR_12) {
  VAR_12 /= VAR_10->total_vfs;
  VAR_14 |= FUNC_4(VAR_12);
  VAR_14 |= FUNC_3(VAR_12);
 }

 for (VAR_13 = 0; VAR_13 < VAR_10->total_vfs; VAR_13++)
  FUNC_9(VAR_11, FUNC_2(VAR_13 + 1), VAR_14);


 VAR_14 = FUNC_6(VAR_7 | VAR_8);
 FUNC_9(VAR_11, VAR_6, VAR_14);

 FUNC_9(VAR_11, VAR_4, VAR_5);
}
