
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {struct list_head* host_priv; } ;
struct list_head {int dummy; } ;



__attribute__((used)) static inline struct list_head *
FUNC_0(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct list_head *VAR_2 = VAR_0->host_priv;

 return VAR_2 ? &VAR_2[VAR_1] : ((void*)0);
}
