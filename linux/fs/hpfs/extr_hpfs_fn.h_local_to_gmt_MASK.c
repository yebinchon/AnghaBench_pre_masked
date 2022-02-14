
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct timezone {int tz_minuteswest; } ;
struct super_block {int dummy; } ;
struct TYPE_2__ {scalar_t__ sb_timeshift; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;

__attribute__((used)) static inline time64_t FUNC_1(struct super_block *VAR_0, time64_t VAR_1)
{
 extern struct timezone VAR_2;
 return VAR_1 + VAR_2.tz_minuteswest * 60 + FUNC_0(VAR_0)->sb_timeshift;
}
