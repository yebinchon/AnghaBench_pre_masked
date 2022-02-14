
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int demod; } ;
struct sx8 {TYPE_1__ mci; } ;
struct mci {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mci *VAR_1)
{
 struct sx8 *VAR_2 = (struct sx8 *)VAR_1;

 VAR_2->mci.demod = VAR_0;
 return 0;
}
