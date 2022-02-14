
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; int class_dev; struct cb_pcidas_private* private; } ;
struct comedi_cmd {unsigned int chanlist_len; int scan_begin_src; int * chanlist; } ;
struct comedi_async {int inttrig; struct comedi_cmd cmd; } ;
struct cb_pcidas_private {int ao_ctrl; int ao_pacer; scalar_t__ pcibar4; scalar_t__ pcibar1; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (unsigned int,unsigned int) ;
 scalar_t__ VAR_3 ;


 int VAR_4 ;
 int FUNC_4 (int ,int,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_5,
       struct comedi_subdevice *VAR_6)
{
 struct cb_pcidas_private *VAR_7 = VAR_5->private;
 struct comedi_async *VAR_8 = VAR_6->async;
 struct comedi_cmd *VAR_9 = &VAR_8->cmd;
 unsigned int VAR_10;
 unsigned long VAR_11;


 FUNC_8(&VAR_5->spinlock, VAR_11);
 for (VAR_10 = 0; VAR_10 < VAR_9->chanlist_len; VAR_10++) {
  unsigned int VAR_12 = FUNC_0(VAR_9->chanlist[VAR_10]);
  unsigned int VAR_13 = FUNC_1(VAR_9->chanlist[VAR_10]);


  VAR_7->ao_ctrl |= FUNC_2(VAR_12);

  VAR_7->ao_ctrl |= FUNC_3(VAR_12, VAR_13);
 }


 FUNC_7(VAR_7->ao_ctrl, VAR_7->pcibar1 + VAR_3);
 FUNC_9(&VAR_5->spinlock, VAR_11);


 FUNC_7(0, VAR_7->pcibar4 + VAR_0);


 if (VAR_9->scan_begin_src == 128) {
  FUNC_5(VAR_7->ao_pacer);
  FUNC_4(VAR_7->ao_pacer, 1, 2, 1);
 }


 FUNC_8(&VAR_5->spinlock, VAR_11);
 switch (VAR_9->scan_begin_src) {
 case 128:
  VAR_7->ao_ctrl |= VAR_2;
  break;
 case 129:
  VAR_7->ao_ctrl |= VAR_1;
  break;
 default:
  FUNC_9(&VAR_5->spinlock, VAR_11);
  FUNC_6(VAR_5->class_dev, "error setting dac pacer source\n");
  return -1;
 }
 FUNC_9(&VAR_5->spinlock, VAR_11);

 VAR_8->inttrig = VAR_4;

 return 0;
}
