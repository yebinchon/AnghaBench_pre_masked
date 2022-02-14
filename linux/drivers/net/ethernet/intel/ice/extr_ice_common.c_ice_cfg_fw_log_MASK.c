
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct TYPE_6__ {int actv_evnts; TYPE_2__* evnts; scalar_t__ uart_en; scalar_t__ cq_en; } ;
struct ice_hw {TYPE_3__ fw_log; int adminq; } ;
struct ice_aqc_fw_logging_data {int * entry; } ;
struct ice_aqc_fw_logging {int log_ctrl; int log_ctrl_valid; } ;
struct TYPE_4__ {struct ice_aqc_fw_logging fw_logging; } ;
struct ice_aq_desc {int flags; TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_5__ {int cfg; int cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t FUNC_0 (size_t) ;
 int VAR_11 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,struct ice_aqc_fw_logging_data*) ;
 struct ice_aqc_fw_logging_data* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct ice_hw*,struct ice_aq_desc*,void*,size_t,int *) ;
 int VAR_12 ;
 int FUNC_5 (struct ice_hw*,int *) ;
 int FUNC_6 (struct ice_aq_desc*,int ) ;
 int FUNC_7 (struct ice_hw*) ;
 int FUNC_8 (struct ice_hw*) ;
 size_t FUNC_9 (int ) ;

__attribute__((used)) static enum ice_status FUNC_10(struct ice_hw *VAR_13, bool VAR_14)
{
 struct ice_aqc_fw_logging_data *VAR_15 = ((void*)0);
 struct ice_aqc_fw_logging *VAR_16;
 enum ice_status VAR_17 = 0;
 u16 VAR_18, VAR_19 = 0, VAR_20 = 0;
 struct ice_aq_desc VAR_21;
 u8 VAR_22 = 0;
 void *VAR_23 = ((void*)0);

 if (!VAR_13->fw_log.cq_en && !VAR_13->fw_log.uart_en)
  return 0;


 if (!VAR_14 &&
     (!VAR_13->fw_log.actv_evnts || !FUNC_5(VAR_13, &VAR_13->adminq)))
  return 0;


 VAR_17 = FUNC_7(VAR_13);
 if (VAR_17)
  return VAR_17;

 FUNC_6(&VAR_21, VAR_12);
 VAR_16 = &VAR_21.params.fw_logging;


 if (VAR_13->fw_log.cq_en)
  VAR_16->log_ctrl_valid |= VAR_2;

 if (VAR_13->fw_log.uart_en)
  VAR_16->log_ctrl_valid |= VAR_8;

 if (VAR_14) {



  for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
   u16 VAR_24;


   VAR_22 |= VAR_13->fw_log.evnts[VAR_18].cfg;

   if (VAR_13->fw_log.evnts[VAR_18].cfg == VAR_13->fw_log.evnts[VAR_18].cur)
    continue;

   if (!VAR_15) {
    VAR_15 = FUNC_3(FUNC_8(VAR_13),
          VAR_11,
          VAR_0);
    if (!VAR_15)
     return VAR_10;
   }

   VAR_24 = VAR_18 << VAR_6;
   VAR_24 |= VAR_13->fw_log.evnts[VAR_18].cfg << VAR_3;
   VAR_15->entry[VAR_19++] = FUNC_1(VAR_24);
  }





  if (VAR_22) {

   if (!VAR_19)
    goto out;

   if (VAR_13->fw_log.cq_en)
    VAR_16->log_ctrl |= VAR_1;

   if (VAR_13->fw_log.uart_en)
    VAR_16->log_ctrl |= VAR_7;

   VAR_23 = VAR_15;
   VAR_20 = FUNC_0(VAR_19);
   VAR_21.flags |= FUNC_1(VAR_9);
  }
 }

 VAR_17 = FUNC_4(VAR_13, &VAR_21, VAR_23, VAR_20, ((void*)0));
 if (!VAR_17) {






  u16 VAR_25 = VAR_14 ? VAR_19 : (u16)VAR_5;

  VAR_13->fw_log.actv_evnts = VAR_22;
  for (VAR_18 = 0; VAR_18 < VAR_25; VAR_18++) {
   u16 VAR_26, VAR_27;

   if (!VAR_14) {






    VAR_13->fw_log.evnts[VAR_18].cur = 0;
    continue;
   }

   VAR_26 = FUNC_9(VAR_15->entry[VAR_18]);
   VAR_27 = (VAR_26 & VAR_4) >> VAR_6;
   VAR_13->fw_log.evnts[VAR_27].cur = VAR_13->fw_log.evnts[VAR_27].cfg;
  }
 }

out:
 if (VAR_15)
  FUNC_2(FUNC_8(VAR_13), VAR_15);

 return VAR_17;
}
