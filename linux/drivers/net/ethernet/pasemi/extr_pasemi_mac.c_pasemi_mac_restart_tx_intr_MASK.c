
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pasemi_mac {int dummy; } ;
struct TYPE_3__ {unsigned int* status; int chno; } ;
struct TYPE_4__ {TYPE_1__ chan; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_2__* FUNC_2 (struct pasemi_mac const*) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(const struct pasemi_mac *VAR_2)
{
 unsigned int VAR_3, VAR_4;


 VAR_4 = *FUNC_2(VAR_2)->chan.status & VAR_1;

 VAR_3 = FUNC_1(VAR_4) | VAR_0;

 FUNC_3(FUNC_0(FUNC_2(VAR_2)->chan.chno), VAR_3);
}
