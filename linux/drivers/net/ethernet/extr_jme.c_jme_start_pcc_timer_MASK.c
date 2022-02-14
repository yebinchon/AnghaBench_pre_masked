
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dynpcc_info {scalar_t__ intr_cnt; int last_pkts; int last_bytes; } ;
struct jme_adapter {struct dynpcc_info dpi; } ;
struct TYPE_2__ {int rx_packets; int rx_bytes; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (struct jme_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct jme_adapter*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct jme_adapter *VAR_4)
{
 struct dynpcc_info *VAR_5 = &(VAR_4->dpi);
 VAR_5->last_bytes = FUNC_0(VAR_4).rx_bytes;
 VAR_5->last_pkts = FUNC_0(VAR_4).rx_packets;
 VAR_5->intr_cnt = 0;
 FUNC_1(VAR_4, VAR_0,
  VAR_3 | ((0xFFFFFF - VAR_1) & VAR_2));
}
