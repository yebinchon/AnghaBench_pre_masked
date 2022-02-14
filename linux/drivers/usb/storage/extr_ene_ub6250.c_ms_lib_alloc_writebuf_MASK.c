
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct us_data {scalar_t__ extra; } ;
struct ms_lib_type_extdat {int dummy; } ;
struct TYPE_2__ {int BytesPerSector; int * blkext; int * blkpag; int PagesPerBlock; scalar_t__ wrtblk; } ;
struct ene_ub6250_info {TYPE_1__ MS_Lib; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct us_data*) ;
 int FUNC_2 (struct us_data*) ;

__attribute__((used)) static int FUNC_3(struct us_data *VAR_1)
{
 struct ene_ub6250_info *VAR_2 = (struct ene_ub6250_info *) VAR_1->extra;

 VAR_2->MS_Lib.wrtblk = (u16)-1;

 VAR_2->MS_Lib.blkpag = FUNC_0(VAR_2->MS_Lib.PagesPerBlock,
         VAR_2->MS_Lib.BytesPerSector,
         VAR_0);
 VAR_2->MS_Lib.blkext = FUNC_0(VAR_2->MS_Lib.PagesPerBlock,
         sizeof(struct ms_lib_type_extdat),
         VAR_0);

 if ((VAR_2->MS_Lib.blkpag == ((void*)0)) || (VAR_2->MS_Lib.blkext == ((void*)0))) {
  FUNC_2(VAR_1);
  return (u32)-1;
 }

 FUNC_1(VAR_1);

 return 0;
}
