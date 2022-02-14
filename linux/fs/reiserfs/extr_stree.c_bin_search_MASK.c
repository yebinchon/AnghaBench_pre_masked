
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_key {int dummy; } ;
struct cpu_key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct reiserfs_key*,struct cpu_key*) ;

__attribute__((used)) static inline int FUNC_1(const void *VAR_2,
        const void *VAR_3,
        int VAR_4,
        int VAR_5,
        int *VAR_6
    )
{
 int VAR_7, VAR_8, VAR_9;

 for (VAR_9 = ((VAR_7 = VAR_4 - 1) + (VAR_8 = 0)) / 2;
      VAR_8 <= VAR_7; VAR_9 = (VAR_7 + VAR_8) / 2)
  switch (FUNC_0
   ((struct reiserfs_key *)((char *)VAR_3 + VAR_9 * VAR_5),
    (struct cpu_key *)VAR_2)) {
  case -1:
   VAR_8 = VAR_9 + 1;
   continue;
  case 1:
   VAR_7 = VAR_9 - 1;
   continue;
  case 0:
   *VAR_6 = VAR_9;
   return VAR_0;
  }





 *VAR_6 = VAR_8;
 return VAR_1;
}
