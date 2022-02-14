
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (struct timespec64*) ;
 int FUNC_1 (char*,char*,long long,int) ;

__attribute__((used)) static inline char *FUNC_2(char *VAR_1)
{
 struct timespec64 VAR_2;

 FUNC_0(&VAR_2);
 FUNC_1(VAR_1, "%llu.%.08lu", (long long)VAR_2.tv_sec,
    VAR_2.tv_nsec / VAR_0);
 return VAR_1;
}
