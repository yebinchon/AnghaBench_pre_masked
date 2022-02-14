
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpmsg_device {int dev; } ;
struct glink_ssr {scalar_t__ seq_num; int completion; int dev; } ;
struct cleanup_done_msg {int seq_num; int response; int version; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 struct glink_ssr* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct rpmsg_device *VAR_2,
       void *VAR_3, int VAR_4, void *VAR_5, u32 VAR_6)
{
 struct cleanup_done_msg *VAR_7 = VAR_3;
 struct glink_ssr *VAR_8 = FUNC_2(&VAR_2->dev);

 if (VAR_4 < sizeof(*VAR_7)) {
  FUNC_1(VAR_8->dev, "message too short\n");
  return -VAR_0;
 }

 if (FUNC_3(VAR_7->version) != 0)
  return -VAR_0;

 if (FUNC_3(VAR_7->response) != VAR_1)
  return 0;

 if (FUNC_3(VAR_7->seq_num) != VAR_8->seq_num) {
  FUNC_1(VAR_8->dev, "invalid sequence number of response\n");
  return -VAR_0;
 }

 FUNC_0(&VAR_8->completion);

 return 0;
}
