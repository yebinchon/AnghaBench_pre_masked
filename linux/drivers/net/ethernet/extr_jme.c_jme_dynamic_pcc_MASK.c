
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dynpcc_info {scalar_t__ last_bytes; scalar_t__ last_pkts; scalar_t__ intr_cnt; scalar_t__ attempt; scalar_t__ cur; int cnt; } ;
struct jme_adapter {int rxclean_task; struct dynpcc_info dpi; } ;
struct TYPE_2__ {scalar_t__ rx_bytes; scalar_t__ rx_packets; } ;


 TYPE_1__ FUNC_0 (struct jme_adapter*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct dynpcc_info*,int ) ;
 int FUNC_2 (struct jme_adapter*,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct jme_adapter *VAR_6)
{
 register struct dynpcc_info *VAR_7 = &(VAR_6->dpi);

 if ((FUNC_0(VAR_6).rx_bytes - VAR_7->last_bytes) > VAR_5)
  FUNC_1(VAR_7, VAR_4);
 else if ((FUNC_0(VAR_6).rx_packets - VAR_7->last_pkts) > VAR_3 ||
   VAR_7->intr_cnt > VAR_0)
  FUNC_1(VAR_7, VAR_2);
 else
  FUNC_1(VAR_7, VAR_1);

 if (FUNC_4(VAR_7->attempt != VAR_7->cur && VAR_7->cnt > 5)) {
  if (VAR_7->attempt < VAR_7->cur)
   FUNC_3(&VAR_6->rxclean_task);
  FUNC_2(VAR_6, VAR_7->attempt);
  VAR_7->cur = VAR_7->attempt;
  VAR_7->cnt = 0;
 }
}
