
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_sec; unsigned int tv_nsec; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct timespec64*) ;

__attribute__((used)) static inline unsigned int FUNC_1(void)
{
 struct timespec64 VAR_2;
 unsigned int VAR_3;

 FUNC_0(&VAR_2);
 VAR_3 = VAR_2.tv_sec & 0xFFF;
 VAR_3 = VAR_3 * VAR_1 + VAR_2.tv_nsec / VAR_0;
 return VAR_3;
}
