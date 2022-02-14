
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long time64_t ;
struct timespec64 {long tv_sec; long tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 (struct timespec64*) ;
 struct timespec64 FUNC_1 (struct timespec64,struct timespec64) ;
 int FUNC_2 (struct timespec64*) ;

int FUNC_3(struct timespec64 *VAR_1, time64_t VAR_2, long VAR_3)
{
 struct timespec64 VAR_4 = {.tv_sec = VAR_2, .tv_nsec = VAR_3};

 if (!FUNC_2(&VAR_4))
  return -VAR_0;


 if (!VAR_2 && !VAR_3) {
  VAR_1->tv_sec = VAR_1->tv_nsec = 0;
 } else {
  FUNC_0(VAR_1);
  *VAR_1 = FUNC_1(*VAR_1, VAR_4);
 }
 return 0;
}
