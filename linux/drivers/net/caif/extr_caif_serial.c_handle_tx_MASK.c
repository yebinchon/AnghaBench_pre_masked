
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; } ;
struct sk_buff {int len; int data; } ;
struct TYPE_9__ {int (* flowctrl ) (TYPE_4__*,int ) ;} ;
struct TYPE_11__ {scalar_t__ qlen; } ;
struct ser_device {int tx_started; int state; TYPE_4__* dev; TYPE_3__ common; TYPE_5__ head; struct tty_struct* tty; } ;
struct TYPE_8__ {int tx_bytes; int tx_packets; } ;
struct TYPE_10__ {TYPE_2__ stats; } ;
struct TYPE_7__ {int (* write ) (struct tty_struct*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct tty_struct*,int ,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_4 (TYPE_5__*) ;
 struct sk_buff* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct tty_struct*,int ,int) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (struct tty_struct*) ;
 int FUNC_12 (struct ser_device*) ;

__attribute__((used)) static int FUNC_13(struct ser_device *VAR_6)
{
 struct tty_struct *VAR_7;
 struct sk_buff *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_7 = VAR_6->tty;
 VAR_6->tx_started = 1;


 if (FUNC_10(VAR_1, &VAR_6->state))
  return 0;


 while ((VAR_8 = FUNC_5(&VAR_6->head)) != ((void*)0)) {


  VAR_10 = VAR_8->len;
  VAR_11 = FUNC_11(VAR_7);
  if (!VAR_11)
   break;
  if (VAR_11 > VAR_5)
   VAR_11 = VAR_5;
  if (VAR_10 > VAR_11)
   VAR_10 = VAR_11;


  if (!VAR_4) {
   VAR_9 = VAR_7->ops->write(VAR_7, VAR_8->data, VAR_10);
   FUNC_12(VAR_6);
  } else {
   VAR_9 = VAR_10;
   FUNC_3(VAR_7, VAR_8->data, ((void*)0), VAR_10);
  }
  VAR_6->dev->stats.tx_packets++;
  VAR_6->dev->stats.tx_bytes += VAR_9;


  if (VAR_9 < 0)
   goto error;

  FUNC_6(VAR_8, VAR_9);
  if (VAR_8->len == 0) {
   struct sk_buff *VAR_12 = FUNC_4(&VAR_6->head);
   FUNC_0(VAR_12 != VAR_8);
   FUNC_2(VAR_8);
  }
 }

 if (VAR_6->head.qlen <= VAR_3 &&
  FUNC_9(VAR_0, &VAR_6->state) &&
  VAR_6->common.flowctrl != ((void*)0))
    VAR_6->common.flowctrl(VAR_6->dev, VAR_2);
 FUNC_1(VAR_1, &VAR_6->state);
 return 0;
error:
 FUNC_1(VAR_1, &VAR_6->state);
 return VAR_9;
}
