
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sge {int intrtimer_nres; int fixed_intrtimer; TYPE_1__* freelQ; struct adapter* adapter; } ;
struct adapter {scalar_t__ regs; } ;
struct TYPE_2__ {int credits; int size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct adapter*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sge*,TYPE_1__*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct sge *VAR_5)
{
 struct adapter *VAR_6 = VAR_5->adapter;
 u32 VAR_7 = FUNC_1(VAR_6->regs + VAR_1);
 u32 VAR_8;

 FUNC_2(VAR_5, &VAR_5->freelQ[0]);
 FUNC_2(VAR_5, &VAR_5->freelQ[1]);

 if (VAR_5->freelQ[0].credits > (VAR_5->freelQ[0].size >> 2) &&
     VAR_5->freelQ[1].credits > (VAR_5->freelQ[1].size >> 2)) {
  VAR_7 |= VAR_4;
  VAR_8 = VAR_5->fixed_intrtimer;
 } else {

  VAR_7 &= ~VAR_4;
  VAR_8 = VAR_5->intrtimer_nres;
 }
 FUNC_3(VAR_8, VAR_6->regs + VAR_0);
 FUNC_3(VAR_7, VAR_6->regs + VAR_1);


 FUNC_0(VAR_6, VAR_2 | VAR_3);
}
