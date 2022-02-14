
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdw_slave {TYPE_1__* bus; int dev; int * port_ready; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct sdw_slave*,int ) ;
 int FUNC_4 (struct sdw_slave*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct sdw_slave *VAR_8, u8 *VAR_9)
{
 u8 VAR_10 = 0, VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15 = 0;

 VAR_12 = FUNC_3(VAR_8, VAR_0);
 if (VAR_12 < 0) {
  FUNC_1(VAR_8->bus->dev,
   "SDW_DP0_INT read failed:%d\n", VAR_12);
  return VAR_12;
 }

 do {
  if (VAR_12 & VAR_6) {
   FUNC_1(VAR_8->dev, "Test fail for port 0\n");
   VAR_10 |= VAR_6;
  }






  if (VAR_12 & VAR_5) {
   FUNC_0(&VAR_8->port_ready[0]);
   VAR_10 |= VAR_5;
  }

  if (VAR_12 & VAR_1) {
   FUNC_1(VAR_8->dev, "BRA failed\n");
   VAR_10 |= VAR_1;
  }

  VAR_11 = VAR_2 |
   VAR_3 | VAR_4;

  if (VAR_12 & VAR_11) {
   VAR_10 |= VAR_11;
   *VAR_9 = VAR_10;
  }


  VAR_14 = FUNC_4(VAR_8, VAR_0, VAR_10);
  if (VAR_14 < 0) {
   FUNC_1(VAR_8->bus->dev,
    "SDW_DP0_INT write failed:%d\n", VAR_14);
   return VAR_14;
  }


  VAR_13 = FUNC_3(VAR_8, VAR_0);
  if (VAR_13 < 0) {
   FUNC_1(VAR_8->bus->dev,
    "SDW_DP0_INT read failed:%d\n", VAR_13);
   return VAR_13;
  }
  VAR_12 &= VAR_13;

  VAR_15++;


 } while (VAR_12 != 0 && VAR_15 < VAR_7);

 if (VAR_15 == VAR_7)
  FUNC_2(VAR_8->bus->dev, "Reached MAX_RETRY on DP0 read\n");

 return VAR_14;
}
