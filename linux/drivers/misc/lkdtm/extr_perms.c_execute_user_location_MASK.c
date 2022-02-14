
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long,void (*) (),int,int ) ;
 int VAR_2 ;
 void FUNC_1 () ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(void *VAR_3)
{
 int VAR_4;


 void (*VAR_5)(void) = VAR_3;

 FUNC_2("attempting ok execution at %px\n", FUNC_1);
 FUNC_1();

 VAR_4 = FUNC_0(VAR_2, (unsigned long)VAR_3, FUNC_1,
       VAR_0, VAR_1);
 if (VAR_4 < VAR_0)
  return;
 FUNC_2("attempting bad execution at %px\n", VAR_5);
 VAR_5();
}
