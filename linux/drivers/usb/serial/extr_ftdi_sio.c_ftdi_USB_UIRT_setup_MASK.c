
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftdi_private {int custom_divisor; int force_baud; int flags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ftdi_private *VAR_1)
{
 VAR_1->flags |= VAR_0;
 VAR_1->custom_divisor = 77;
 VAR_1->force_baud = 38400;
}
