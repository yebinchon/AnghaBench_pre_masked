
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(void)
{
 FUNC_0();
 if (FUNC_2(VAR_1)) {
  FUNC_1("aborting test due to pending signal!\n");
  return -VAR_0;
 }

 return 0;
}
