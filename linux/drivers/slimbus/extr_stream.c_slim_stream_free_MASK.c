
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_stream_runtime {struct slim_stream_runtime* name; int node; struct slim_device* dev; } ;
struct slim_device {int stream_list_lock; } ;


 int FUNC_0 (struct slim_stream_runtime*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct slim_stream_runtime *VAR_0)
{
 struct slim_device *VAR_1 = VAR_0->dev;

 FUNC_2(&VAR_1->stream_list_lock);
 FUNC_1(&VAR_0->node);
 FUNC_3(&VAR_1->stream_list_lock);

 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0);

 return 0;
}
