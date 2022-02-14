
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 long FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(char *VAR_3, int VAR_4)
{
 long VAR_5;
 VAR_5 = FUNC_1(VAR_2,
   VAR_1 == VAR_4, 5 * VAR_0);
 if (VAR_5 <= 0)
  FUNC_0("backend %s timed out\n", VAR_3);
}
