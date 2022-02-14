
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c_rtc {scalar_t__ base; TYPE_1__* rtc; } ;
struct TYPE_2__ {int max_user_freq; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct s3c_rtc *VAR_4, int VAR_5)
{
 unsigned int VAR_6 = 0;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_4->base + VAR_0);
 VAR_6 &= VAR_1;

 VAR_7 = (VAR_4->rtc->max_user_freq / VAR_5) - 1;

 VAR_6 |= FUNC_2(VAR_7);
 FUNC_4(FUNC_1(VAR_7), VAR_4->base + VAR_3);

 FUNC_4(FUNC_0(VAR_7), VAR_4->base + VAR_2);

 FUNC_4(VAR_6, VAR_4->base + VAR_0);
}
