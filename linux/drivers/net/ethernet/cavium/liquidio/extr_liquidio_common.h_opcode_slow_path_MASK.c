
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subcode; int opcode; } ;
union octeon_rh {TYPE_1__ r; } ;
typedef scalar_t__ u16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(union octeon_rh *VAR_2)
{
 u16 VAR_3, VAR_4;

 VAR_3 = FUNC_0((VAR_2)->r.opcode, (VAR_2)->r.subcode);
 VAR_4 = FUNC_0(VAR_0, VAR_1);

 return (VAR_4 != VAR_3);
}
