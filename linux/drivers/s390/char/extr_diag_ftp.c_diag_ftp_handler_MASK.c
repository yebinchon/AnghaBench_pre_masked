
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext_code {int subcode; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ext_code VAR_3,
        unsigned int VAR_4,
        unsigned long VAR_5)
{
 if ((VAR_3.subcode >> 8) != 8)
  return;

 FUNC_1(VAR_0);
 VAR_2 = VAR_3.subcode & 0xffU;
 FUNC_0(&VAR_1);
}
