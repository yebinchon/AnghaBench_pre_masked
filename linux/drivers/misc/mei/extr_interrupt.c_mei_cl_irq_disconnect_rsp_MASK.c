
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mei_device {int dummy; } ;
struct mei_cl_cb {int list; } ;
struct mei_cl {struct mei_device* dev; } ;
struct list_head {int dummy; } ;
struct hbm_client_connect_response {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct list_head*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mei_device*,struct mei_cl*) ;
 int FUNC_3 (struct mei_device*) ;

__attribute__((used)) static int FUNC_4(struct mei_cl *VAR_2, struct mei_cl_cb *VAR_3,
         struct list_head *VAR_4)
{
 struct mei_device *VAR_5 = VAR_2->dev;
 u32 VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(sizeof(struct hbm_client_connect_response));
 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7 < 0)
  return -VAR_1;

 if ((u32)VAR_7 < VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_5, VAR_2);
 FUNC_0(&VAR_3->list, VAR_4);

 return VAR_8;
}
