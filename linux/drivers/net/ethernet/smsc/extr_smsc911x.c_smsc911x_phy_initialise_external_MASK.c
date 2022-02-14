
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct smsc911x_data {int using_extphy; TYPE_1__ config; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct smsc911x_data*,int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct smsc911x_data*) ;
 unsigned int FUNC_2 (struct smsc911x_data*,int ) ;

__attribute__((used)) static void FUNC_3(struct smsc911x_data *VAR_5)
{
 unsigned int VAR_6 = FUNC_2(VAR_5, VAR_0);

 if (VAR_5->config.flags & VAR_3) {
  FUNC_0(VAR_5, VAR_4, "Forcing internal PHY");
  VAR_5->using_extphy = 0;
 } else if (VAR_5->config.flags & VAR_2) {
  FUNC_0(VAR_5, VAR_4, "Forcing external PHY");
  FUNC_1(VAR_5);
  VAR_5->using_extphy = 1;
 } else if (VAR_6 & VAR_1) {
  FUNC_0(VAR_5, VAR_4,
      "HW_CFG EXT_PHY_DET set, using external PHY");
  FUNC_1(VAR_5);
  VAR_5->using_extphy = 1;
 } else {
  FUNC_0(VAR_5, VAR_4,
      "HW_CFG EXT_PHY_DET clear, using internal PHY");
  VAR_5->using_extphy = 0;
 }
}
