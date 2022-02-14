
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_nsec; int tv_sec; } ;
struct coda_timespec {int tv_nsec; int tv_sec; } ;



__attribute__((used)) static struct coda_timespec FUNC_0(struct timespec64 VAR_0)
{
 struct coda_timespec VAR_1 = {
  .tv_sec = VAR_0,
  .tv_nsec = VAR_0,
 };

 return VAR_1;
}
