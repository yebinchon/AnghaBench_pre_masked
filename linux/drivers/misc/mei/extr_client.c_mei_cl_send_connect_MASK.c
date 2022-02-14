
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int ctrl_rd_list; } ;
struct mei_cl_cb {int list; } ;
struct mei_cl {int status; int timer_count; int state; struct mei_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct mei_device*,struct mei_cl*) ;
 int FUNC_2 (struct mei_device*) ;

__attribute__((used)) static int FUNC_3(struct mei_cl *VAR_2, struct mei_cl_cb *VAR_3)
{
 struct mei_device *VAR_4;
 int VAR_5;

 VAR_4 = VAR_2->dev;

 VAR_5 = FUNC_1(VAR_4, VAR_2);
 VAR_2->status = VAR_5;
 if (VAR_5) {
  VAR_2->state = VAR_1;
  return VAR_5;
 }

 FUNC_0(&VAR_3->list, &VAR_4->ctrl_rd_list);
 VAR_2->timer_count = VAR_0;
 FUNC_2(VAR_4);
 return 0;
}
