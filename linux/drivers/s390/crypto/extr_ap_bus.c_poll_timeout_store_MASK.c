
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_type {int dummy; } ;
typedef size_t ssize_t ;
typedef unsigned long long ktime_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long long) ;
 int FUNC_2 (int *,int ) ;
 unsigned long long VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,char*,unsigned long long*) ;

__attribute__((used)) static ssize_t FUNC_6(struct bus_type *VAR_5, const char *VAR_6,
      size_t VAR_7)
{
 unsigned long long VAR_8;
 ktime_t VAR_9;


 if (FUNC_5(VAR_6, "%llu\n", &VAR_8) != 1 || VAR_8 < 1 ||
     VAR_8 > 120000000000ULL)
  return -VAR_0;
 VAR_4 = VAR_8;
 VAR_9 = VAR_4;

 FUNC_3(&VAR_3);
 FUNC_0(&VAR_2);
 FUNC_1(&VAR_2, VAR_9);
 FUNC_2(&VAR_2, VAR_1);
 FUNC_4(&VAR_3);

 return VAR_7;
}
