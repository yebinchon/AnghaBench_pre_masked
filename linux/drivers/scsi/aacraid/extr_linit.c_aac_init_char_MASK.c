
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;

__attribute__((used)) static void FUNC_2(void)
{
 VAR_1 = FUNC_1(0, "aac", &VAR_0);
 if (VAR_1 < 0) {
  FUNC_0("aacraid: unable to register \"aac\" device.\n");
 }
}
