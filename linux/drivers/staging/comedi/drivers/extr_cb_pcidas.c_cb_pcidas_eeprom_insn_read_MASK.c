
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct cb_pcidas_private* private; } ;
struct cb_pcidas_private {scalar_t__ amcc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_7,
          struct comedi_subdevice *VAR_8,
          struct comedi_insn *VAR_9,
          unsigned int *VAR_10)
{
 struct cb_pcidas_private *VAR_11 = VAR_7->private;
 unsigned int VAR_12 = FUNC_0(VAR_9->chanspec);
 int VAR_13;
 int VAR_14;

 for (VAR_14 = 0; VAR_14 < VAR_9->n; VAR_14++) {

  VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_9, VAR_6, 0);
  if (VAR_13)
   return VAR_13;


  FUNC_3(VAR_2 | VAR_4,
       VAR_11->amcc + VAR_0);
  FUNC_3(VAR_12 & 0xff, VAR_11->amcc + VAR_1);
  FUNC_3(VAR_2 | VAR_3,
       VAR_11->amcc + VAR_0);
  FUNC_3((VAR_12 >> 8) & 0xff,
       VAR_11->amcc + VAR_1);
  FUNC_3(VAR_2 | VAR_5,
       VAR_11->amcc + VAR_0);


  VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_9, VAR_6, 0);
  if (VAR_13)
   return VAR_13;

  VAR_10[VAR_14] = FUNC_2(VAR_11->amcc + VAR_1);
 }

 return VAR_9->n;
}
