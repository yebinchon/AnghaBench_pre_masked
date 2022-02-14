
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ parallel; } ;
struct v4l2_fwnode_endpoint {TYPE_2__ bus; int bus_type; } ;
struct mt9m111 {int pclk_sample; } ;
struct i2c_client {int dev; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct fwnode_handle* FUNC_1 (int ,int *) ;
 int FUNC_2 (struct fwnode_handle*) ;
 int FUNC_3 (struct fwnode_handle*,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3, struct mt9m111 *VAR_4)
{
 struct v4l2_fwnode_endpoint VAR_5 = {
  .bus_type = VAR_1
 };
 struct fwnode_handle *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(FUNC_0(&VAR_3->dev), ((void*)0));
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_6, &VAR_5);
 if (VAR_7)
  goto out_put_fw;

 VAR_4->pclk_sample = !!(VAR_5.bus.parallel.flags &
      VAR_2);

out_put_fw:
 FUNC_2(VAR_6);
 return VAR_7;
}
