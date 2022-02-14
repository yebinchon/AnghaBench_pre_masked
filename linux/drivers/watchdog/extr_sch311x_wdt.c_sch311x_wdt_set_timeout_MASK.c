
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ runtime_reg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_1(int VAR_3)
{
 unsigned char VAR_4 = 0x80;


 if (VAR_3 > 255) {
  VAR_4 = 0;
  VAR_3 /= 60;
 }






 FUNC_0(VAR_4, VAR_2.runtime_reg + VAR_0);




 FUNC_0(VAR_3, VAR_2.runtime_reg + VAR_1);
}
