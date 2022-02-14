
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* fwnode; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct i2c_board_info {char* dev_name; struct fwnode_handle* fwnode; int type; } ;
struct fwnode_handle {int secondary; } ;
struct device {int dummy; } ;
struct cht_int33fe_data {int max17047; } ;
typedef int board_info ;
struct TYPE_3__ {struct fwnode_handle* secondary; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct device*,int,struct i2c_board_info*) ;
 int FUNC_5 (struct i2c_client**,int ) ;
 int FUNC_6 (struct i2c_board_info*,int ,int) ;
 int * VAR_4 ;
 struct fwnode_handle* FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_9(struct device *VAR_5, struct cht_int33fe_data *VAR_6)
{
 struct i2c_client *VAR_7 = ((void*)0);
 struct i2c_board_info VAR_8;
 struct fwnode_handle *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_7(&VAR_4[VAR_2]);
 if (!VAR_9)
  return -VAR_0;

 FUNC_5(&VAR_7, VAR_3);
 if (VAR_7) {

  VAR_9->secondary = FUNC_0(-VAR_0);
  VAR_7->dev.fwnode->secondary = VAR_9;

  VAR_10 = FUNC_3(&VAR_7->dev);
  if (VAR_10)
   FUNC_2(VAR_5, "Reprobing max17047 error: %d\n", VAR_10);
  return 0;
 }

 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 FUNC_8(VAR_8.type, "max17047", VAR_1);
 VAR_8.dev_name = "max17047";
 VAR_8.fwnode = VAR_9;
 VAR_6->max17047 = FUNC_4(VAR_5, 1, &VAR_8);

 return FUNC_1(VAR_6->max17047);
}
