
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar5523_cmd_host_available {void* sw_ver_build; void* sw_ver_patch; void* sw_ver_minor; void* sw_ver_major; } ;
struct ar5523 {int dummy; } ;
typedef int setup ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ar5523*,int ,struct ar5523_cmd_host_available*,int,int *,int ,int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ar5523 *VAR_5)
{
 struct ar5523_cmd_host_available VAR_6;


 VAR_6.sw_ver_major = FUNC_1(VAR_1);
 VAR_6.sw_ver_minor = FUNC_1(VAR_2);
 VAR_6.sw_ver_patch = FUNC_1(VAR_3);
 VAR_6.sw_ver_build = FUNC_1(VAR_0);
 return FUNC_0(VAR_5, VAR_4,
          &VAR_6, sizeof(VAR_6), ((void*)0), 0, 0);
}
