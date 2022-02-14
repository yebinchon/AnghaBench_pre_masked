
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int pdev_dev; int pf; int mbox; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct adapter*,int ,int ,int ,int,unsigned int*,unsigned int*) ;
 int FUNC_5 (struct adapter*,int ,int ,int ,int,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct adapter *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 int VAR_5;







 VAR_3 = (FUNC_0(VAR_0) |
  FUNC_1(VAR_1));

 VAR_5 = FUNC_4(VAR_2, VAR_2->mbox, VAR_2->pf, 0, 1, &VAR_3, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_3(VAR_2->pdev_dev,
    "querying PPOD_EDRAM support failed: %d\n",
    VAR_5);
  return -1;
 }

 if (VAR_4 != 1)
  return -1;

 VAR_5 = FUNC_5(VAR_2, VAR_2->mbox, VAR_2->pf, 0, 1, &VAR_3, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_2(VAR_2->pdev_dev,
   "setting PPOD_EDRAM failed: %d\n", VAR_5);
  return -1;
 }
 return 0;
}
