
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_5 = FUNC_1();
 if (VAR_5)
  return VAR_5;

 FUNC_0("disabling watchdog timer\n");
 FUNC_4(VAR_0);

 FUNC_3(0, VAR_1);
 FUNC_3(0, VAR_2);
 if (VAR_4 >= 0x08)
  FUNC_3(0, VAR_3 + 1);
 FUNC_3(0, VAR_3);

 FUNC_2();
 return 0;
}
