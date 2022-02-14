
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00_dev {TYPE_8__* rx; TYPE_6__* bcn; TYPE_4__* atim; TYPE_2__* tx; } ;
struct queue_entry_priv_mmio {int desc_dma; } ;
struct TYPE_16__ {TYPE_7__* entries; int limit; int desc_size; } ;
struct TYPE_15__ {struct queue_entry_priv_mmio* priv_data; } ;
struct TYPE_14__ {TYPE_5__* entries; } ;
struct TYPE_13__ {struct queue_entry_priv_mmio* priv_data; } ;
struct TYPE_12__ {TYPE_3__* entries; int limit; } ;
struct TYPE_11__ {struct queue_entry_priv_mmio* priv_data; } ;
struct TYPE_10__ {TYPE_1__* entries; int limit; int desc_size; } ;
struct TYPE_9__ {struct queue_entry_priv_mmio* priv_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rt2x00_dev *VAR_18)
{
 struct queue_entry_priv_mmio *VAR_19;
 u32 VAR_20;




 VAR_20 = FUNC_1(VAR_18, VAR_5);
 FUNC_0(&VAR_20, VAR_9, VAR_18->tx[0].desc_size);
 FUNC_0(&VAR_20, VAR_8, VAR_18->tx[1].limit);
 FUNC_0(&VAR_20, VAR_6, VAR_18->atim->limit);
 FUNC_0(&VAR_20, VAR_7, VAR_18->tx[0].limit);
 FUNC_2(VAR_18, VAR_5, VAR_20);

 VAR_19 = VAR_18->tx[1].entries[0].priv_data;
 VAR_20 = FUNC_1(VAR_18, VAR_10);
 FUNC_0(&VAR_20, VAR_11,
      VAR_19->desc_dma);
 FUNC_2(VAR_18, VAR_10, VAR_20);

 VAR_19 = VAR_18->tx[0].entries[0].priv_data;
 VAR_20 = FUNC_1(VAR_18, VAR_14);
 FUNC_0(&VAR_20, VAR_15,
      VAR_19->desc_dma);
 FUNC_2(VAR_18, VAR_14, VAR_20);

 VAR_19 = VAR_18->atim->entries[0].priv_data;
 VAR_20 = FUNC_1(VAR_18, VAR_12);
 FUNC_0(&VAR_20, VAR_13,
      VAR_19->desc_dma);
 FUNC_2(VAR_18, VAR_12, VAR_20);

 VAR_19 = VAR_18->bcn->entries[0].priv_data;
 VAR_20 = FUNC_1(VAR_18, VAR_16);
 FUNC_0(&VAR_20, VAR_17,
      VAR_19->desc_dma);
 FUNC_2(VAR_18, VAR_16, VAR_20);

 VAR_20 = FUNC_1(VAR_18, VAR_0);
 FUNC_0(&VAR_20, VAR_2, VAR_18->rx->desc_size);
 FUNC_0(&VAR_20, VAR_1, VAR_18->rx->limit);
 FUNC_2(VAR_18, VAR_0, VAR_20);

 VAR_19 = VAR_18->rx->entries[0].priv_data;
 VAR_20 = FUNC_1(VAR_18, VAR_3);
 FUNC_0(&VAR_20, VAR_4,
      VAR_19->desc_dma);
 FUNC_2(VAR_18, VAR_3, VAR_20);

 return 0;
}
