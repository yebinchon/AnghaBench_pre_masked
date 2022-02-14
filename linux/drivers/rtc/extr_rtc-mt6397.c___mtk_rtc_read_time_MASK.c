
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct rtc_time {void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct mt6397_rtc {int lock; scalar_t__ addr_base; int regmap; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__,void**,int) ;
 int FUNC_3 (int ,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_4(struct mt6397_rtc *VAR_8,
          struct rtc_time *VAR_9, int *VAR_10)
{
 int VAR_11;
 u16 VAR_12[VAR_0];

 FUNC_0(&VAR_8->lock);
 VAR_11 = FUNC_2(VAR_8->regmap, VAR_8->addr_base + VAR_7,
          VAR_12, VAR_0);
 if (VAR_11 < 0)
  goto exit;

 VAR_9->tm_sec = VAR_12[VAR_5];
 VAR_9->tm_min = VAR_12[VAR_3];
 VAR_9->tm_hour = VAR_12[VAR_2];
 VAR_9->tm_mday = VAR_12[VAR_1];
 VAR_9->tm_mon = VAR_12[VAR_4];
 VAR_9->tm_year = VAR_12[VAR_6];

 VAR_11 = FUNC_3(VAR_8->regmap, VAR_8->addr_base + VAR_7, VAR_10);
exit:
 FUNC_1(&VAR_8->lock);
 return VAR_11;
}
