
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_6(void)
{
 if (FUNC_4(&VAR_2)) {
  FUNC_5(&VAR_2, 0);
  FUNC_2(&VAR_1);
  FUNC_1();
  FUNC_0(VAR_0, "rescan count=%07d\n",
      FUNC_3(&VAR_1));
  return 1;
 }
 return 0;
}
