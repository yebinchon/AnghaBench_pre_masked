
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(int VAR_1, int VAR_2, int VAR_3)
{
 char *VAR_4;
 char *VAR_5;
 int VAR_6 = VAR_3;

 while (VAR_6) {
  VAR_4 = FUNC_1(VAR_2 + 256, VAR_0);
  if (FUNC_3(!VAR_4)) {
   FUNC_2("Unable to allocate %u bytes for FPA pool %d\n",
    VAR_3 * VAR_2, VAR_1);
   break;
  }
  VAR_5 = (char *)(((unsigned long)VAR_4 + 256) & ~0x7fUL);
  *((char **)VAR_5 - 1) = VAR_4;
  FUNC_0(VAR_5, VAR_1, 0);
  VAR_6--;
 }
 return VAR_3 - VAR_6;
}
