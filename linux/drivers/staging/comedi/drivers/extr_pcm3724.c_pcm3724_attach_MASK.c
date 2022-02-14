
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv_pcm3724 {int dummy; } ;
struct comedi_subdevice {int insn_config; } ;
struct comedi_device {int n_subdevices; struct comedi_subdevice* subdevices; } ;
struct comedi_devconfig {int * options; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct priv_pcm3724* FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_3,
     struct comedi_devconfig *VAR_4)
{
 struct priv_pcm3724 *VAR_5;
 struct comedi_subdevice *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_0(VAR_3, sizeof(*VAR_5));
 if (!VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_3, VAR_4->options[0], 0x10);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_3, 2);
 if (VAR_7)
  return VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_3->n_subdevices; VAR_8++) {
  VAR_6 = &VAR_3->subdevices[VAR_8];
  VAR_7 = FUNC_3(VAR_3, VAR_6, ((void*)0), VAR_8 * VAR_1);
  if (VAR_7)
   return VAR_7;
  VAR_6->insn_config = VAR_2;
 }
 return 0;
}
