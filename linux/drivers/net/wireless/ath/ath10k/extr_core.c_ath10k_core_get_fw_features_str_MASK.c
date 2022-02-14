
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fw_features; } ;
struct TYPE_4__ {TYPE_1__ fw_file; } ;
struct ath10k {TYPE_2__ normal_mode_fw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,size_t,int) ;
 scalar_t__ FUNC_1 (char*,size_t,char*) ;
 scalar_t__ FUNC_2 (int,int ) ;

void FUNC_3(struct ath10k *VAR_1,
         char *VAR_2,
         size_t VAR_3)
{
 size_t VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (FUNC_2(VAR_5, VAR_1->normal_mode_fw.fw_file.fw_features)) {
   if (VAR_4 > 0)
    VAR_4 += FUNC_1(VAR_2 + VAR_4, VAR_3 - VAR_4, ",");

   VAR_4 += FUNC_0(VAR_2 + VAR_4,
             VAR_3 - VAR_4,
             VAR_5);
  }
 }
}
