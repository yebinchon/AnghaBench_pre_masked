
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_subdev_intr {unsigned int ofs; unsigned int valid_isns; int spinlock; } ;
struct dio200_board {scalar_t__ has_int_sce; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int len_chanlist; int maxdata; int cancel; int do_cmd; int do_cmdtest; int insn_bits; int * range_table; int type; } ;
struct comedi_device {struct dio200_board* board_ptr; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dio200_subdev_intr* FUNC_0 (struct comedi_subdevice*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct comedi_device*,unsigned int,int ) ;
 int VAR_10 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_11,
       struct comedi_subdevice *VAR_12,
       unsigned int VAR_13,
       unsigned int VAR_14)
{
 const struct dio200_board *VAR_15 = VAR_11->board_ptr;
 struct dio200_subdev_intr *VAR_16;

 VAR_16 = FUNC_0(VAR_12, sizeof(*VAR_16));
 if (!VAR_16)
  return -VAR_2;

 VAR_16->ofs = VAR_13;
 VAR_16->valid_isns = VAR_14;
 FUNC_2(&VAR_16->spinlock);

 if (VAR_15->has_int_sce)

  FUNC_1(VAR_11, VAR_16->ofs, 0);

 VAR_12->type = VAR_0;
 VAR_12->subdev_flags = VAR_5 | VAR_3 | VAR_4;
 if (VAR_15->has_int_sce) {
  VAR_12->n_chan = VAR_1;
  VAR_12->len_chanlist = VAR_1;
 } else {

  VAR_12->n_chan = 1;
  VAR_12->len_chanlist = 1;
 }
 VAR_12->range_table = &VAR_10;
 VAR_12->maxdata = 1;
 VAR_12->insn_bits = VAR_9;
 VAR_12->do_cmdtest = VAR_8;
 VAR_12->do_cmd = VAR_7;
 VAR_12->cancel = VAR_6;

 return 0;
}
