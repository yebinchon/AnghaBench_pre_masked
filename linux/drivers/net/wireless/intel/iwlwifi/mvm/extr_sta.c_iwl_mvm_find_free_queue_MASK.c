
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm {TYPE_1__* queue_info; int mutex; } ;
struct TYPE_2__ {scalar_t__ tid_bitmap; scalar_t__ status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct iwl_mvm *VAR_2, u8 VAR_3,
       u8 VAR_4, u8 VAR_5)
{
 int VAR_6;

 FUNC_2(&VAR_2->mutex);


 if (FUNC_0(FUNC_1(VAR_2)))
  return -VAR_0;


 for (VAR_6 = VAR_4; VAR_6 <= VAR_5; VAR_6++)
  if (VAR_2->queue_info[VAR_6].tid_bitmap == 0 &&
      VAR_2->queue_info[VAR_6].status == VAR_1)
   return VAR_6;

 return -VAR_0;
}
