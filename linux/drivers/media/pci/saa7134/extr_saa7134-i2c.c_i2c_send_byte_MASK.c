
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int dummy; } ;
typedef enum i2c_status { ____Placeholder_i2c_status } i2c_status ;
typedef enum i2c_attr { ____Placeholder_i2c_attr } i2c_attr ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,unsigned char) ;
 int FUNC_1 (struct saa7134_dev*) ;
 int FUNC_2 (struct saa7134_dev*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static inline int FUNC_6(struct saa7134_dev *VAR_2,
    enum i2c_attr VAR_3,
    unsigned char VAR_4)
{
 enum i2c_status VAR_5;
 __u32 VAR_6;


 VAR_6 = FUNC_4(VAR_1 >> 2);
 VAR_6 &= 0x0f;
 VAR_6 |= (VAR_3 << 6);
 VAR_6 |= ((__u32)VAR_4 << 8);
 VAR_6 |= 0x00 << 16;

 VAR_6 |= 0xf0 << 24;
 FUNC_5(VAR_1 >> 2, VAR_6);
 FUNC_0(2, "i2c data => 0x%x\n", VAR_4);

 if (!FUNC_2(VAR_2))
  return -VAR_0;
 VAR_5 = FUNC_1(VAR_2);
 if (FUNC_3(VAR_5))
  return -VAR_0;
 return 0;
}
