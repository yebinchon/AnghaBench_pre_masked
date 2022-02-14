
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct rvu *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;

 if (!VAR_5)
  goto check_pf;

 if (!VAR_3) {
  FUNC_0(VAR_2->dev,
    "PF%d:VF%d is configured with zero msix vectors, %d\n",
    VAR_4, VAR_5 - 1, VAR_3);
 }
 return;

check_pf:
 if (VAR_4 == 0)
  VAR_6 = VAR_0 + VAR_1;
 else
  VAR_6 = VAR_1;

 if (!(VAR_3 < VAR_6))
  return;
 FUNC_0(VAR_2->dev,
   "PF%d is configured with too few vectors, %d, min is %d\n",
   VAR_4, VAR_3, VAR_6);
}
