
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int year; } ;
typedef TYPE_1__ efi_time_t ;



__attribute__((used)) static int
FUNC_0(efi_time_t *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0->year * (365 % 7)
      + (VAR_0->year - 1) / 4
      - (VAR_0->year - 1) / 100
      + (VAR_0->year - 1) / 400
      + VAR_1;





 return VAR_2 % 7;
}
