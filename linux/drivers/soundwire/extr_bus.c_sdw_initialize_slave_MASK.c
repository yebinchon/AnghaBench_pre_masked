
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sdw_slave_prop {TYPE_1__* dp0_prop; } ;
struct sdw_slave {TYPE_2__* bus; struct sdw_slave_prop prop; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int imp_def_interrupts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct sdw_slave*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct sdw_slave *VAR_7)
{
 struct sdw_slave_prop *VAR_8 = &VAR_7->prop;
 int VAR_9;
 u8 VAR_10;







 VAR_10 = VAR_4 | VAR_3 |
     VAR_5;


 VAR_9 = FUNC_1(VAR_7, VAR_6, VAR_10, VAR_10);
 if (VAR_9 < 0) {
  FUNC_0(VAR_7->bus->dev,
   "SDW_SCP_INTMASK1 write failed:%d\n", VAR_9);
  return VAR_9;
 }


 if (!VAR_7->prop.dp0_prop)
  return 0;


 VAR_10 = VAR_8->dp0_prop->imp_def_interrupts;
 VAR_10 |= VAR_2 | VAR_1;

 VAR_9 = FUNC_1(VAR_7, VAR_0, VAR_10, VAR_10);
 if (VAR_9 < 0) {
  FUNC_0(VAR_7->bus->dev,
   "SDW_DP0_INTMASK read failed:%d\n", VAR_9);
  return VAR_10;
 }

 return 0;
}
