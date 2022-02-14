
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct rpc_pipe_msg {int len; struct idmap_msg* data; } ;
struct idmap_msg {int im_id; int im_conv; void* im_type; int im_name; } ;
struct idmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;




 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (char*,int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(char *VAR_7, struct idmap *VAR_8,
         struct idmap_msg *VAR_9,
         struct rpc_pipe_msg *VAR_10)
{
 substring_t VAR_11;
 int VAR_12, VAR_13;

 VAR_9->im_type = VAR_4;
 VAR_12 = FUNC_2(VAR_7, VAR_6, &VAR_11);

 switch (VAR_12) {
 case 129:
  VAR_9->im_type = VAR_5;

 case 131:
  VAR_9->im_conv = VAR_2;
  VAR_13 = FUNC_1(VAR_9->im_name, &VAR_11, VAR_3);
  break;

 case 128:
  VAR_9->im_type = VAR_5;

 case 130:
  VAR_9->im_conv = VAR_1;
  VAR_13 = FUNC_0(&VAR_11, &VAR_9->im_id);
  if (VAR_13)
   goto out;
  break;

 default:
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_10->data = VAR_9;
 VAR_10->len = sizeof(struct idmap_msg);

out:
 return VAR_13;
}
