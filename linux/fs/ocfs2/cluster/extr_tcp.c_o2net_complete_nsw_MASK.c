
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct o2net_status_wait {int dummy; } ;
struct o2net_node {int nn_lock; int nn_status_idr; } ;
typedef int s32 ;
typedef enum o2net_system_error { ____Placeholder_o2net_system_error } o2net_system_error ;


 scalar_t__ VAR_0 ;
 struct o2net_status_wait* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct o2net_node*,struct o2net_status_wait*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct o2net_node *VAR_1,
          struct o2net_status_wait *VAR_2,
          u64 VAR_3, enum o2net_system_error VAR_4,
          s32 VAR_5)
{
 FUNC_2(&VAR_1->nn_lock);
 if (VAR_2 == ((void*)0)) {
  if (VAR_3 > VAR_0)
   goto out;

  VAR_2 = FUNC_0(&VAR_1->nn_status_idr, VAR_3);
  if (VAR_2 == ((void*)0))
   goto out;
 }

 FUNC_1(VAR_1, VAR_2, VAR_4, VAR_5);

out:
 FUNC_3(&VAR_1->nn_lock);
 return;
}
