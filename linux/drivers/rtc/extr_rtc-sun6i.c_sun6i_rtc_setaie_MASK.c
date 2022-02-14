
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun6i_rtc_dev {int lock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(int VAR_8, struct sun6i_rtc_dev *VAR_9)
{
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;
 unsigned long VAR_13;

 if (VAR_8) {
  VAR_10 = VAR_3;
  VAR_11 = VAR_5;
  VAR_12 = VAR_1;
 } else {
  FUNC_2(VAR_7,
         VAR_9->base + VAR_6);
 }

 FUNC_0(&VAR_9->lock, VAR_13);
 FUNC_2(VAR_10, VAR_9->base + VAR_2);
 FUNC_2(VAR_11, VAR_9->base + VAR_4);
 FUNC_2(VAR_12, VAR_9->base + VAR_0);
 FUNC_1(&VAR_9->lock, VAR_13);
}
