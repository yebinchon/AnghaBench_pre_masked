
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w1_slave {int dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static size_t FUNC_1(struct w1_slave *VAR_6, u8 VAR_7[])
{

 if (VAR_7[0] & VAR_4)
  FUNC_0(&VAR_6->dev, "crc16 mismatch\n");
 if (VAR_7[0] & VAR_3)
  FUNC_0(&VAR_6->dev, "i2c device not responding\n");
 if ((VAR_7[0] & (VAR_4 | VAR_3)) == 0
   && VAR_7[1] != 0) {
  FUNC_0(&VAR_6->dev, "i2c short write, %d bytes not acknowledged\n",
   VAR_7[1]);
 }


 if (VAR_7[0] & VAR_3)
  return -VAR_2;
 if (VAR_7[0] & VAR_5)
  return -VAR_0;
 if (VAR_7[0] != 0 || VAR_7[1] != 0)
  return -VAR_1;


 return 0;
}
