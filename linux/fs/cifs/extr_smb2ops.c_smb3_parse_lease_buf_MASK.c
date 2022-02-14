
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int LeaseFlags; int LeaseState; int LeaseKey; int Epoch; } ;
struct create_lease_v2 {TYPE_1__ lcontext; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int *,int ) ;

__attribute__((used)) static __u8
FUNC_3(void *VAR_3, unsigned int *VAR_4, char *VAR_5)
{
 struct create_lease_v2 *VAR_6 = (struct create_lease_v2 *)VAR_3;

 *VAR_4 = FUNC_0(VAR_6->lcontext.Epoch);
 if (VAR_6->lcontext.LeaseFlags & VAR_0)
  return VAR_2;
 if (VAR_5)
  FUNC_2(VAR_5, &VAR_6->lcontext.LeaseKey, VAR_1);
 return FUNC_1(VAR_6->lcontext.LeaseState);
}
