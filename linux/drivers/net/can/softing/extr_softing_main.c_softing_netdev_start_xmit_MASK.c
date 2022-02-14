
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ pending; scalar_t__ echo_put; } ;
struct softing_priv {TYPE_2__ tx; scalar_t__ index; struct softing* card; } ;
struct TYPE_6__ {scalar_t__ pending; scalar_t__ last_bus; } ;
struct TYPE_4__ {int up; } ;
struct softing {struct net_device** net; TYPE_3__ tx; int spin; int * dpram; TYPE_1__ fw; } ;
struct sk_buff {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct can_frame {int can_id; int can_dlc; int * data; } ;
typedef int netdev_tx_t ;
typedef int buf ;


 int FUNC_0 (struct net_device**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (struct net_device*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int*,int *,int ) ;
 int FUNC_6 (int *,int*,int) ;
 int FUNC_7 (int*,int ,int) ;
 struct softing_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_12(struct sk_buff *VAR_15,
  struct net_device *VAR_16)
{
 struct softing_priv *VAR_17 = FUNC_8(VAR_16);
 struct softing *VAR_18 = VAR_17->card;
 int VAR_19;
 uint8_t *VAR_20;
 uint8_t VAR_21, VAR_22;
 struct can_frame *VAR_23 = (struct can_frame *)VAR_15->data;
 uint8_t VAR_24[VAR_9];

 if (FUNC_1(VAR_16, VAR_15))
  return VAR_12;

 FUNC_10(&VAR_18->spin);

 VAR_19 = VAR_11;
 if (!VAR_18->fw.up ||
   (VAR_18->tx.pending >= VAR_13) ||
   (VAR_17->tx.pending >= VAR_14))
  goto xmit_done;
 VAR_21 = FUNC_3(&VAR_18->dpram[VAR_10]);
 VAR_22 = FUNC_3(&VAR_18->dpram[VAR_8]);
 if (VAR_21 == VAR_22)

  goto xmit_done;
 FUNC_7(VAR_24, 0, sizeof(VAR_24));
 VAR_20 = VAR_24;
 *VAR_20 = VAR_4;
 if (VAR_23->can_id & VAR_1)
  *VAR_20 |= VAR_3;
 if (VAR_23->can_id & VAR_0)
  *VAR_20 |= VAR_5;
 if (VAR_17->index)
  *VAR_20 |= VAR_2;
 ++VAR_20;
 *VAR_20++ = VAR_23->can_dlc;
 *VAR_20++ = (VAR_23->can_id >> 0);
 *VAR_20++ = (VAR_23->can_id >> 8);
 if (VAR_23->can_id & VAR_0) {
  *VAR_20++ = (VAR_23->can_id >> 16);
  *VAR_20++ = (VAR_23->can_id >> 24);
 } else {

  VAR_20 += 1;
 }
 if (!(VAR_23->can_id & VAR_1))
  FUNC_5(VAR_20, &VAR_23->data[0], VAR_23->can_dlc);
 FUNC_6(&VAR_18->dpram[VAR_6 + VAR_9 * VAR_21],
   VAR_24, VAR_9);
 if (++VAR_21 >= VAR_7)
  VAR_21 = 0;
 FUNC_4(VAR_21, &VAR_18->dpram[VAR_10]);
 VAR_18->tx.last_bus = VAR_17->index;
 ++VAR_18->tx.pending;
 ++VAR_17->tx.pending;
 FUNC_2(VAR_15, VAR_16, VAR_17->tx.echo_put);
 ++VAR_17->tx.echo_put;
 if (VAR_17->tx.echo_put >= VAR_14)
  VAR_17->tx.echo_put = 0;

 VAR_19 = VAR_12;
xmit_done:
 FUNC_11(&VAR_18->spin);
 if (VAR_18->tx.pending >= VAR_13) {
  int VAR_25;
  for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_18->net); ++VAR_25) {
   if (VAR_18->net[VAR_25])
    FUNC_9(VAR_18->net[VAR_25]);
  }
 }
 if (VAR_19 != VAR_12)
  FUNC_9(VAR_16);

 return VAR_19;
}
