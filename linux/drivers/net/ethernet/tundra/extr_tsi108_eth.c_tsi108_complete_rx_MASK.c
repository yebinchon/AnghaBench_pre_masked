
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rx_fifo_errors; int rx_crc_errors; } ;
struct tsi108_prv_data {int rxtail; TYPE_2__* rxring; int misclock; TYPE_1__ stats; scalar_t__ rxfree; struct sk_buff** rxskbs; } ;
struct sk_buff {int protocol; int * data; } ;
struct net_device {int name; } ;
struct TYPE_4__ {int misc; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 struct tsi108_prv_data* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct tsi108_prv_data*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_5, int VAR_6)
{
 struct tsi108_prv_data *VAR_7 = FUNC_2(VAR_5);
 int VAR_8 = 0;

 while (VAR_7->rxfree && VAR_8 != VAR_6) {
  int VAR_9 = VAR_7->rxtail;
  struct sk_buff *VAR_10;

  if (VAR_7->rxring[VAR_9].misc & VAR_4)
   break;

  VAR_10 = VAR_7->rxskbs[VAR_9];
  VAR_7->rxtail = (VAR_7->rxtail + 1) % VAR_0;
  VAR_7->rxfree--;
  VAR_8++;

  if (VAR_7->rxring[VAR_9].misc & VAR_1) {
   FUNC_7(&VAR_7->misclock);

   if (VAR_7->rxring[VAR_9].misc & VAR_2)
    VAR_7->stats.rx_crc_errors++;
   if (VAR_7->rxring[VAR_9].misc & VAR_3)
    VAR_7->stats.rx_fifo_errors++;

   FUNC_8(&VAR_7->misclock);

   FUNC_0(VAR_10);
   continue;
  }
  if (FUNC_3(VAR_7)) {
   int VAR_11;
   FUNC_5("%s: Rx Frame contents (%d)\n",
          VAR_5->name, VAR_7->rxring[VAR_9].len);
   for (VAR_11 = 0; VAR_11 < VAR_7->rxring[VAR_9].len; VAR_11++)
    FUNC_5(" %2.2x", VAR_10->data[VAR_11]);
   FUNC_5(".\n");
  }

  FUNC_6(VAR_10, VAR_7->rxring[VAR_9].len);
  VAR_10->protocol = FUNC_1(VAR_10, VAR_5);
  FUNC_4(VAR_10);
 }

 return VAR_8;
}
