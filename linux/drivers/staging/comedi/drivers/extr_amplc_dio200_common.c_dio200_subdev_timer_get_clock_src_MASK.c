
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (struct comedi_device*,int ) ;
 unsigned int* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_3,
           struct comedi_subdevice *VAR_4,
           unsigned int *VAR_5,
           unsigned int *VAR_6)
{
 unsigned int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_0) & VAR_1;
 *VAR_5 = VAR_7;
 *VAR_6 = (VAR_7 < FUNC_0(VAR_2)) ?
    VAR_2[VAR_7] : 0;
}
