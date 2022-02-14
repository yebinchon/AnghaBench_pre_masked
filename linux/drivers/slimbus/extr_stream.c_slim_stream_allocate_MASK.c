
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_stream_runtime {int node; struct slim_device* dev; int name; } ;
struct slim_device {int stream_list_lock; int stream_list; } ;


 int VAR_0 ;
 struct slim_stream_runtime* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (struct slim_stream_runtime*) ;
 struct slim_stream_runtime* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct slim_stream_runtime *FUNC_7(struct slim_device *VAR_2,
       const char *VAR_3)
{
 struct slim_stream_runtime *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->name = FUNC_1(VAR_1, "slim-%s", VAR_3);
 if (!VAR_4->name) {
  FUNC_2(VAR_4);
  return FUNC_0(-VAR_0);
 }

 VAR_4->dev = VAR_2;
 FUNC_5(&VAR_2->stream_list_lock);
 FUNC_4(&VAR_4->node, &VAR_2->stream_list);
 FUNC_6(&VAR_2->stream_list_lock);

 return VAR_4;
}
