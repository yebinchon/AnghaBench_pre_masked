
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qeth_cmd_buffer {scalar_t__ length; int (* callback ) (struct qeth_card*,struct qeth_cmd_buffer*,scalar_t__) ;} ;
struct qeth_channel {struct ccw_device* ccwdev; int state; int irq_pending; } ;
struct qeth_card {int read_or_write_problem; int wait_q; struct qeth_channel data; struct qeth_channel write; struct qeth_channel read; } ;
struct TYPE_9__ {int fctl; int cstat; int dstat; scalar_t__ count; } ;
struct TYPE_10__ {TYPE_4__ cmd; } ;
struct TYPE_6__ {scalar_t__ cons; } ;
struct TYPE_7__ {TYPE_1__ erw; } ;
struct TYPE_8__ {TYPE_2__ esw0; } ;
struct irb {TYPE_5__ scsw; struct irb* ecw; TYPE_3__ esw; } ;
struct ccwgroup_device {int dev; } ;
struct ccw_device {int dev; } ;
typedef int addr_t ;


 int FUNC_0 (struct ccw_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 unsigned long VAR_7 ;
 int FUNC_2 (int,char*,int ,int,int) ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ,char*,int ,int,int,struct irb*,int,int) ;
 int FUNC_8 (struct qeth_cmd_buffer*,int) ;
 int FUNC_9 (struct qeth_card*,struct ccw_device*,struct irb*) ;
 int FUNC_10 (struct qeth_card*) ;
 int FUNC_11 (struct qeth_card*,struct ccw_device*,struct irb*) ;
 scalar_t__ FUNC_12 (unsigned long) ;
 int FUNC_13 (struct qeth_card*) ;
 int FUNC_14 (struct qeth_card*,struct qeth_cmd_buffer*,scalar_t__) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(struct ccw_device *VAR_11, unsigned long VAR_12,
  struct irb *VAR_13)
{
 int VAR_14;
 int VAR_15, VAR_16;
 struct qeth_cmd_buffer *VAR_17 = ((void*)0);
 struct ccwgroup_device *VAR_18;
 struct qeth_channel *VAR_19;
 struct qeth_card *VAR_20;


 VAR_18 = FUNC_5(&VAR_11->dev);
 VAR_20 = FUNC_5(&VAR_18->dev);
 if (!VAR_20)
  return;

 FUNC_1(VAR_20, 5, "irq");

 if (VAR_20->read.ccwdev == VAR_11) {
  VAR_19 = &VAR_20->read;
  FUNC_1(VAR_20, 5, "read");
 } else if (VAR_20->write.ccwdev == VAR_11) {
  VAR_19 = &VAR_20->write;
  FUNC_1(VAR_20, 5, "write");
 } else {
  VAR_19 = &VAR_20->data;
  FUNC_1(VAR_20, 5, "data");
 }

 if (FUNC_12(VAR_12))
  VAR_17 = (struct qeth_cmd_buffer *) FUNC_3((addr_t)VAR_12);

 VAR_14 = FUNC_9(VAR_20, VAR_11, VAR_13);
 if (VAR_14) {

  if (VAR_17)
   FUNC_8(VAR_17, VAR_14);
  FUNC_4(&VAR_19->irq_pending, 0);
  FUNC_15(&VAR_20->wait_q);
  return;
 }

 FUNC_4(&VAR_19->irq_pending, 0);

 if (VAR_13->scsw.cmd.fctl & (VAR_9))
  VAR_19->state = VAR_1;

 if (VAR_13->scsw.cmd.fctl & (VAR_10))
  VAR_19->state = VAR_0;

 if (VAR_12 == VAR_7) {
  FUNC_1(VAR_20, 6, "clrchpar");

  VAR_12 = 0;
 }
 if (VAR_12 == VAR_8) {
  FUNC_1(VAR_20, 6, "hltchpar");

  VAR_12 = 0;
 }

 VAR_15 = VAR_13->scsw.cmd.cstat;
 VAR_16 = VAR_13->scsw.cmd.dstat;

 if ((VAR_16 & VAR_3) ||
     (VAR_16 & VAR_2) ||
     (VAR_15)) {
  if (VAR_13->esw.esw0.erw.cons) {
   FUNC_6(&VAR_19->ccwdev->dev,
    "The qeth device driver failed to recover "
    "an error on the device\n");
   FUNC_2(2, "sense data available on channel %x: cstat %#X dstat %#X\n",
      FUNC_0(VAR_19->ccwdev), VAR_15,
      VAR_16);
   FUNC_7(VAR_6, "qeth: irb ",
    VAR_4, 16, 1, VAR_13, 32, 1);
   FUNC_7(VAR_6, "qeth: sense data ",
    VAR_4, 16, 1, VAR_13->ecw, 32, 1);
  }

  VAR_14 = FUNC_11(VAR_20, VAR_11, VAR_13);
  if (VAR_14) {
   VAR_20->read_or_write_problem = 1;
   if (VAR_17)
    FUNC_8(VAR_17, VAR_14);
   FUNC_10(VAR_20);
   FUNC_13(VAR_20);
   goto out;
  }
 }

 if (VAR_17) {

  if (VAR_13->scsw.cmd.count > VAR_17->length) {
   FUNC_8(VAR_17, -VAR_5);
   goto out;
  }
  if (VAR_17->callback)
   VAR_17->callback(VAR_20, VAR_17,
          VAR_17->length - VAR_13->scsw.cmd.count);
 }

out:
 FUNC_15(&VAR_20->wait_q);
 return;
}
