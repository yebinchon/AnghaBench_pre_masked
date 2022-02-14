
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* de_init ) (TYPE_1__*) ;} ;
struct sm750_dev {TYPE_1__ accel; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(struct sm750_dev *VAR_5)
{
 u32 VAR_6;

 FUNC_2(1);

 if (FUNC_3() == VAR_2) {
  VAR_6 = FUNC_0(VAR_0);
  VAR_6 |= VAR_1;
  FUNC_1(VAR_0, VAR_6);

  VAR_6 = FUNC_0(VAR_0);
  VAR_6 &= ~VAR_1;
  FUNC_1(VAR_0, VAR_6);

 } else {

  VAR_6 = FUNC_0(VAR_3);
  VAR_6 |= VAR_4;
  FUNC_1(VAR_3, VAR_6);

  VAR_6 = FUNC_0(VAR_3);
  VAR_6 &= ~VAR_4;
  FUNC_1(VAR_3, VAR_6);
 }


 VAR_5->accel.de_init(&VAR_5->accel);
}
