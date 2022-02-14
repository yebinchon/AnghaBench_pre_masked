
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; } ;
struct rocker_port {int tx_ring; TYPE_2__* dev; struct rocker* rocker; } ;
struct rocker_desc_info {int dummy; } ;
struct rocker {int dummy; } ;
struct napi_struct {int dummy; } ;
struct TYPE_5__ {int tx_errors; int tx_bytes; int tx_packets; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct napi_struct*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 struct sk_buff* FUNC_6 (struct rocker_desc_info const*) ;
 int FUNC_7 (struct rocker_desc_info const*) ;
 struct rocker_desc_info* FUNC_8 (int *) ;
 int FUNC_9 (struct rocker const*,int *,scalar_t__) ;
 struct rocker_port* FUNC_10 (struct napi_struct*) ;
 int FUNC_11 (struct rocker_port*,struct rocker_desc_info const*) ;

__attribute__((used)) static int FUNC_12(struct napi_struct *VAR_0, int VAR_1)
{
 struct rocker_port *VAR_2 = FUNC_10(VAR_0);
 const struct rocker *VAR_3 = VAR_2->rocker;
 const struct rocker_desc_info *VAR_4;
 u32 VAR_5 = 0;
 int VAR_6;


 while ((VAR_4 = FUNC_8(&VAR_2->tx_ring))) {
  struct sk_buff *VAR_7;

  VAR_6 = FUNC_7(VAR_4);
  if (VAR_6 && FUNC_2())
   FUNC_3(VAR_2->dev, "tx desc received with err %d\n",
       VAR_6);
  FUNC_11(VAR_2, VAR_4);

  VAR_7 = FUNC_6(VAR_4);
  if (VAR_6 == 0) {
   VAR_2->dev->stats.tx_packets++;
   VAR_2->dev->stats.tx_bytes += VAR_7->len;
  } else {
   VAR_2->dev->stats.tx_errors++;
  }

  FUNC_0(VAR_7);
  VAR_5++;
 }

 if (VAR_5 && FUNC_4(VAR_2->dev))
  FUNC_5(VAR_2->dev);

 FUNC_1(VAR_0);
 FUNC_9(VAR_3, &VAR_2->tx_ring, VAR_5);

 return 0;
}
