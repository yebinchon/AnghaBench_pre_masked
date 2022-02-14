
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int field; } ;
struct rvin_dev {scalar_t__ state; int sequence; int qlock; TYPE_2__** queue_buf; TYPE_1__ format; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int timestamp; } ;
struct TYPE_5__ {int sequence; TYPE_3__ vb2_buf; int field; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (struct rvin_dev*) ;
 int FUNC_3 (struct rvin_dev*,int) ;
 int FUNC_4 (struct rvin_dev*) ;
 int FUNC_5 (struct rvin_dev*,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (struct rvin_dev*,char*,...) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_8, void *VAR_9)
{
 struct rvin_dev *VAR_10 = VAR_9;
 u32 VAR_11, VAR_12;
 int VAR_13;
 unsigned int VAR_14 = 0;
 unsigned long VAR_15;

 FUNC_6(&VAR_10->qlock, VAR_15);

 VAR_11 = FUNC_4(VAR_10);
 if (!VAR_11)
  goto done;

 FUNC_2(VAR_10);
 VAR_14 = 1;


 if (VAR_10->state == VAR_2) {
  FUNC_9(VAR_10, "IRQ while state stopped\n");
  goto done;
 }


 if (VAR_10->state == VAR_3) {
  FUNC_9(VAR_10, "IRQ while state stopping\n");
  goto done;
 }


 VAR_12 = FUNC_5(VAR_10, VAR_7);
 VAR_13 = (VAR_12 & VAR_5) >> VAR_6;





 if (VAR_10->state == VAR_1) {
  if (VAR_13 != 0) {
   FUNC_9(VAR_10, "Starting sync slot: %d\n", VAR_13);
   goto done;
  }

  FUNC_9(VAR_10, "Capture start synced!\n");
  VAR_10->state = VAR_0;
 }


 if (VAR_10->queue_buf[VAR_13]) {
  VAR_10->queue_buf[VAR_13]->field = VAR_10->format.field;
  VAR_10->queue_buf[VAR_13]->sequence = VAR_10->sequence;
  VAR_10->queue_buf[VAR_13]->vb2_buf.timestamp = FUNC_1();
  FUNC_8(&VAR_10->queue_buf[VAR_13]->vb2_buf,
    VAR_4);
  VAR_10->queue_buf[VAR_13] = ((void*)0);
 } else {

  FUNC_9(VAR_10, "Dropping frame %u\n", VAR_10->sequence);
 }

 VAR_10->sequence++;


 FUNC_3(VAR_10, VAR_13);
done:
 FUNC_7(&VAR_10->qlock, VAR_15);

 return FUNC_0(VAR_14);
}
