
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w1_slave {struct w1_master* master; } ;
struct w1_master {int bus_mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int*,int) ;
 struct w1_slave* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char*,...) ;
 scalar_t__ FUNC_6 (struct w1_master*,int*,int) ;
 int FUNC_7 (struct w1_slave*) ;
 int FUNC_8 (struct w1_master*,int*,int) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_5,
        struct device_attribute *VAR_6, char *VAR_7)
{
 struct w1_slave *VAR_8 = FUNC_1(VAR_5);
 struct w1_master *VAR_9 = VAR_8->master;
 u8 VAR_10[VAR_0 * VAR_4];
 u8 VAR_11[3];
 int VAR_12;
 int VAR_13;
 int VAR_14;
 ssize_t VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_15 = VAR_3;
 VAR_12 = (12 << 5) + 31;
 VAR_11[0] = 0xA5;
 VAR_11[1] = VAR_12 & 0xFF;
 VAR_11[2] = VAR_12 >> 8;
 FUNC_3(&VAR_9->bus_mutex);
 if (!FUNC_7(VAR_8)) {
  FUNC_8(VAR_9, VAR_11, 3);
  VAR_13 = 0;
  for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {







   VAR_13 += FUNC_6(VAR_9,
    VAR_10 + (VAR_17 * VAR_4), VAR_4);
   for (VAR_16 = 0; VAR_16 < VAR_4; ++VAR_16)
    VAR_15 -= FUNC_5(VAR_7 + VAR_3 - VAR_15,
     VAR_15, "%02x ",
     VAR_10[(VAR_17 * VAR_4) + VAR_16]);
   if (VAR_13 != (VAR_17 + 1) * VAR_4) {
    FUNC_2(VAR_5,
     "w1_counter_read() returned %u bytes "
     "instead of %d bytes wanted.\n",
     VAR_13,
     VAR_4);
    VAR_15 -= FUNC_5(VAR_7 + VAR_3 - VAR_15,
     VAR_15, "crc=NO\n");
   } else {
    if (VAR_17 == 0) {
     VAR_18 = FUNC_0(VAR_1, VAR_11, 3);
     VAR_18 = FUNC_0(VAR_18, VAR_10, 11);
    } else {




     VAR_18 = FUNC_0(VAR_1,
      (VAR_10 + 11) +
      ((VAR_17 - 1) * VAR_4),
      VAR_4);
    }
    if (VAR_18 == VAR_2) {
     VAR_14 = 0;
     for (VAR_16 = 4; VAR_16 > 0; VAR_16--) {
      VAR_14 <<= 8;
      VAR_14 |= VAR_10[(VAR_17 *
       VAR_4) + VAR_16];
     }
     VAR_15 -= FUNC_5(VAR_7 + VAR_3 - VAR_15,
      VAR_15, "crc=YES c=%d\n", VAR_14);
    } else {
     VAR_15 -= FUNC_5(VAR_7 + VAR_3 - VAR_15,
      VAR_15, "crc=NO\n");
    }
   }
  }
 } else {
  VAR_15 -= FUNC_5(VAR_7 + VAR_3 - VAR_15, VAR_15, "Connection error");
 }
 FUNC_4(&VAR_9->bus_mutex);
 return VAR_3 - VAR_15;
}
