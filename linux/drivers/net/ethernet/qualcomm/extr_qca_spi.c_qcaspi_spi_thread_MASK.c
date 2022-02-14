
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int write_buf_err; int read_buf_err; int device_reset; } ;
struct TYPE_3__ {size_t head; int ** skb; } ;
struct qcaspi {scalar_t__ intr_req; scalar_t__ intr_svc; scalar_t__ sync; int net_dev; TYPE_2__ stats; TYPE_1__ txr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct qcaspi*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct qcaspi*) ;
 int FUNC_10 (struct qcaspi*,int ) ;
 int FUNC_11 (struct qcaspi*) ;
 int FUNC_12 (struct qcaspi*) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct qcaspi*,int*) ;

__attribute__((used)) static int
FUNC_16(void *VAR_11)
{
 struct qcaspi *VAR_12 = VAR_11;
 u16 VAR_13 = 0;

 FUNC_4(VAR_12->net_dev, "SPI thread created\n");
 while (!FUNC_1()) {
  FUNC_14(VAR_9);
  if ((VAR_12->intr_req == VAR_12->intr_svc) &&
      (VAR_12->txr.skb[VAR_12->txr.head] == ((void*)0)) &&
      (VAR_12->sync == VAR_3))
   FUNC_13();

  FUNC_14(VAR_10);

  FUNC_3(VAR_12->net_dev, "have work to do. int: %d, tx_skb: %p\n",
      VAR_12->intr_req - VAR_12->intr_svc,
      VAR_12->txr.skb[VAR_12->txr.head]);

  FUNC_10(VAR_12, VAR_1);

  if (VAR_12->sync != VAR_3) {
   FUNC_3(VAR_12->net_dev, "sync: not ready %u, turn off carrier and flush\n",
       (unsigned int)VAR_12->sync);
   FUNC_7(VAR_12->net_dev);
   FUNC_5(VAR_12->net_dev);
   FUNC_9(VAR_12);
   FUNC_2(VAR_2);
  }

  if (VAR_12->intr_svc != VAR_12->intr_req) {
   VAR_12->intr_svc = VAR_12->intr_req;
   FUNC_15(VAR_12, &VAR_13);

   if (VAR_13 & VAR_5) {
    FUNC_10(VAR_12, VAR_0);


    if (VAR_12->sync != VAR_3)
     continue;

    VAR_12->stats.device_reset++;
    FUNC_8(VAR_12->net_dev);
    FUNC_6(VAR_12->net_dev);
   }

   if (VAR_13 & VAR_7) {

    FUNC_3(VAR_12->net_dev, "===> rdbuf error!\n");
    VAR_12->stats.read_buf_err++;
    VAR_12->sync = VAR_4;
    continue;
   }

   if (VAR_13 & VAR_8) {

    FUNC_3(VAR_12->net_dev, "===> wrbuf error!\n");
    VAR_12->stats.write_buf_err++;
    VAR_12->sync = VAR_4;
    continue;
   }




   if (VAR_12->sync == VAR_3) {
    if (VAR_13 & VAR_6)
     FUNC_11(VAR_12);
   }

   FUNC_0(VAR_12, VAR_13);
  }

  if (VAR_12->sync == VAR_3)
   FUNC_12(VAR_12);
 }
 FUNC_14(VAR_10);
 FUNC_4(VAR_12->net_dev, "SPI thread exit\n");

 return 0;
}
