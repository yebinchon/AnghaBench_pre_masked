
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sdw_cdns {int bus; int dev; } ;
typedef int status ;
typedef enum sdw_slave_status { ____Placeholder_sdw_slave_status } sdw_slave_status ;


 int VAR_0 ;
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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int *,int*) ;

__attribute__((used)) static int FUNC_3(struct sdw_cdns *VAR_11,
        u32 VAR_12, u32 VAR_13)
{
 enum sdw_slave_status VAR_14[VAR_6 + 1];
 bool VAR_15 = 0;
 u64 VAR_16;
 u32 VAR_17;
 int VAR_18, VAR_19;


 VAR_16 = ((u64)VAR_13 << 32) | VAR_12;
 FUNC_1(VAR_14, 0, sizeof(VAR_14));

 for (VAR_18 = 0; VAR_18 <= VAR_6; VAR_18++) {
  VAR_17 = (VAR_16 >> (VAR_18 * VAR_5)) &
    VAR_4;
  if (!VAR_17)
   continue;

  VAR_15 = 1;
  VAR_19 = 0;

  if (VAR_17 & VAR_3) {
   VAR_14[VAR_18] = VAR_9;
   VAR_19++;
  }

  if (VAR_17 & VAR_1) {
   VAR_14[VAR_18] = VAR_8;
   VAR_19++;
  }

  if (VAR_17 & VAR_0) {
   VAR_14[VAR_18] = VAR_7;
   VAR_19++;
  }

  if (VAR_17 & VAR_2) {
   VAR_14[VAR_18] = VAR_10;
   VAR_19++;
  }


  if (VAR_19 > 1) {
   FUNC_0(VAR_11->dev,
          "Slave reported multiple Status: %d\n",
          VAR_17);




  }
 }

 if (VAR_15)
  return FUNC_2(&VAR_11->bus, VAR_14);

 return 0;
}
