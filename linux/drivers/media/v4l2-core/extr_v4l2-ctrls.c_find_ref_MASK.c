
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_ctrl_ref {struct v4l2_ctrl_ref* next; TYPE_1__* ctrl; } ;
struct v4l2_ctrl_handler {int nr_of_buckets; struct v4l2_ctrl_ref* cached; struct v4l2_ctrl_ref** buckets; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct v4l2_ctrl_ref* FUNC_0 (struct v4l2_ctrl_handler*,int) ;

__attribute__((used)) static struct v4l2_ctrl_ref *FUNC_1(struct v4l2_ctrl_handler *VAR_2, u32 VAR_3)
{
 struct v4l2_ctrl_ref *VAR_4;
 int VAR_5;

 VAR_3 &= VAR_1;


 if (VAR_3 >= VAR_0)
  return FUNC_0(VAR_2, VAR_3);
 VAR_5 = VAR_3 % VAR_2->nr_of_buckets;


 if (VAR_2->cached && VAR_2->cached->ctrl->id == VAR_3)
  return VAR_2->cached;


 VAR_4 = VAR_2->buckets ? VAR_2->buckets[VAR_5] : ((void*)0);
 while (VAR_4 && VAR_4->ctrl->id != VAR_3)
  VAR_4 = VAR_4->next;

 if (VAR_4)
  VAR_2->cached = VAR_4;
 return VAR_4;
}
