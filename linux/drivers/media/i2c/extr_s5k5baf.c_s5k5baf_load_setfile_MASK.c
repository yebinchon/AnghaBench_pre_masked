
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5k5baf {int fw; int sd; } ;
struct i2c_client {int dev; } ;
struct firmware {int size; scalar_t__ data; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct firmware const**,int ,int *) ;
 int FUNC_3 (int *,int *,int,int *) ;
 struct i2c_client* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct s5k5baf *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_4(&VAR_1->sd);
 const struct firmware *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_3, VAR_0, &VAR_2->dev);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_2->dev, "firmware file (%s) not loaded\n",
    VAR_0);
  return VAR_4;
 }

 VAR_4 = FUNC_3(&VAR_2->dev, &VAR_1->fw, VAR_3->size / 2,
          (__le16 *)VAR_3->data);

 FUNC_1(VAR_3);

 return VAR_4;
}
