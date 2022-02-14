
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct v4l2_subdev {TYPE_1__* v4l2_dev; } ;
struct i2c_client {int dummy; } ;
struct firmware {scalar_t__ size; int const* data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int const*,int) ;
 int VAR_5 ;
 int FUNC_1 (int const*) ;
 void* FUNC_2 (int const*) ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct firmware const**,int ,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int ) ;
 int FUNC_6 (struct i2c_client*,scalar_t__,int ) ;
 int FUNC_7 (int,int ,struct v4l2_subdev*,char*,int ,scalar_t__,int) ;
 int FUNC_8 (struct v4l2_subdev*,char*,scalar_t__,...) ;
 struct i2c_client* FUNC_9 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_10(struct v4l2_subdev *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_9(VAR_6);
 const struct firmware *VAR_8;
 const u8 *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 u32 VAR_13, VAR_14, VAR_15, VAR_16 = 0;
 u16 VAR_17;

 VAR_10 = FUNC_4(&VAR_8, VAR_4, VAR_6->v4l2_dev->dev);
 if (VAR_10) {
  FUNC_8(VAR_6, "Failed to read firmware %s\n", VAR_4);
  return VAR_10;
 }
 VAR_12 = FUNC_2(VAR_8->data);

 FUNC_7(3, VAR_5, VAR_6, "FW: %s size %zu register sets %d\n",
   VAR_4, VAR_8->size, VAR_12);

 VAR_12++;
 if (VAR_8->size != VAR_12 * VAR_2 + VAR_1) {
  VAR_10 = -VAR_0;
  goto fw_out;
 }
 VAR_15 = FUNC_2(VAR_8->data + VAR_12 * VAR_2);
 VAR_14 = FUNC_0(~0, VAR_8->data, VAR_12 * VAR_2);
 if (VAR_14 != VAR_15) {
  FUNC_8(VAR_6, "FW: invalid crc (%#x:%#x)\n", VAR_14, VAR_15);
  VAR_10 = -VAR_0;
  goto fw_out;
 }
 VAR_9 = VAR_8->data + VAR_2;
 for (VAR_11 = 1; VAR_11 < VAR_12; VAR_11++) {
  VAR_13 = FUNC_2(VAR_9);
  VAR_9 += sizeof(u32);
  VAR_17 = FUNC_1(VAR_9);
  VAR_9 += sizeof(u16);
  if (VAR_13 - VAR_16 != 2)
   VAR_10 = FUNC_6(VAR_7, VAR_13, VAR_17);
  else
   VAR_10 = FUNC_5(VAR_7, VAR_3, VAR_17);
  if (VAR_10)
   break;
  VAR_16 = VAR_13;
 }
fw_out:
 FUNC_3(VAR_8);
 return VAR_10;
}
