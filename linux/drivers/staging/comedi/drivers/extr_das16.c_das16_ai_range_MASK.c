
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
typedef struct comedi_lrange {int length; struct comedi_krange* range; } const comedi_lrange ;
struct comedi_krange {unsigned int min; unsigned int max; int flags; } ;
struct comedi_device {int dummy; } ;
struct comedi_devconfig {unsigned int* options; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct comedi_lrange const* FUNC_0 (struct comedi_subdevice*,int) ;
 struct comedi_lrange const** VAR_2 ;
 struct comedi_lrange const** VAR_3 ;
 unsigned int VAR_4 ;
 struct comedi_lrange const VAR_5 ;

__attribute__((used)) static const struct comedi_lrange *FUNC_1(struct comedi_device *VAR_6,
        struct comedi_subdevice *VAR_7,
        struct comedi_devconfig *VAR_8,
        unsigned int VAR_9,
        unsigned int VAR_10)
{
 unsigned int VAR_11 = VAR_8->options[4];
 unsigned int VAR_12 = VAR_8->options[5];


 if (VAR_9 == VAR_4 && (VAR_11 || VAR_12)) {
  struct comedi_lrange *VAR_13;
  struct comedi_krange *VAR_14;


  VAR_13 = FUNC_0(VAR_7,
         sizeof(*VAR_13) + sizeof(*VAR_14));
  if (!VAR_13)
   return &VAR_5;


  VAR_13->length = 1;
  VAR_14 = VAR_13->range;
  VAR_14->min = VAR_11;
  VAR_14->max = VAR_12;
  VAR_14->flags = VAR_1;

  return VAR_13;
 }


 if (VAR_10 & VAR_0)
  return VAR_3[VAR_9];
 return VAR_2[VAR_9];
}
