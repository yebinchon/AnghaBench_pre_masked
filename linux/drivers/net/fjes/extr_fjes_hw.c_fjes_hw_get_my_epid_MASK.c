
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int epid; } ;
union REG_OWNER_EPID {TYPE_1__ bits; int reg; } ;
struct fjes_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct fjes_hw *VAR_1)
{
 union REG_OWNER_EPID VAR_2;

 VAR_2.reg = FUNC_0(VAR_0);

 return VAR_2.bits.epid;
}
