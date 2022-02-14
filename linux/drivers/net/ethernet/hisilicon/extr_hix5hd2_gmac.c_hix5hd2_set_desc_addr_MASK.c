
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int phys_addr; } ;
struct TYPE_7__ {int phys_addr; } ;
struct TYPE_6__ {int phys_addr; } ;
struct TYPE_5__ {int phys_addr; } ;
struct hix5hd2_priv {TYPE_4__ tx_bq; TYPE_3__ tx_rq; TYPE_2__ rx_bq; TYPE_1__ rx_fq; } ;


 int FUNC_0 (struct hix5hd2_priv*,int ) ;
 int FUNC_1 (struct hix5hd2_priv*,int ) ;
 int FUNC_2 (struct hix5hd2_priv*,int ) ;
 int FUNC_3 (struct hix5hd2_priv*,int ) ;

__attribute__((used)) static void FUNC_4(struct hix5hd2_priv *VAR_0)
{
 FUNC_1(VAR_0, VAR_0->rx_fq.phys_addr);
 FUNC_0(VAR_0, VAR_0->rx_bq.phys_addr);
 FUNC_3(VAR_0, VAR_0->tx_rq.phys_addr);
 FUNC_2(VAR_0, VAR_0->tx_bq.phys_addr);
}
