
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int BaseAddress; } ;
typedef TYPE_1__ nsp32_hw_data ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ,unsigned char) ;

__attribute__((used)) static void FUNC_2(nsp32_hw_data *VAR_2)
{
 unsigned int VAR_3 = VAR_2->BaseAddress;
 unsigned char VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 VAR_4 &= ~VAR_0;
 FUNC_1(VAR_3, VAR_1, VAR_4);
}
