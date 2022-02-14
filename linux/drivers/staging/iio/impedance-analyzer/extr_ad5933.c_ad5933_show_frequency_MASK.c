
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned long long u64 ;
struct iio_dev_attr {int address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad5933_state {int mclk_hz; int client; } ;
typedef int ssize_t ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (int ) ;
 struct iio_dev* FUNC_3 (struct device*) ;
 int FUNC_4 (unsigned long long,int ) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;
 struct ad5933_state* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (char*,char*,int) ;
 struct iio_dev_attr* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_0,
         struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_3(VAR_0);
 struct ad5933_state *VAR_4 = FUNC_7(VAR_3);
 struct iio_dev_attr *VAR_5 = FUNC_9(VAR_1);
 int VAR_6;
 unsigned long long VAR_7;
 union {
  __be32 d32;
  u8 d8[4];
 } VAR_8;

 VAR_6 = FUNC_5(VAR_3);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_1(VAR_4->client, VAR_5->address, 3, &VAR_8.d8[1]);
 FUNC_6(VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = FUNC_2(VAR_8.d32) & 0xFFFFFF;

 VAR_7 = (u64)VAR_7 * (u64)(VAR_4->mclk_hz / 4);
 FUNC_4(VAR_7, FUNC_0(27));

 return FUNC_8(VAR_2, "%d\n", (int)VAR_7);
}
