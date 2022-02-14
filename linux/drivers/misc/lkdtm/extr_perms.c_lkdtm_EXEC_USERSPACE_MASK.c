
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 unsigned long FUNC_2 (int *,int ,int ,int,int,int ) ;
 int FUNC_3 (unsigned long,int ) ;

void FUNC_4(void)
{
 unsigned long VAR_7;

 VAR_7 = FUNC_2(((void*)0), 0, VAR_2,
       VAR_4 | VAR_5 | VAR_3,
       VAR_0 | VAR_1, 0);
 if (VAR_7 >= VAR_6) {
  FUNC_1("Failed to allocate user memory\n");
  return;
 }
 FUNC_0((void *)VAR_7);
 FUNC_3(VAR_7, VAR_2);
}
