
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {scalar_t__* name; } ;
struct fwnode_handle {int dummy; } ;
typedef int devname ;


 int VAR_0 ;
 struct i2c_device_id* VAR_1 ;
 int FUNC_0 (struct fwnode_handle*,char*,char const**) ;
 char* FUNC_1 (char const*,char) ;
 scalar_t__ FUNC_2 (char*,scalar_t__*) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static const struct i2c_device_id *FUNC_4(struct fwnode_handle *VAR_2)
{
 const struct i2c_device_id *VAR_3 = VAR_1;
 const char *VAR_4, *VAR_5;
 char VAR_6[VAR_0];
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, "compatible", &VAR_4);
 if (VAR_7)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_4, ',');
 FUNC_3(VAR_6, VAR_5 ? VAR_5 + 1 : VAR_4, sizeof(VAR_6));

 while (VAR_3->name[0]) {
  if (FUNC_2(VAR_6, VAR_3->name) == 0)
   return VAR_3;
  VAR_3++;
 }
 return ((void*)0);
}
