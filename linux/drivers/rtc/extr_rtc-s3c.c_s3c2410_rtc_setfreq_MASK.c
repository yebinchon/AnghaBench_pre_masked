
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c_rtc {scalar_t__ base; TYPE_1__* rtc; } ;
struct TYPE_2__ {int max_user_freq; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct s3c_rtc *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = 0;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2->base + VAR_0);
 VAR_4 &= VAR_1;

 VAR_5 = (VAR_2->rtc->max_user_freq / VAR_3) - 1;
 VAR_4 |= VAR_5;

 FUNC_1(VAR_4, VAR_2->base + VAR_0);
}
