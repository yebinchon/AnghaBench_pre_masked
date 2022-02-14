
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sdw_slave {TYPE_1__* bus; int dev_num; } ;
struct sdw_msg {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sdw_msg*,struct sdw_slave*,int ,size_t,int ,int ,int *) ;
 int FUNC_3 (TYPE_1__*,struct sdw_msg*) ;

int FUNC_4(struct sdw_slave *VAR_1, u32 VAR_2, size_t VAR_3, u8 *VAR_4)
{
 struct sdw_msg VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_5, VAR_1, VAR_2, VAR_3,
      VAR_1->dev_num, VAR_0, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_1->bus->dev);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_1->bus, &VAR_5);
 FUNC_1(VAR_1->bus->dev);

 return VAR_6;
}
