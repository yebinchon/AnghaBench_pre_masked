
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ofdpa_port {int dummy; } ;
struct TYPE_2__ {int pop_vlan; } ;
struct ofdpa_group_tbl_entry {TYPE_1__ l2_interface; int group_id; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct ofdpa_group_tbl_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (struct ofdpa_port*,int,struct ofdpa_group_tbl_entry*) ;

__attribute__((used)) static int FUNC_3(struct ofdpa_port *VAR_2,
        int VAR_3, __be16 VAR_4,
        u32 VAR_5, int VAR_6)
{
 struct ofdpa_group_tbl_entry *VAR_7;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->group_id = FUNC_0(VAR_4, VAR_5);
 VAR_7->l2_interface.pop_vlan = VAR_6;

 return FUNC_2(VAR_2, VAR_3, VAR_7);
}
