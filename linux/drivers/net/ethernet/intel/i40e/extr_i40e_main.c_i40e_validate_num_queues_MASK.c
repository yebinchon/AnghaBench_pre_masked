
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {int current_rss_size; } ;
struct i40e_pf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct i40e_vsi*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct i40e_pf *VAR_1, int VAR_2,
        struct i40e_vsi *VAR_3, bool *VAR_4)
{
 int VAR_5;

 if (!VAR_4)
  return -VAR_0;

 *VAR_4 = 0;
 if (VAR_3->current_rss_size) {
  if (VAR_2 > VAR_3->current_rss_size) {
   FUNC_0(&VAR_1->pdev->dev,
    "Error: num_queues (%d) > vsi's current_size(%d)\n",
    VAR_2, VAR_3->current_rss_size);
   return -VAR_0;
  } else if ((VAR_2 < VAR_3->current_rss_size) &&
      (!FUNC_2(VAR_2))) {
   FUNC_0(&VAR_1->pdev->dev,
    "Error: num_queues (%d) < vsi's current_size(%d), but not power of 2\n",
    VAR_2, VAR_3->current_rss_size);
   return -VAR_0;
  }
 }

 if (!FUNC_2(VAR_2)) {





  VAR_5 = FUNC_1(VAR_3);
  if (VAR_2 < VAR_5) {
   FUNC_0(&VAR_1->pdev->dev,
    "Error: num_queues (%d) < max queues configured for channel(%d)\n",
    VAR_2, VAR_5);
   return -VAR_0;
  }
  *VAR_4 = 1;
 }

 return 0;
}
