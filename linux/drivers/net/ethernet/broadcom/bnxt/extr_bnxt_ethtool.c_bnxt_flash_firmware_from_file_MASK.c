
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dev; } ;
struct firmware {int size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int ,int ,int ) ;
 int FUNC_3 (struct net_device*,int ,int ,int ) ;
 int FUNC_4 (struct net_device*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct net_device*,char*,int,char const*) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (struct firmware const**,char const*,int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1,
      u16 VAR_2,
      const char *VAR_3)
{
 const struct firmware *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_7(&VAR_4, VAR_3, &VAR_1->dev);
 if (VAR_5 != 0) {
  FUNC_5(VAR_1, "Error %d requesting firmware file: %s\n",
      VAR_5, VAR_3);
  return VAR_5;
 }
 if (FUNC_0(VAR_2) == 1)
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4->data, VAR_4->size);
 else if (FUNC_1(VAR_2) == 1)
  VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_4->data, VAR_4->size);
 else
  VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_0,
          0, 0, VAR_4->data, VAR_4->size);
 FUNC_6(VAR_4);
 return VAR_5;
}
