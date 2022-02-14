
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmu_d11inf {scalar_t__ io_type; int decchspec; int encchspec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(struct brcmu_d11inf *VAR_5)
{
 if (VAR_5->io_type == VAR_0) {
  VAR_5->encchspec = VAR_4;
  VAR_5->decchspec = VAR_3;
 } else {
  VAR_5->encchspec = VAR_2;
  VAR_5->decchspec = VAR_1;
 }
}
