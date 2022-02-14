
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,char*,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(int VAR_4)
{
 if (VAR_4 < 0 ||
  VAR_4 > VAR_2)
  return -VAR_0;

 if (!FUNC_0(VAR_3, ((void*)0), "STRW", "vd", VAR_4)) {
  FUNC_1("Cannot set adaptive keyboard mode\n");
  return -VAR_1;
 }

 return 0;
}
