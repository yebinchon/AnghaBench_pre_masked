
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spi_device {int dummy; } ;
struct TYPE_2__ {int tm_hour; void* tm_min; void* tm_sec; } ;
struct rtc_wkalrm {int enabled; int pending; TYPE_1__ time; } ;
struct ds1305 {int* ctrl; struct spi_device* spi; } ;
struct device {int dummy; } ;
typedef int buf ;
typedef int addr ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct ds1305* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*,char*,int,int,int,int) ;
 int FUNC_5 (struct spi_device*,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_9, struct rtc_wkalrm *VAR_10)
{
 struct ds1305 *VAR_11 = FUNC_3(VAR_9);
 struct spi_device *VAR_12 = VAR_11->spi;
 u8 VAR_13;
 int VAR_14;
 u8 VAR_15[VAR_2];






 VAR_13 = VAR_3;
 VAR_14 = FUNC_5(VAR_12, &VAR_13, sizeof(VAR_13),
   VAR_11->ctrl, sizeof(VAR_11->ctrl));
 if (VAR_14 < 0)
  return VAR_14;

 VAR_10->enabled = !!(VAR_11->ctrl[0] & VAR_0);
 VAR_10->pending = !!(VAR_11->ctrl[1] & VAR_0);


 VAR_13 = FUNC_0(VAR_6);
 VAR_14 = FUNC_5(VAR_12, &VAR_13, sizeof(VAR_13),
   VAR_15, sizeof(VAR_15));
 if (VAR_14 < 0)
  return VAR_14;

 FUNC_4(VAR_9, "%s: %02x %02x %02x %02x\n",
  "alm0 read", VAR_15[VAR_6], VAR_15[VAR_5],
  VAR_15[VAR_4], VAR_15[VAR_7]);

 if ((VAR_1 & VAR_15[VAR_6])
   || (VAR_1 & VAR_15[VAR_5])
   || (VAR_1 & VAR_15[VAR_4]))
  return -VAR_8;





 VAR_10->time.tm_sec = FUNC_1(VAR_15[VAR_6]);
 VAR_10->time.tm_min = FUNC_1(VAR_15[VAR_5]);
 VAR_10->time.tm_hour = FUNC_2(VAR_15[VAR_4]);

 return 0;
}
