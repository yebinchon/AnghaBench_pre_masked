
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
typedef struct comedi_lrange {int length; struct comedi_krange* range; } const comedi_lrange ;
struct comedi_krange {unsigned int min; unsigned int max; int flags; } ;
struct comedi_device {int dummy; } ;
struct comedi_devconfig {unsigned int* options; } ;


 int VAR_0 ;
 struct comedi_lrange const* FUNC_0 (struct comedi_subdevice*,int) ;
 struct comedi_lrange const VAR_1 ;

__attribute__((used)) static const struct comedi_lrange *FUNC_1(struct comedi_device *VAR_2,
        struct comedi_subdevice *VAR_3,
        struct comedi_devconfig *VAR_4)
{
 unsigned int VAR_5 = VAR_4->options[6];
 unsigned int VAR_6 = VAR_4->options[7];


 if (VAR_5 || VAR_6) {
  struct comedi_lrange *VAR_7;
  struct comedi_krange *VAR_8;


  VAR_7 = FUNC_0(VAR_3,
         sizeof(*VAR_7) + sizeof(*VAR_8));
  if (!VAR_7)
   return &VAR_1;


  VAR_7->length = 1;
  VAR_8 = VAR_7->range;
  VAR_8->min = VAR_5;
  VAR_8->max = VAR_6;
  VAR_8->flags = VAR_0;

  return VAR_7;
 }

 return &VAR_1;
}
