
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_0);
 if (VAR_2 < 0) {
  FUNC_2("fastrpc: failed to register cb driver\n");
  return VAR_2;
 }

 VAR_2 = FUNC_3(&VAR_1);
 if (VAR_2 < 0) {
  FUNC_2("fastrpc: failed to register rpmsg driver\n");
  FUNC_1(&VAR_0);
  return VAR_2;
 }

 return 0;
}
