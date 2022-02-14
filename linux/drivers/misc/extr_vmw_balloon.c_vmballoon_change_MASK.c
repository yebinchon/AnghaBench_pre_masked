
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmballoon {int shrink_timeout; scalar_t__ reset_required; int target; int size; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int64_t FUNC_4(struct vmballoon *VAR_2)
{
 int64_t VAR_3, VAR_4;

 VAR_3 = FUNC_1(&VAR_2->size);
 VAR_4 = FUNC_0(VAR_2->target);






 if (VAR_2->reset_required)
  return 0;


 if (VAR_4 < VAR_3 && VAR_4 != 0 &&
     VAR_3 - VAR_4 < FUNC_3(VAR_0))
  return 0;


 if (VAR_4 > VAR_3 && FUNC_2(VAR_1, FUNC_0(VAR_2->shrink_timeout)))
  return 0;

 return VAR_4 - VAR_3;
}
