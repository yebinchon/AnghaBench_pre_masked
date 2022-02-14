
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fwnode_link {struct fwnode_handle* remote_node; int remote_port; struct fwnode_handle* local_node; int local_port; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 struct fwnode_handle* FUNC_0 (struct fwnode_handle*) ;
 struct fwnode_handle* FUNC_1 (struct fwnode_handle*) ;
 struct fwnode_handle* FUNC_2 (struct fwnode_handle*) ;
 int FUNC_3 (struct fwnode_handle*) ;
 int FUNC_4 (struct fwnode_handle*,char const*,int *) ;
 scalar_t__ FUNC_5 (struct fwnode_handle*) ;
 int FUNC_6 (struct v4l2_fwnode_link*,int ,int) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int FUNC_8 (struct fwnode_handle*) ;

int FUNC_9(struct fwnode_handle *VAR_1,
      struct v4l2_fwnode_link *VAR_2)
{
 const char *VAR_3 = FUNC_5(VAR_1) ? "reg" : "port";
 struct fwnode_handle *VAR_4;

 FUNC_6(VAR_2, 0, sizeof(*VAR_2));

 VAR_4 = FUNC_1(VAR_1);
 FUNC_4(VAR_4, VAR_3, &VAR_2->local_port);
 VAR_4 = FUNC_0(VAR_4);
 if (FUNC_5(VAR_4) && FUNC_7(FUNC_8(VAR_4), "ports"))
  VAR_4 = FUNC_0(VAR_4);
 VAR_2->local_node = VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 if (!VAR_4) {
  FUNC_3(VAR_4);
  return -VAR_0;
 }

 VAR_4 = FUNC_1(VAR_4);
 FUNC_4(VAR_4, VAR_3, &VAR_2->remote_port);
 VAR_4 = FUNC_0(VAR_4);
 if (FUNC_5(VAR_4) && FUNC_7(FUNC_8(VAR_4), "ports"))
  VAR_4 = FUNC_0(VAR_4);
 VAR_2->remote_node = VAR_4;

 return 0;
}
