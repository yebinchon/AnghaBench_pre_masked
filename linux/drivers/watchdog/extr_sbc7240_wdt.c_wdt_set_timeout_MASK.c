
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(int VAR_3)
{
 if (VAR_3 < 1 || VAR_3 > VAR_0) {
  FUNC_1("timeout value must be 1<=x<=%d\n", VAR_0);
  return -1;
 }

 FUNC_0((unsigned)VAR_3, VAR_1);
 VAR_2 = VAR_3;
 FUNC_2("timeout set to %d seconds\n", VAR_3);
 return 0;
}
