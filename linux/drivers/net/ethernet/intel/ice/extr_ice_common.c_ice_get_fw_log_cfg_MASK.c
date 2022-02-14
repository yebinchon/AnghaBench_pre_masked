
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_4__ {TYPE_1__* evnts; } ;
struct ice_hw {TYPE_2__ fw_log; } ;
struct ice_aqc_fw_logging_data {int * entry; } ;
struct ice_aq_desc {int flags; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_3__ {size_t cur; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ice_aqc_fw_logging_data*) ;
 struct ice_aqc_fw_logging_data* FUNC_2 (int ,size_t,int ) ;
 int FUNC_3 (struct ice_hw*,struct ice_aq_desc*,struct ice_aqc_fw_logging_data*,size_t,int *) ;
 int VAR_10 ;
 int FUNC_4 (struct ice_aq_desc*,int ) ;
 int FUNC_5 (struct ice_hw*) ;
 size_t FUNC_6 (int ) ;

__attribute__((used)) static enum ice_status FUNC_7(struct ice_hw *VAR_11)
{
 struct ice_aqc_fw_logging_data *VAR_12;
 struct ice_aq_desc VAR_13;
 enum ice_status VAR_14;
 u16 VAR_15;

 VAR_15 = VAR_9;
 VAR_12 = FUNC_2(FUNC_5(VAR_11), VAR_15, VAR_0);
 if (!VAR_12)
  return VAR_8;

 FUNC_4(&VAR_13, VAR_10);

 VAR_13.flags |= FUNC_0(VAR_6);
 VAR_13.flags |= FUNC_0(VAR_7);

 VAR_14 = FUNC_3(VAR_11, &VAR_13, VAR_12, VAR_15, ((void*)0));
 if (!VAR_14) {
  u16 VAR_16;


  for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
   u16 VAR_17, VAR_18, VAR_19;

   VAR_17 = FUNC_6(VAR_12->entry[VAR_16]);
   VAR_18 = (VAR_17 & VAR_3) >> VAR_5;
   VAR_19 = (VAR_17 & VAR_1) >> VAR_2;

   if (VAR_18 < VAR_4)
    VAR_11->fw_log.evnts[VAR_18].cur = VAR_19;
  }
 }

 FUNC_1(FUNC_5(VAR_11), VAR_12);

 return VAR_14;
}
