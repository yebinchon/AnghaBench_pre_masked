
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int LeaseFlags; int LeaseState; } ;
struct create_lease {TYPE_1__ lcontext; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static __u8
FUNC_1(void *VAR_2, unsigned int *VAR_3, char *VAR_4)
{
 struct create_lease *VAR_5 = (struct create_lease *)VAR_2;

 *VAR_3 = 0;
 if (VAR_5->lcontext.LeaseFlags & VAR_0)
  return VAR_1;
 return FUNC_0(VAR_5->lcontext.LeaseState);
}
