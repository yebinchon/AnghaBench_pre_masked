
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_3 (char*,size_t,unsigned char*) ;

void FUNC_4(void)
{
 size_t VAR_1;
 unsigned char *VAR_2;

 VAR_1 = (unsigned long)FUNC_0 - (unsigned long)VAR_0;
 VAR_2 = (unsigned char *)FUNC_0;

 FUNC_3("attempting bad %zu byte write at %px\n", VAR_1, VAR_2);
 FUNC_2(VAR_2, (unsigned char *)VAR_0, VAR_1);
 FUNC_1((unsigned long)VAR_2, (unsigned long)(VAR_2 + VAR_1));

 FUNC_0();
}
