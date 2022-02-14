
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_vol {scalar_t__ sign; int sectype; } ;
struct TCP_Server_Info {int sign; TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ (* select_sectype ) (struct TCP_Server_Info*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct TCP_Server_Info*,int ) ;

__attribute__((used)) static bool
FUNC_1(struct TCP_Server_Info *VAR_1, struct smb_vol *VAR_2)
{





 if (VAR_1->ops->select_sectype(VAR_1, VAR_2->sectype)
      == VAR_0)
  return 0;






 if (VAR_2->sign && !VAR_1->sign)
  return 0;

 return 1;
}
