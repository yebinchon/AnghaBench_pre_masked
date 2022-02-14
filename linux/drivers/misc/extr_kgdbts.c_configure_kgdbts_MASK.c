
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__*) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_4 = 0;

 if (!FUNC_4(VAR_0) || FUNC_0(VAR_0[0]))
  goto noconfig;

 VAR_2 = 0;
 FUNC_3(1);

 VAR_4 = FUNC_1(&VAR_3);
 if (VAR_4) {
  VAR_1 = 0;
  return VAR_4;
 }
 VAR_1 = 1;
 FUNC_2();

 return VAR_4;

noconfig:
 VAR_0[0] = 0;
 VAR_1 = 0;

 return VAR_4;
}
