
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(u64 VAR_1, int VAR_2)
{
 if (VAR_1 == VAR_0)
  FUNC_1("Hypervisor denied %sabling promiscuous mode\n",
   VAR_2 == 1 ? "en" : "dis");
 else
  FUNC_0("failed %sabling promiscuous mode\n",
         VAR_2 == 1 ? "en" : "dis");
}
