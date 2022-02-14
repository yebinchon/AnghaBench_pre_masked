
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfreq_cooling_device {int dummy; } ;


 unsigned long FUNC_0 (struct devfreq_cooling_device*,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (struct devfreq_cooling_device*,unsigned long) ;

__attribute__((used)) static inline unsigned long FUNC_2(struct devfreq_cooling_device *VAR_0,
         unsigned long VAR_1,
         unsigned long VAR_2)
{
 return FUNC_1(VAR_0, VAR_1) + FUNC_0(VAR_0, VAR_1,
              VAR_2);
}
