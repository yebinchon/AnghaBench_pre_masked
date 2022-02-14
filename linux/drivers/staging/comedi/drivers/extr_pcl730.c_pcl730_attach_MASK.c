
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl730_board {scalar_t__ n_ttl_chan; scalar_t__ has_ttl_io; scalar_t__ is_pcl725; scalar_t__ is_acl7225b; scalar_t__ is_ir104; scalar_t__ n_iso_in_chan; scalar_t__ has_readback; scalar_t__ n_iso_out_chan; int n_subdevs; int io_range; } ;
struct comedi_subdevice {int maxdata; void* private; void* insn_bits; int * range_table; scalar_t__ n_chan; void* subdev_flags; void* type; int state; } ;
struct comedi_device {struct comedi_subdevice* subdevices; struct pcl730_board* board_ptr; } ;
struct comedi_devconfig {int * options; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,int ,int ) ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_7,
    struct comedi_devconfig *VAR_8)
{
 const struct pcl730_board *VAR_9 = VAR_7->board_ptr;
 struct comedi_subdevice *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_7, VAR_8->options[0], VAR_9->io_range);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_7, VAR_9->n_subdevs);
 if (VAR_12)
  return VAR_12;

 VAR_11 = 0;

 if (VAR_9->n_iso_out_chan) {

  VAR_10 = &VAR_7->subdevices[VAR_11++];
  VAR_10->type = VAR_1;
  VAR_10->subdev_flags = VAR_3;
  VAR_10->n_chan = VAR_9->n_iso_out_chan;
  VAR_10->maxdata = 1;
  VAR_10->range_table = &VAR_6;
  VAR_10->insn_bits = VAR_5;
  VAR_10->private = (void *)0;


  if (VAR_9->has_readback)
   VAR_10->state = FUNC_2(VAR_7, VAR_10);
 }

 if (VAR_9->n_iso_in_chan) {

  VAR_10 = &VAR_7->subdevices[VAR_11++];
  VAR_10->type = VAR_0;
  VAR_10->subdev_flags = VAR_2;
  VAR_10->n_chan = VAR_9->n_iso_in_chan;
  VAR_10->maxdata = 1;
  VAR_10->range_table = &VAR_6;
  VAR_10->insn_bits = VAR_4;
  VAR_10->private = VAR_9->is_ir104 ? (void *)4 :
      VAR_9->is_acl7225b ? (void *)2 :
      VAR_9->is_pcl725 ? (void *)1 : (void *)0;
 }

 if (VAR_9->has_ttl_io) {

  VAR_10 = &VAR_7->subdevices[VAR_11++];
  VAR_10->type = VAR_1;
  VAR_10->subdev_flags = VAR_3;
  VAR_10->n_chan = VAR_9->n_ttl_chan;
  VAR_10->maxdata = 1;
  VAR_10->range_table = &VAR_6;
  VAR_10->insn_bits = VAR_5;
  VAR_10->private = (void *)2;


  VAR_10 = &VAR_7->subdevices[VAR_11++];
  VAR_10->type = VAR_0;
  VAR_10->subdev_flags = VAR_2;
  VAR_10->n_chan = VAR_9->n_ttl_chan;
  VAR_10->maxdata = 1;
  VAR_10->range_table = &VAR_6;
  VAR_10->insn_bits = VAR_4;
  VAR_10->private = (void *)2;
 }

 return 0;
}
