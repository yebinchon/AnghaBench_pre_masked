
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ab3100 {int access_mutex; int dev; int i2c_client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ab3100 *VAR_1,
     u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 u8 VAR_5[2] = {VAR_2, 0};
 int VAR_6;

 VAR_6 = FUNC_3(&VAR_1->access_mutex);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_2(VAR_1->i2c_client, &VAR_2, 1);
 if (VAR_6 < 0) {
  FUNC_0(VAR_1->dev,
   "write error (maskset send address): %d\n",
   VAR_6);
  goto get_maskset_unlock;
 } else if (VAR_6 != 1) {
  FUNC_0(VAR_1->dev,
   "write error (maskset send address)\n"
   "  %d bytes transferred (expected 1)\n",
   VAR_6);
  VAR_6 = -VAR_0;
  goto get_maskset_unlock;
 }

 VAR_6 = FUNC_1(VAR_1->i2c_client, &VAR_5[1], 1);
 if (VAR_6 < 0) {
  FUNC_0(VAR_1->dev,
   "write error (maskset read register): %d\n",
   VAR_6);
  goto get_maskset_unlock;
 } else if (VAR_6 != 1) {
  FUNC_0(VAR_1->dev,
   "write error (maskset read register)\n"
   "  %d bytes transferred (expected 1)\n",
   VAR_6);
  VAR_6 = -VAR_0;
  goto get_maskset_unlock;
 }


 VAR_5[1] &= VAR_3;
 VAR_5[1] |= VAR_4;


 VAR_6 = FUNC_2(VAR_1->i2c_client, VAR_5, 2);
 if (VAR_6 < 0) {
  FUNC_0(VAR_1->dev,
   "write error (write register): %d\n",
   VAR_6);
  goto get_maskset_unlock;
 } else if (VAR_6 != 2) {
  FUNC_0(VAR_1->dev,
   "write error (write register)\n"
   "  %d bytes transferred (expected 2)\n",
   VAR_6);
  VAR_6 = -VAR_0;
  goto get_maskset_unlock;
 }


 VAR_6 = 0;

 get_maskset_unlock:
 FUNC_4(&VAR_1->access_mutex);
 return VAR_6;
}
