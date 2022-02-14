
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {void* count; } ;
struct TYPE_8__ {void* count; } ;
struct TYPE_7__ {void* count; } ;
struct TYPE_6__ {void* count; } ;
struct hix5hd2_priv {TYPE_5__* pool; TYPE_4__ tx_rq; TYPE_3__ tx_bq; TYPE_2__ rx_bq; TYPE_1__ rx_fq; struct device* dev; } ;
struct hix5hd2_desc {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_10__ {int count; int size; int phys_addr; struct hix5hd2_desc* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 struct hix5hd2_desc* FUNC_0 (struct device*,int,int *,int ) ;
 int FUNC_1 (struct hix5hd2_priv*) ;

__attribute__((used)) static int FUNC_2(struct hix5hd2_priv *VAR_5)
{
 struct device *VAR_6 = VAR_5->dev;
 struct hix5hd2_desc *VAR_7;
 dma_addr_t VAR_8;
 int VAR_9, VAR_10;

 VAR_5->rx_fq.count = VAR_3;
 VAR_5->rx_bq.count = VAR_3;
 VAR_5->tx_bq.count = VAR_4;
 VAR_5->tx_rq.count = VAR_4;

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_9 = VAR_5->pool[VAR_10].count * sizeof(struct hix5hd2_desc);
  VAR_7 = FUNC_0(VAR_6, VAR_9, &VAR_8,
            VAR_1);
  if (VAR_7 == ((void*)0))
   goto error_free_pool;

  VAR_5->pool[VAR_10].size = VAR_9;
  VAR_5->pool[VAR_10].desc = VAR_7;
  VAR_5->pool[VAR_10].phys_addr = VAR_8;
 }
 return 0;

error_free_pool:
 FUNC_1(VAR_5);

 return -VAR_0;
}
