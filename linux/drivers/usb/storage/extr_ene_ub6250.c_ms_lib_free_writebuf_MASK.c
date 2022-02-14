
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct us_data {scalar_t__ extra; } ;
struct TYPE_2__ {int * blkext; int * blkpag; scalar_t__ wrtblk; } ;
struct ene_ub6250_info {TYPE_1__ MS_Lib; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ene_ub6250_info*) ;

__attribute__((used)) static void FUNC_2(struct us_data *VAR_0)
{
 struct ene_ub6250_info *VAR_1 = (struct ene_ub6250_info *) VAR_0->extra;
 VAR_1->MS_Lib.wrtblk = (u16)-1;



 FUNC_1(VAR_1);

 if (VAR_1->MS_Lib.blkpag) {
  FUNC_0(VAR_1->MS_Lib.blkpag);
  VAR_1->MS_Lib.blkpag = ((void*)0);
 }

 if (VAR_1->MS_Lib.blkext) {
  FUNC_0(VAR_1->MS_Lib.blkext);
  VAR_1->MS_Lib.blkext = ((void*)0);
 }
}
