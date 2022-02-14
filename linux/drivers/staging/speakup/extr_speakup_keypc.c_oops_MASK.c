
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int,int,int,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static char *FUNC_2(void)
{
 int VAR_1, VAR_2, VAR_3, VAR_4;

 VAR_1 = FUNC_0(VAR_0);
 VAR_2 = FUNC_0(VAR_0 + 1);
 VAR_3 = FUNC_0(VAR_0 + 2);
 VAR_4 = FUNC_0(VAR_0 + 3);
 FUNC_1("synth timeout %d %d %d %d\n", VAR_1, VAR_2, VAR_3, VAR_4);
 return ((void*)0);
}
