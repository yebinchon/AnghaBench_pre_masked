
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w1_slave {int* family_data; TYPE_1__* family; } ;
struct therm_info {int* rom; int crc; scalar_t__ verdict; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int fid; } ;


 int VAR_0 ;
 struct w1_slave* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (struct device*,struct w1_slave*,struct therm_info*) ;
 int FUNC_4 (char*,int,char*,int,...) ;
 int FUNC_5 (int*,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
        struct device_attribute *VAR_2, char *VAR_3)
{
 struct w1_slave *VAR_4 = FUNC_0(VAR_1);
 struct therm_info VAR_5;
 u8 *VAR_6 = VAR_4->family_data;
 int VAR_7, VAR_8;
 ssize_t VAR_9 = VAR_0;
 u8 VAR_10 = VAR_4->family->fid;

 VAR_7 = FUNC_3(VAR_1, VAR_4, &VAR_5);
 if (VAR_7)
  return VAR_7;

 for (VAR_8 = 0; VAR_8 < 9; ++VAR_8)
  VAR_9 -= FUNC_4(VAR_3 + VAR_0 - VAR_9, VAR_9, "%02x ", VAR_5.rom[VAR_8]);
 VAR_9 -= FUNC_4(VAR_3 + VAR_0 - VAR_9, VAR_9, ": crc=%02x %s\n",
        VAR_5.crc, (VAR_5.verdict) ? "YES" : "NO");
 if (VAR_5.verdict)
  FUNC_2(VAR_6, VAR_5.rom, sizeof(VAR_5.rom));
 else
  FUNC_1(VAR_1, "Read failed CRC check\n");

 for (VAR_8 = 0; VAR_8 < 9; ++VAR_8)
  VAR_9 -= FUNC_4(VAR_3 + VAR_0 - VAR_9, VAR_9, "%02x ",
         ((u8 *)VAR_6)[VAR_8]);

 VAR_9 -= FUNC_4(VAR_3 + VAR_0 - VAR_9, VAR_9, "t=%d\n",
   FUNC_5(VAR_5.rom, VAR_10));
 VAR_7 = VAR_0 - VAR_9;
 return VAR_7;
}
