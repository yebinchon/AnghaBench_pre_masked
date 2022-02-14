
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct fc_rpsc_speed_info_s {int port_speed_cap; int port_op_speed; } ;
struct fc_rpsc_acc_s {TYPE_1__* speed_info; void* num_entries; int command; } ;
typedef int __be16 ;
struct TYPE_2__ {void* port_op_speed; void* port_speed_cap; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct fchs_s*,int ,int ,int ) ;
 int FUNC_2 (struct fc_rpsc_acc_s*,int ,int) ;

u16
FUNC_3(struct fchs_s *VAR_1, struct fc_rpsc_acc_s *VAR_2,
  u32 VAR_3, u32 VAR_4, __be16 VAR_5,
    struct fc_rpsc_speed_info_s *VAR_6)
{
 FUNC_2(VAR_2, 0, sizeof(struct fc_rpsc_acc_s));

 FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5);

 VAR_2->command = VAR_0;
 VAR_2->num_entries = FUNC_0(1);

 VAR_2->speed_info[0].port_speed_cap =
  FUNC_0(VAR_6->port_speed_cap);

 VAR_2->speed_info[0].port_op_speed =
  FUNC_0(VAR_6->port_op_speed);

 return sizeof(struct fc_rpsc_acc_s);
}
