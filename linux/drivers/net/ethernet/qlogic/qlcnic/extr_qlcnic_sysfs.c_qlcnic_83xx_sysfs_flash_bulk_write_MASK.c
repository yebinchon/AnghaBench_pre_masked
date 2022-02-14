
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {scalar_t__ flash_mfg_id; TYPE_2__* ahw; } ;
typedef int loff_t ;
struct TYPE_3__ {scalar_t__ mfg_id; } ;
struct TYPE_4__ {TYPE_1__ fdt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char* FUNC_0 (size_t,int,int ) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*,char*,size_t) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*,int ,int *,int) ;
 scalar_t__ FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(struct qlcnic_adapter *VAR_4,
           char *VAR_5, loff_t VAR_6,
           size_t VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 unsigned char *VAR_11, *VAR_12;

 VAR_11 = FUNC_0(VAR_7, sizeof(unsigned char), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_10 = VAR_7 / sizeof(u32);
 FUNC_8((u32 *)VAR_5, VAR_10);
 FUNC_2(VAR_11, VAR_5, VAR_7);
 VAR_12 = VAR_11;

 if (FUNC_6(VAR_4) != 0) {
  FUNC_1(VAR_11);
  return -VAR_0;
 }

 if (VAR_4->ahw->fdt.mfg_id == VAR_4->flash_mfg_id) {
  VAR_9 = FUNC_4(VAR_4);
  if (VAR_9) {
   FUNC_1(VAR_11);
   FUNC_7(VAR_4);
   return -VAR_0;
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_10 / VAR_3; VAR_8++) {
  VAR_9 = FUNC_5(VAR_4, VAR_6,
         (u32 *)VAR_12,
         VAR_3);

  if (VAR_9) {
   if (VAR_4->ahw->fdt.mfg_id == VAR_4->flash_mfg_id) {
    VAR_9 = FUNC_3(VAR_4);
    if (VAR_9) {
     FUNC_1(VAR_11);
     FUNC_7(VAR_4);
     return -VAR_0;
    }
   }

   FUNC_1(VAR_11);
   FUNC_7(VAR_4);
   return -VAR_0;
  }

  VAR_12 = VAR_12 + sizeof(u32)*VAR_3;
  VAR_6 = VAR_6 + sizeof(u32)*VAR_3;
 }

 if (VAR_4->ahw->fdt.mfg_id == VAR_4->flash_mfg_id) {
  VAR_9 = FUNC_3(VAR_4);
  if (VAR_9) {
   FUNC_1(VAR_11);
   FUNC_7(VAR_4);
   return -VAR_0;
  }
 }

 FUNC_1(VAR_11);
 FUNC_7(VAR_4);

 return 0;
}
