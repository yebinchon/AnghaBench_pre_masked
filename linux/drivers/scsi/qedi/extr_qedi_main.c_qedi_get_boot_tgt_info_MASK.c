
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct qedi_boot_target {int ipv6_en; int ip_addr; int iscsi_name; } ;
struct TYPE_6__ {int ctrl_flags; } ;
struct nvm_iscsi_block {TYPE_5__* target; TYPE_1__ generic; } ;
struct TYPE_9__ {char* byte; } ;
struct TYPE_8__ {char* byte; } ;
struct TYPE_7__ {char* byte; } ;
struct TYPE_10__ {TYPE_4__ ipv4_addr; TYPE_3__ ipv6_addr; TYPE_2__ target_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct nvm_iscsi_block *VAR_3,
       struct qedi_boot_target *VAR_4, u8 VAR_5)
{
 u32 VAR_6;

 VAR_6 = !!(VAR_3->generic.ctrl_flags &
       VAR_2);

 FUNC_0(VAR_4->iscsi_name, sizeof(VAR_4->iscsi_name), "%s\n",
   VAR_3->target[VAR_5].target_name.byte);

 VAR_4->ipv6_en = VAR_6;

 if (VAR_6)
  FUNC_0(VAR_4->ip_addr, VAR_1, "%pI6\n",
    VAR_3->target[VAR_5].ipv6_addr.byte);
 else
  FUNC_0(VAR_4->ip_addr, VAR_0, "%pI4\n",
    VAR_3->target[VAR_5].ipv4_addr.byte);
}
