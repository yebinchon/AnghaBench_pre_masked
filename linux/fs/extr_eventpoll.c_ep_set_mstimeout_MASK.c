
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {long tv_sec; long tv_nsec; } ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (struct timespec64*) ;
 struct timespec64 FUNC_1 (struct timespec64,struct timespec64) ;

__attribute__((used)) static inline struct timespec64 FUNC_2(long VAR_2)
{
 struct timespec64 VAR_3, VAR_4 = {
  .tv_sec = VAR_2 / VAR_0,
  .tv_nsec = VAR_1 * (VAR_2 % VAR_0),
 };

 FUNC_0(&VAR_3);
 return FUNC_1(VAR_3, VAR_4);
}
