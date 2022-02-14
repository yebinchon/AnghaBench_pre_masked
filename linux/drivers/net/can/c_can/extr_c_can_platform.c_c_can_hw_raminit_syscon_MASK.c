
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int start; int done; } ;
struct c_can_raminit {TYPE_1__ bits; int reg; int syscon; scalar_t__ needs_pulse; } ;
struct c_can_priv {struct c_can_raminit raminit_sys; } ;


 int FUNC_0 (struct c_can_priv const*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(const struct c_can_priv *VAR_1, bool VAR_2)
{
 const struct c_can_raminit *VAR_3 = &VAR_1->raminit_sys;
 u32 VAR_4 = 0;
 u32 VAR_5;

 FUNC_3(&VAR_0);

 VAR_5 = 1 << VAR_3->bits.start | 1 << VAR_3->bits.done;
 FUNC_1(VAR_3->syscon, VAR_3->reg, &VAR_4);
 VAR_4 &= ~VAR_5;
 FUNC_2(VAR_3->syscon, VAR_3->reg, VAR_5, VAR_4);




 FUNC_0(VAR_1, 1 << VAR_3->bits.start, VAR_4);

 if (VAR_2) {

  VAR_4 |= 1 << VAR_3->bits.start;

  VAR_4 |= 1 << VAR_3->bits.done;
  FUNC_2(VAR_3->syscon, VAR_3->reg, VAR_5, VAR_4);

  VAR_4 &= ~(1 << VAR_3->bits.done);

  if (VAR_3->needs_pulse) {
   VAR_4 &= ~(1 << VAR_3->bits.start);
   FUNC_2(VAR_3->syscon, VAR_3->reg,
        VAR_5, VAR_4);
  }

  VAR_4 |= 1 << VAR_3->bits.done;
  FUNC_0(VAR_1, VAR_5, VAR_4);
 }
 FUNC_4(&VAR_0);
}
