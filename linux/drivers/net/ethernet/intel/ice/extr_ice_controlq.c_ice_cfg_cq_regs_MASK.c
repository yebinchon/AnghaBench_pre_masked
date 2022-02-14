
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ice_hw {int dummy; } ;
struct TYPE_2__ {int pa; } ;
struct ice_ctl_q_ring {int len_ena_mask; TYPE_1__ desc_buf; int bal; int bah; int len; int tail; int head; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ice_hw*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ice_hw*,int ,int) ;

__attribute__((used)) static enum ice_status
FUNC_4(struct ice_hw *VAR_1, struct ice_ctl_q_ring *VAR_2, u16 VAR_3)
{

 FUNC_3(VAR_1, VAR_2->head, 0);
 FUNC_3(VAR_1, VAR_2->tail, 0);


 FUNC_3(VAR_1, VAR_2->len, (VAR_3 | VAR_2->len_ena_mask));
 FUNC_3(VAR_1, VAR_2->bal, FUNC_0(VAR_2->desc_buf.pa));
 FUNC_3(VAR_1, VAR_2->bah, FUNC_2(VAR_2->desc_buf.pa));


 if (FUNC_1(VAR_1, VAR_2->bal) != FUNC_0(VAR_2->desc_buf.pa))
  return VAR_0;

 return 0;
}
