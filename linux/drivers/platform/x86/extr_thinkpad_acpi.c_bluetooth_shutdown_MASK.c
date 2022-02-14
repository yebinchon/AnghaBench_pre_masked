
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,char*,char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(void)
{

 if (!FUNC_0(((void*)0), ((void*)0), "\\BLTH", "vd",
   VAR_1))
  FUNC_1("failed to save bluetooth state to NVRAM\n");
 else
  FUNC_2(VAR_0,
   "bluetooth state saved to NVRAM\n");
}
