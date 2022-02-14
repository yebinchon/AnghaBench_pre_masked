
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rxf_desc {int dummy; } ;
struct TYPE_8__ {int memsz; scalar_t__ pktsz; } ;
struct TYPE_5__ {TYPE_4__ m; } ;
struct TYPE_6__ {TYPE_4__ m; } ;
struct bdx_priv {TYPE_3__* ndev; TYPE_1__ rxf_fifo0; int rxdb; int rxf_size; int rxd_size; TYPE_2__ rxd_fifo0; } ;
struct TYPE_7__ {scalar_t__ mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct bdx_priv*,TYPE_4__*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_3(struct bdx_priv *VAR_11)
{
 VAR_1;

 if (FUNC_0(VAR_11, &VAR_11->rxd_fifo0.m, VAR_11->rxd_size,
     VAR_3, VAR_4,
     VAR_5, VAR_6))
  goto err_mem;
 if (FUNC_0(VAR_11, &VAR_11->rxf_fifo0.m, VAR_11->rxf_size,
     VAR_7, VAR_8,
     VAR_9, VAR_10))
  goto err_mem;
 VAR_11->rxdb = FUNC_1(VAR_11->rxf_fifo0.m.memsz /
         sizeof(struct rxf_desc));
 if (!VAR_11->rxdb)
  goto err_mem;

 VAR_11->rxf_fifo0.m.pktsz = VAR_11->ndev->mtu + VAR_2;
 return 0;

err_mem:
 FUNC_2(VAR_11->ndev, "Rx init failed\n");
 return -VAR_0;
}
