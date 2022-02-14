
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int raw_link_id; int link_id; } ;
struct cw1200_txinfo {TYPE_5__ txpriv; int queue; TYPE_4__* sta; int da; TYPE_1__* sta_priv; } ;
struct cw1200_common {scalar_t__ mode; TYPE_3__* link_id_db; TYPE_2__* hw; scalar_t__ enable_beacon; } ;
struct TYPE_9__ {int uapsd_queues; } ;
struct TYPE_8__ {int timestamp; } ;
struct TYPE_7__ {int wiphy; } ;
struct TYPE_6__ {int link_id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct cw1200_common*,int ) ;
 int FUNC_2 (struct cw1200_common*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct cw1200_common *VAR_5,
     struct cw1200_txinfo *VAR_6)
{
 if (VAR_6->sta && VAR_6->sta_priv->link_id)
  VAR_6->txpriv.raw_link_id =
    VAR_6->txpriv.link_id =
    VAR_6->sta_priv->link_id;
 else if (VAR_5->mode != VAR_3)
  VAR_6->txpriv.raw_link_id =
    VAR_6->txpriv.link_id = 0;
 else if (FUNC_3(VAR_6->da)) {
  if (VAR_5->enable_beacon) {
   VAR_6->txpriv.raw_link_id = 0;
   VAR_6->txpriv.link_id = VAR_0;
  } else {
   VAR_6->txpriv.raw_link_id = 0;
   VAR_6->txpriv.link_id = 0;
  }
 } else {
  VAR_6->txpriv.link_id = FUNC_2(VAR_5, VAR_6->da);
  if (!VAR_6->txpriv.link_id)
   VAR_6->txpriv.link_id = FUNC_1(VAR_5, VAR_6->da);
  if (!VAR_6->txpriv.link_id) {
   FUNC_4(VAR_5->hw->wiphy,
      "No more link IDs available.\n");
   return -VAR_2;
  }
  VAR_6->txpriv.raw_link_id = VAR_6->txpriv.link_id;
 }
 if (VAR_6->txpriv.raw_link_id)
  VAR_5->link_id_db[VAR_6->txpriv.raw_link_id - 1].timestamp =
    VAR_4;
 if (VAR_6->sta && (VAR_6->sta->uapsd_queues & FUNC_0(VAR_6->queue)))
  VAR_6->txpriv.link_id = VAR_1;
 return 0;
}
