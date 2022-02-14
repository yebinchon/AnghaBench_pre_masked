
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct watchdog_device {int parent; } ;
struct i2c_client {int dev; } ;
typedef int packet ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,scalar_t__,...) ;
 int FUNC_1 (struct i2c_client*,int ,int,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,scalar_t__ const*,scalar_t__) ;
 int FUNC_3 (scalar_t__*,int ,scalar_t__) ;
 int FUNC_4 (int const,scalar_t__*) ;
 struct i2c_client* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_8(struct watchdog_device *VAR_4,
        u32 VAR_5, const u8 *VAR_6, u8 VAR_7)
{
 const u16 VAR_8 = (u16)VAR_5 / 2;
 struct i2c_client *VAR_9 = FUNC_5(VAR_4->parent);
 u8 VAR_10, VAR_11 = 0, VAR_12[VAR_3];
 int VAR_13;


 if (VAR_7 > VAR_2) {
  FUNC_0(&VAR_9->dev, "Firmware packet too long (%d)\n",
   VAR_7);
  return -VAR_0;
 }
 if (VAR_7 && FUNC_6(VAR_5))
  return 0;


 VAR_12[0] = VAR_7;

 FUNC_4(VAR_8, VAR_12 + 1);

 FUNC_2(VAR_12 + 3, VAR_6, VAR_7);
 FUNC_3(VAR_12 + 3 + VAR_7, 0, VAR_2 - VAR_7);


 for (VAR_10 = 0; VAR_10 < VAR_7 + 3; VAR_10++)
  VAR_11 += VAR_12[VAR_10];
 VAR_12[VAR_3 - 1] = VAR_11;

 VAR_13 = FUNC_1(VAR_9, VAR_1,
      sizeof(VAR_12), VAR_12);
 if (VAR_13) {
  FUNC_0(&VAR_9->dev,
   "Failed to send DOWNLOAD_PACKET: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_7(VAR_4);
 if (VAR_13)
  FUNC_0(&VAR_9->dev,
        "Failed to write firmware packet at address 0x%04x: %d\n",
        VAR_5, VAR_13);

 return VAR_13;
}
