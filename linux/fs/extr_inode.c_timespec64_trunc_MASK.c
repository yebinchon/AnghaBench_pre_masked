
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {unsigned int tv_nsec; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,char*,unsigned int) ;

struct timespec64 FUNC_1(struct timespec64 VAR_1, unsigned VAR_2)
{

 if (VAR_2 == 1) {

 } else if (VAR_2 == VAR_0) {
  VAR_1.tv_nsec = 0;
 } else if (VAR_2 > 1 && VAR_2 < VAR_0) {
  VAR_1.tv_nsec -= VAR_1.tv_nsec % VAR_2;
 } else {
  FUNC_0(1, "illegal file time granularity: %u", VAR_2);
 }
 return VAR_1;
}
