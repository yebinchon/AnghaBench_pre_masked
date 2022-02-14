
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7146_dev {int dummy; } ;
struct TYPE_2__ {int ci_present; struct saa7146_dev* dev; } ;
struct budget_ci {int slot_status; int ca; TYPE_1__ budget; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct saa7146_dev*,int ,int ) ;
 unsigned int FUNC_4 (TYPE_1__*,int ,int ,int,int,int ) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_12)
{
 struct budget_ci *VAR_13 = (struct budget_ci *) VAR_12;
 struct saa7146_dev *VAR_14 = VAR_13->budget.dev;
 unsigned int VAR_15;


 if (!VAR_13->budget.ci_present)
  return;


 VAR_15 = FUNC_4(&VAR_13->budget, VAR_2, VAR_1, 1, 1, 0);
 if (VAR_15 & VAR_0) {


  FUNC_3(VAR_14, 0, VAR_6);

  if (VAR_13->slot_status & VAR_7) {

   VAR_13->slot_status = VAR_9;
   FUNC_0(&VAR_13->ca, 0,
           VAR_3);

  } else if (VAR_13->slot_status & VAR_11) {

   VAR_13->slot_status = VAR_10;
   FUNC_1(&VAR_13->ca, 0);

  } else if (VAR_13->slot_status & VAR_10) {

   FUNC_2(&VAR_13->ca, 0);
  }
 } else {




  FUNC_3(VAR_14, 0, VAR_5);


  if (VAR_13->slot_status & VAR_8) {

   VAR_13->slot_status = VAR_7;
   FUNC_0(&VAR_13->ca, 0,
           VAR_4);
  }
 }
}
