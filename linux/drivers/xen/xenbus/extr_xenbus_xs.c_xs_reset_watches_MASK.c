
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,char*,int *) ;

__attribute__((used)) static void FUNC_7(void)
{
 int VAR_3;

 if (!FUNC_1() || FUNC_2())
  return;

 if (FUNC_3())
  return;

 if (!FUNC_4("control",
      "platform-feature-xs_reset_watches", 0))
  return;

 VAR_3 = FUNC_5(FUNC_6(VAR_1, VAR_2, "", ((void*)0)));
 if (VAR_3 && VAR_3 != -VAR_0)
  FUNC_0("xs_reset_watches failed: %d\n", VAR_3);
}
