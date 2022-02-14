
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rt_fw_blob {int size; scalar_t__ data; } ;
struct net_device {int dev; } ;
struct firmware {int size; int data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct net_device*,char*,char const*) ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct firmware const**,char const*,int *) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static bool FUNC_7(struct net_device *VAR_1, struct rt_fw_blob *VAR_2,
          const char *VAR_3, u8 VAR_4)
{
 const struct firmware *VAR_5;
 int VAR_6, VAR_7;
 bool VAR_8 = 1;

 VAR_6 = FUNC_4(&VAR_5, VAR_3, &VAR_1->dev);
 if (VAR_6 < 0)
  return 0;

 if (FUNC_5(VAR_5->size, 4) > VAR_0 - VAR_4) {
  FUNC_2(VAR_1, "Firmware image %s too big for the device.\n",
      VAR_3);
  VAR_8 = 0;
  goto out;
 }

 if (VAR_4)
  FUNC_1(VAR_2->data, 0, VAR_4);
 if (VAR_5->size % 4)
  FUNC_1(VAR_2->data + VAR_4 + VAR_5->size, 0, 4);
 FUNC_0(VAR_2->data + VAR_4, VAR_5->data, VAR_5->size);

 VAR_2->size = FUNC_5(VAR_5->size, 4) + VAR_4;


 for (VAR_7 = VAR_4; VAR_7 < VAR_2->size; VAR_7 += 4) {
  u32 *VAR_9 = (u32 *)(VAR_2->data + VAR_7);
  *VAR_9 = FUNC_6(VAR_9);
 }
out:
 FUNC_3(VAR_5);
 return VAR_8;
}
