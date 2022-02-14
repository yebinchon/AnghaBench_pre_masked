
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_txe_hw {int intr_cause; } ;
struct mei_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 struct mei_txe_hw* FUNC_1 (struct mei_device*) ;

__attribute__((used)) static bool FUNC_2(struct mei_device *VAR_4)
{

 struct mei_txe_hw *VAR_5 = FUNC_1(VAR_4);
 bool VAR_6 = (VAR_5->intr_cause & (VAR_3 |
          VAR_0 |
          VAR_1 |
          VAR_2));

 if (VAR_6) {
  FUNC_0(VAR_4->dev,
   "Pending Interrupts InReady=%01d Readiness=%01d, Aliveness=%01d, OutDoor=%01d\n",
   !!(VAR_5->intr_cause & VAR_1),
   !!(VAR_5->intr_cause & VAR_3),
   !!(VAR_5->intr_cause & VAR_0),
   !!(VAR_5->intr_cause & VAR_2));
 }
 return VAR_6;
}
