
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ shm; } ;
struct TYPE_3__ {TYPE_2__ memref; } ;
struct tee_param {scalar_t__ attr; TYPE_1__ u; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct tee_param*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(size_t VAR_2, struct tee_param *VAR_3,
      size_t *VAR_4)
{
 size_t VAR_5;

 if (!VAR_2)
  return -VAR_0;





 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  if (FUNC_0(VAR_3 + VAR_5) && VAR_3[VAR_5].u.memref.shm)
   FUNC_1(VAR_3[VAR_5].u.memref.shm);





 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  if (VAR_3[VAR_5].attr &&
      VAR_3[VAR_5].attr != VAR_1)
   return -VAR_0;


 if (VAR_3->attr == VAR_1)
  *VAR_4 = 1;
 else
  *VAR_4 = 0;

 return 0;
}
