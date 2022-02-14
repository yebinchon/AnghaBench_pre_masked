
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int options; } ;
struct TYPE_4__ {TYPE_1__ ext; } ;
struct sfp {unsigned int state; TYPE_2__ id; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sfp*) ;
 int FUNC_2 (struct sfp*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sfp *VAR_4)
{
 unsigned int VAR_5 = VAR_4->state & VAR_0;




 if (VAR_4->id.ext.options & FUNC_0(VAR_1))
  VAR_5 ^= VAR_0;
 else if (!(VAR_4->id.ext.options & FUNC_0(VAR_2)))
  VAR_5 = 0;

 if (VAR_5)
  FUNC_2(VAR_4, VAR_3, 0);
 else
  FUNC_1(VAR_4);
}
