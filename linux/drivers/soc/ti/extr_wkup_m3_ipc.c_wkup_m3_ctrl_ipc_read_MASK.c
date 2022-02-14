
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wkup_m3_ipc {scalar_t__ ipc_mem_base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,char*) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_3(struct wkup_m3_ipc *VAR_1,
       int VAR_2)
{
 if (FUNC_1(VAR_2 < 0 || VAR_2 > VAR_0,
   "ipc register operation out of range"))
  return 0;

 return FUNC_2(VAR_1->ipc_mem_base +
       FUNC_0(VAR_2));
}
