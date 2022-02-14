
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int delay; } ;
struct iwl_fw_runtime {TYPE_1__ timestamp; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct iwl_fw_runtime *VAR_0,
            size_t VAR_1, char *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_0->timestamp.delay) / 1000;

 return FUNC_1(VAR_2, VAR_1, "%d\n", VAR_3);
}
