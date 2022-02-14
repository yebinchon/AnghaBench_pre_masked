
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {scalar_t__ type; int n_chan; int io_bits; int len_chanlist; scalar_t__ poll; void* insn_config; void* insn_bits; void* insn_write; void* insn_read; int * range_table; int range_table_list; scalar_t__ do_cmd; } ;
struct comedi_device {int n_subdevices; struct comedi_subdevice* subdevices; scalar_t__ get_valid_routes; scalar_t__ insn_device_config; int mutex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_8)
{
 struct comedi_subdevice *VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_1(&VAR_8->mutex);
 if (!VAR_8->insn_device_config)
  VAR_8->insn_device_config = VAR_3;

 if (!VAR_8->get_valid_routes)
  VAR_8->get_valid_routes = VAR_2;

 for (VAR_11 = 0; VAR_11 < VAR_8->n_subdevices; VAR_11++) {
  VAR_9 = &VAR_8->subdevices[VAR_11];

  if (VAR_9->type == VAR_1)
   continue;

  if (VAR_9->type == VAR_0) {
   if (VAR_9->n_chan < 32)
    VAR_9->io_bits = (1 << VAR_9->n_chan) - 1;
   else
    VAR_9->io_bits = 0xffffffff;
  }

  if (VAR_9->len_chanlist == 0)
   VAR_9->len_chanlist = 1;

  if (VAR_9->do_cmd) {
   VAR_10 = FUNC_0(VAR_8, VAR_9);
   if (VAR_10)
    return VAR_10;
  }

  if (!VAR_9->range_table && !VAR_9->range_table_list)
   VAR_9->range_table = &VAR_7;

  if (!VAR_9->insn_read && VAR_9->insn_bits)
   VAR_9->insn_read = VAR_5;
  if (!VAR_9->insn_write && VAR_9->insn_bits)
   VAR_9->insn_write = VAR_5;

  if (!VAR_9->insn_read)
   VAR_9->insn_read = VAR_4;
  if (!VAR_9->insn_write)
   VAR_9->insn_write = VAR_4;
  if (!VAR_9->insn_bits)
   VAR_9->insn_bits = VAR_4;
  if (!VAR_9->insn_config)
   VAR_9->insn_config = VAR_4;

  if (!VAR_9->poll)
   VAR_9->poll = VAR_6;
 }

 return 0;
}
