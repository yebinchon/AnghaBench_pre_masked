
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_sec; int tv_nsec; } ;


 int FUNC_0 (struct timespec64*) ;
 struct timespec64 FUNC_1 (struct timespec64,struct timespec64) ;

__attribute__((used)) static inline struct timespec64 FUNC_2(int VAR_0)
{
 struct timespec64 VAR_1 = {
  .tv_sec = VAR_0,
  .tv_nsec = 0,
 };
 struct timespec64 VAR_2;

 FUNC_0(&VAR_2);
 return FUNC_1(VAR_2, VAR_1);
}
