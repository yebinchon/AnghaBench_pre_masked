
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_isadma_desc {int mode; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct comedi_isadma_desc *VAR_3, char VAR_4)
{
 VAR_3->mode = (VAR_4 == VAR_0) ? VAR_1
           : VAR_2;
}
