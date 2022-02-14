
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_nsec; scalar_t__ tv_sec; } ;
struct pps_generator_pp {scalar_t__ port_write_time; } ;
typedef int ktime_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timespec64*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline ktime_t FUNC_2(struct pps_generator_pp *VAR_4)
{
 struct timespec64 VAR_5;

 FUNC_0(&VAR_5);

 return FUNC_1(VAR_5.tv_sec +
   ((VAR_5.tv_nsec > 990 * VAR_0) ? 1 : 0),
   VAR_1 - (VAR_3 +
   VAR_4->port_write_time + 3 * VAR_2));
}
