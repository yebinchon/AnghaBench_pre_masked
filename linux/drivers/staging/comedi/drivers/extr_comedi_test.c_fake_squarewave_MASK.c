
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct waveform_private {unsigned int wf_amplitude; int wf_period; } ;
struct comedi_subdevice {int maxdata; TYPE_1__* range_table; } ;
struct comedi_krange {scalar_t__ min; scalar_t__ max; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; struct waveform_private* private; } ;
struct TYPE_2__ {struct comedi_krange* range; } ;


 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static unsigned short FUNC_1(struct comedi_device *VAR_0,
          unsigned int VAR_1,
          unsigned int VAR_2)
{
 struct waveform_private *VAR_3 = VAR_0->private;
 struct comedi_subdevice *VAR_4 = VAR_0->read_subdev;
 unsigned int VAR_5 = VAR_4->maxdata / 2;
 u64 VAR_6;
 const struct comedi_krange *VAR_7 =
     &VAR_4->range_table->range[VAR_1];

 VAR_6 = VAR_4->maxdata;
 VAR_6 *= VAR_3->wf_amplitude;
 FUNC_0(VAR_6, VAR_7->max - VAR_7->min);


 if (VAR_2 < VAR_3->wf_period / 2) {
  if (VAR_5 < VAR_6)
   VAR_6 = 0;
  else
   VAR_6 = VAR_5 - VAR_6;
 } else {
  VAR_6 += VAR_5;
  if (VAR_6 > VAR_4->maxdata)
   VAR_6 = VAR_4->maxdata;
 }

 return VAR_6;
}
