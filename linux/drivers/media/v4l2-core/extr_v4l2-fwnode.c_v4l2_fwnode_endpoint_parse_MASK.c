
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fwnode_endpoint {int dummy; } ;
struct fwnode_handle {int dummy; } ;


 int FUNC_0 (struct fwnode_handle*,struct v4l2_fwnode_endpoint*) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct fwnode_handle *VAR_0,
          struct v4l2_fwnode_endpoint *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);

 FUNC_1("===== end V4L2 endpoint properties\n");

 return VAR_2;
}
