
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rocker_desc_info {int dummy; } ;
struct TYPE_3__ {int goto_tbl; int in_pport_mask; int in_pport; } ;
struct TYPE_4__ {TYPE_1__ ig_port; } ;
struct ofdpa_flow_tbl_entry {TYPE_2__ key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rocker_desc_info*,int ,int ) ;
 scalar_t__ FUNC_1 (struct rocker_desc_info*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct rocker_desc_info *VAR_4,
          const struct ofdpa_flow_tbl_entry *VAR_5)
{
 if (FUNC_1(VAR_4, VAR_2,
          VAR_5->key.ig_port.in_pport))
  return -VAR_0;
 if (FUNC_1(VAR_4, VAR_3,
          VAR_5->key.ig_port.in_pport_mask))
  return -VAR_0;
 if (FUNC_0(VAR_4, VAR_1,
          VAR_5->key.ig_port.goto_tbl))
  return -VAR_0;

 return 0;
}
