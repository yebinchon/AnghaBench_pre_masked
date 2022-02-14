
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wkup_m3_ipc {scalar_t__ ipc_mem_base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,char*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct wkup_m3_ipc *VAR_1,
       u32 VAR_2, int VAR_3)
{
 if (FUNC_1(VAR_3 < 0 || VAR_3 > VAR_0,
   "ipc register operation out of range"))
  return;

 FUNC_2(VAR_2, VAR_1->ipc_mem_base +
        FUNC_0(VAR_3));
}
