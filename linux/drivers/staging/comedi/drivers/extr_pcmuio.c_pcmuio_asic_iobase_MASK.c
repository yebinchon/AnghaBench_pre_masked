
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {unsigned long iobase; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(struct comedi_device *VAR_1,
            int VAR_2)
{
 return VAR_1->iobase + (VAR_2 * VAR_0);
}
