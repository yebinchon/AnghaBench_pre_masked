
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct isst_if_cmd_cb {int dummy; } ;
struct TYPE_3__ {int registered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,struct isst_if_cmd_cb*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;

int FUNC_6(int VAR_9, struct isst_if_cmd_cb *VAR_10)
{
 if (VAR_5)
  return VAR_5;

 if (VAR_9 >= VAR_2)
  return -VAR_1;

 FUNC_4(&VAR_8);
 if (VAR_4) {
  FUNC_5(&VAR_8);
  return -VAR_0;
 }
 if (!VAR_6) {
  int VAR_11;

  VAR_5 = FUNC_3(&VAR_3);
  if (VAR_5)
   goto unlock_exit;

  VAR_11 = FUNC_0();
  if (VAR_11) {
   FUNC_2(&VAR_3);
   VAR_5 = VAR_11;
   goto unlock_exit;
  }
 }
 FUNC_1(&VAR_7[VAR_9], VAR_10, sizeof(*VAR_10));
 VAR_7[VAR_9].registered = 1;
 VAR_6++;
unlock_exit:
 FUNC_5(&VAR_8);

 return VAR_5;
}
