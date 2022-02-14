
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rocker_desc_info {int dummy; } ;
struct TYPE_2__ {int pop_vlan; } ;
struct ofdpa_group_tbl_entry {TYPE_1__ l2_interface; int group_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct rocker_desc_info*,int ,int ) ;
 scalar_t__ FUNC_2 (struct rocker_desc_info*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct rocker_desc_info *VAR_3,
         struct ofdpa_group_tbl_entry *VAR_4)
{
 if (FUNC_1(VAR_3, VAR_1,
          FUNC_0(VAR_4->group_id)))
  return -VAR_0;
 if (FUNC_2(VAR_3, VAR_2,
         VAR_4->l2_interface.pop_vlan))
  return -VAR_0;

 return 0;
}
