
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ dir; } ;
struct TYPE_4__ {TYPE_1__ l2_key; } ;
struct bnxt_tc_flow_node {int flow_handle; TYPE_2__ flow; int flow_id; } ;
struct bnxt {int fw_cap; } ;
typedef int __le32 ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct bnxt *VAR_4,
        struct bnxt_tc_flow_node *VAR_5,
        __le16 *VAR_6, __le32 *VAR_7)
{
 u16 VAR_8;

 if (VAR_4->fw_cap & VAR_1) {
  *VAR_7 = VAR_5->flow_id;






  if (VAR_5->flow.l2_key.dir == VAR_0)
   VAR_8 = VAR_2 |
     VAR_3;
  else
   VAR_8 = VAR_3;

  *VAR_6 = FUNC_0(VAR_8);
 } else {
  *VAR_6 = VAR_5->flow_handle;
 }
}
