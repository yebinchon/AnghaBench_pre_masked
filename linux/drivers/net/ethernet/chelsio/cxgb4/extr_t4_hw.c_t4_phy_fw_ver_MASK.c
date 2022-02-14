
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int portvec; } ;
struct adapter {int pf; int mbox; TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct adapter*,int ,int ,int ,int,int*,int*) ;

int FUNC_5(struct adapter *VAR_3, int *VAR_4)
{
 u32 VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = (FUNC_0(VAR_0) |
   FUNC_1(VAR_1) |
   FUNC_2(VAR_3->params.portvec) |
   FUNC_3(VAR_2));
 VAR_7 = FUNC_4(VAR_3, VAR_3->mbox, VAR_3->pf, 0, 1,
         &VAR_5, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 *VAR_4 = VAR_6;
 return 0;
}
