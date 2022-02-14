
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sdw_slave {TYPE_1__* bus; int * port_ready; int dev; } ;
struct TYPE_2__ {int * dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct sdw_slave*,int*) ;
 int FUNC_5 (struct sdw_slave*,int ) ;
 int FUNC_6 (struct sdw_slave*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct sdw_slave *VAR_6,
         int VAR_7, u8 *VAR_8)
{
 u8 VAR_9 = 0, VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14 = 0;
 u32 VAR_15;

 if (VAR_7 == 0)
  return FUNC_4(VAR_6, VAR_8);

 VAR_15 = FUNC_0(VAR_7);
 VAR_11 = FUNC_5(VAR_6, VAR_15);
 if (VAR_11 < 0) {
  FUNC_2(VAR_6->bus->dev,
   "SDW_DPN_INT read failed:%d\n", VAR_11);

  return VAR_11;
 }

 do {
  if (VAR_11 & VAR_4) {
   FUNC_2(&VAR_6->dev, "Test fail for port:%d\n", VAR_7);
   VAR_9 |= VAR_4;
  }





  if (VAR_11 & VAR_3) {
   FUNC_1(&VAR_6->port_ready[VAR_7]);
   VAR_9 |= VAR_3;
  }

  VAR_10 = VAR_0 |
   VAR_1 | VAR_2;

  if (VAR_11 & VAR_10) {
   VAR_9 |= VAR_10;
   *VAR_8 = VAR_9;
  }


  VAR_13 = FUNC_6(VAR_6, VAR_15, VAR_9);
  if (VAR_13 < 0) {
   FUNC_2(VAR_6->bus->dev,
    "SDW_DPN_INT write failed:%d\n", VAR_13);
   return VAR_13;
  }


  VAR_12 = FUNC_5(VAR_6, VAR_15);
  if (VAR_12 < 0) {
   FUNC_2(VAR_6->bus->dev,
    "SDW_DPN_INT read failed:%d\n", VAR_12);
   return VAR_12;
  }
  VAR_11 &= VAR_12;

  VAR_14++;


 } while (VAR_11 != 0 && VAR_14 < VAR_5);

 if (VAR_14 == VAR_5)
  FUNC_3(VAR_6->bus->dev, "Reached MAX_RETRY on port read");

 return VAR_13;
}
