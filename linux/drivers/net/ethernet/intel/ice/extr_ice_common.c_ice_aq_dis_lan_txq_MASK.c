
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct ice_sq_cd {int dummy; } ;
struct TYPE_6__ {int sq_last_status; } ;
struct TYPE_5__ {scalar_t__ vf_base_id; } ;
struct ice_hw {TYPE_3__ adminq; TYPE_2__ func_caps; } ;
struct ice_aqc_dis_txqs {int cmd_type; int vmvf_and_timeout; scalar_t__ num_entries; } ;
struct ice_aqc_dis_txq_item {int num_qs; int * q_id; } ;
struct TYPE_4__ {struct ice_aqc_dis_txqs dis_txqs; } ;
struct ice_aq_desc {int flags; TYPE_1__ params; } ;
typedef int qg_list ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_disq_rst_src { ____Placeholder_ice_disq_rst_src } ice_disq_rst_src ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;



 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ice_hw*,struct ice_aq_desc*,struct ice_aqc_dis_txq_item*,scalar_t__,struct ice_sq_cd*) ;
 int VAR_10 ;
 int FUNC_2 (struct ice_hw*,int ,char*,scalar_t__,int ) ;
 int FUNC_3 (struct ice_aq_desc*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static enum ice_status
FUNC_5(struct ice_hw *VAR_11, u8 VAR_12,
     struct ice_aqc_dis_txq_item *VAR_13, u16 VAR_14,
     enum ice_disq_rst_src VAR_15, u16 VAR_16,
     struct ice_sq_cd *VAR_17)
{
 struct ice_aqc_dis_txqs *VAR_18;
 struct ice_aq_desc VAR_19;
 enum ice_status VAR_20;
 u16 VAR_21, VAR_22 = 0;

 VAR_18 = &VAR_19.params.dis_txqs;
 FUNC_3(&VAR_19, VAR_10);


 if (!VAR_13 && !VAR_15)
  return VAR_8;

 if (VAR_12 > VAR_9)
  return VAR_8;

 VAR_18->num_entries = VAR_12;

 VAR_18->vmvf_and_timeout = FUNC_0((5 << VAR_4) &
         VAR_3);

 switch (VAR_15) {
 case 128:
  VAR_18->cmd_type = VAR_2;
  VAR_18->vmvf_and_timeout |=
   FUNC_0(VAR_16 & VAR_5);
  break;
 case 129:
  VAR_18->cmd_type = VAR_1;

  VAR_18->vmvf_and_timeout |=
   FUNC_0((VAR_16 + VAR_11->func_caps.vf_base_id) &
        VAR_5);
  break;
 case 130:
 default:
  break;
 }


 VAR_18->cmd_type |= VAR_0;

 if (!VAR_13)
  goto do_aq;




 VAR_19.flags |= FUNC_0(VAR_6);

 for (VAR_21 = 0; VAR_21 < VAR_12; ++VAR_21) {

  VAR_22 += VAR_13[VAR_21].num_qs * sizeof(VAR_13[VAR_21].q_id);


  VAR_22 += sizeof(VAR_13[VAR_21]) - sizeof(VAR_13[VAR_21].q_id);


  if ((VAR_13[VAR_21].num_qs % 2) == 0)
   VAR_22 += 2;
 }

 if (VAR_14 != VAR_22)
  return VAR_8;

do_aq:
 VAR_20 = FUNC_1(VAR_11, &VAR_19, VAR_13, VAR_14, VAR_17);
 if (VAR_20) {
  if (!VAR_13)
   FUNC_2(VAR_11, VAR_7, "VM%d disable failed %d\n",
      VAR_16, VAR_11->adminq.sq_last_status);
  else
   FUNC_2(VAR_11, VAR_7, "disable queue %d failed %d\n",
      FUNC_4(VAR_13[0].q_id[0]),
      VAR_11->adminq.sq_last_status);
 }
 return VAR_20;
}
