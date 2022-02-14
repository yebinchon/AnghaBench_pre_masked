
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct TYPE_3__ {size_t size; int pa; int * va; } ;
struct TYPE_4__ {TYPE_1__ desc_buf; int cmd_buf; } ;
struct ice_ctl_q_info {int num_sq_entries; TYPE_2__ sq; } ;
struct ice_aq_desc {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int,int) ;
 int * FUNC_1 (int ,size_t,int *,int) ;
 int FUNC_2 (int ,size_t,int *,int ) ;
 int FUNC_3 (struct ice_hw*) ;

__attribute__((used)) static enum ice_status
FUNC_4(struct ice_hw *VAR_3, struct ice_ctl_q_info *VAR_4)
{
 size_t VAR_5 = VAR_4->num_sq_entries * sizeof(struct ice_aq_desc);

 VAR_4->sq.desc_buf.va = FUNC_1(FUNC_3(VAR_3), VAR_5,
       &VAR_4->sq.desc_buf.pa,
       VAR_0 | VAR_2);
 if (!VAR_4->sq.desc_buf.va)
  return VAR_1;
 VAR_4->sq.desc_buf.size = VAR_5;

 VAR_4->sq.cmd_buf = FUNC_0(FUNC_3(VAR_3), VAR_4->num_sq_entries,
          sizeof(struct ice_sq_cd), VAR_0);
 if (!VAR_4->sq.cmd_buf) {
  FUNC_2(FUNC_3(VAR_3), VAR_4->sq.desc_buf.size,
       VAR_4->sq.desc_buf.va, VAR_4->sq.desc_buf.pa);
  VAR_4->sq.desc_buf.va = ((void*)0);
  VAR_4->sq.desc_buf.pa = 0;
  VAR_4->sq.desc_buf.size = 0;
  return VAR_1;
 }

 return 0;
}
