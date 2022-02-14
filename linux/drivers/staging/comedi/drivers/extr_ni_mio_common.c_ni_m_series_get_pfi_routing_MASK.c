
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int * pfi_output_select_reg; } ;
struct comedi_device {struct ni_private* private; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct comedi_device *VAR_0,
      unsigned int VAR_1)
{
 struct ni_private *VAR_2 = VAR_0->private;
 const unsigned int VAR_3 = VAR_1 / 3;

 return FUNC_0(VAR_1,
    VAR_2->pfi_output_select_reg[VAR_3]);
}
