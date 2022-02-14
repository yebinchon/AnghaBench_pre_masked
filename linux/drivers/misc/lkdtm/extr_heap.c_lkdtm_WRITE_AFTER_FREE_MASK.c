
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (size_t,int ) ;
 int FUNC_2 (char*,...) ;

void FUNC_3(void)
{
 int *VAR_1, *VAR_2;
 size_t VAR_3 = 1024;





 size_t VAR_4 = (VAR_3 / sizeof(*VAR_1)) / 2;

 VAR_1 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_1)
  return;
 FUNC_2("Allocated memory %p-%p\n", VAR_1, &VAR_1[VAR_4 * 2]);
 FUNC_2("Attempting bad write to freed memory at %p\n",
  &VAR_1[VAR_4]);
 FUNC_0(VAR_1);
 VAR_1[VAR_4] = 0x0abcdef0;

 VAR_2 = FUNC_1(VAR_3, VAR_0);
 FUNC_0(VAR_2);
 if (VAR_2 != VAR_1)
  FUNC_2("Hmm, didn't get the same memory range.\n");
}
