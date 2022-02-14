
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* gain; TYPE_1__* exposure; } ;
struct s5k5baf {TYPE_3__ ctrls; } ;
struct TYPE_5__ {int val; } ;
struct TYPE_4__ {unsigned int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct s5k5baf*,int,int) ;
 int FUNC_1 (struct s5k5baf*,unsigned int) ;
 int FUNC_2 (struct s5k5baf*,int ) ;

__attribute__((used)) static void FUNC_3(struct s5k5baf *VAR_3, int VAR_4)
{
 if (VAR_4 == VAR_2) {
  FUNC_0(VAR_3, VAR_0 | VAR_1, 1);
 } else {
  unsigned int VAR_5 = VAR_3->ctrls.exposure->val;

  FUNC_1(VAR_3, VAR_5);
  FUNC_2(VAR_3, VAR_3->ctrls.gain->val);
  FUNC_0(VAR_3, VAR_0 | VAR_1, 0);
 }
}
