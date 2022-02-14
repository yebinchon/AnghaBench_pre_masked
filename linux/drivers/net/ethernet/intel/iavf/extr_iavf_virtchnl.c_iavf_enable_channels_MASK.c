
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_tc_info {int num_tc; TYPE_2__* list; } ;
struct TYPE_8__ {int state; TYPE_3__* ch_info; } ;
struct iavf_adapter {scalar_t__ current_op; int num_tc; int aq_required; int flags; TYPE_4__ ch_config; TYPE_1__* pdev; } ;
struct TYPE_7__ {int max_tx_rate; int offset; int count; } ;
struct TYPE_6__ {int max_tx_rate; scalar_t__ pad; int offset; int count; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct iavf_adapter*,scalar_t__,int *,size_t) ;
 int FUNC_2 (struct virtchnl_tc_info*) ;
 struct virtchnl_tc_info* FUNC_3 (size_t,int ) ;
 int VAR_6 ;
 size_t FUNC_4 (struct virtchnl_tc_info*,int ,int) ;

void FUNC_5(struct iavf_adapter *VAR_7)
{
 struct virtchnl_tc_info *VAR_8 = ((void*)0);
 size_t VAR_9;
 int VAR_10;

 if (VAR_7->current_op != VAR_4) {

  FUNC_0(&VAR_7->pdev->dev, "Cannot configure mqprio, command %d pending\n",
   VAR_7->current_op);
  return;
 }

 VAR_9 = FUNC_4(VAR_8, VAR_6, VAR_7->num_tc - 1);
 VAR_8 = FUNC_3(VAR_9, VAR_0);
 if (!VAR_8)
  return;
 VAR_8->num_tc = VAR_7->num_tc;
 for (VAR_10 = 0; VAR_10 < VAR_8->num_tc; VAR_10++) {
  VAR_8->list[VAR_10].count = VAR_7->ch_config.ch_info[VAR_10].count;
  VAR_8->list[VAR_10].offset = VAR_7->ch_config.ch_info[VAR_10].offset;
  VAR_8->list[VAR_10].pad = 0;
  VAR_8->list[VAR_10].max_tx_rate =
    VAR_7->ch_config.ch_info[VAR_10].max_tx_rate;
 }

 VAR_7->ch_config.state = VAR_5;
 VAR_7->flags |= VAR_2;
 VAR_7->current_op = VAR_3;
 VAR_7->aq_required &= ~VAR_1;
 FUNC_1(VAR_7, VAR_3, (u8 *)VAR_8, VAR_9);
 FUNC_2(VAR_8);
}
