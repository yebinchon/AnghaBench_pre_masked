
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fsci_type; } ;
struct TYPE_4__ {scalar_t__ opcode; TYPE_1__ prot_info; } ;
struct pn533_target_type_b {TYPE_2__ sensb_res; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(struct pn533_target_type_b *VAR_2,
       int VAR_3)
{
 if (VAR_3 < sizeof(struct pn533_target_type_b))
  return 0;

 if (VAR_2->sensb_res.opcode != VAR_0)
  return 0;

 if (FUNC_0(VAR_2->sensb_res.prot_info.fsci_type) &
      VAR_1)
  return 0;

 return 1;
}
