
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c_rtc {scalar_t__ base; TYPE_1__* rtc; } ;
struct TYPE_2__ {int max_user_freq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct s3c_rtc *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = (VAR_1->rtc->max_user_freq / VAR_2) - 1;
 FUNC_0(VAR_3, VAR_1->base + VAR_0);
}
