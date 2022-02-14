
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int addr; int dev; int adapter; } ;
struct go7007_usb {int i2c_lock; } ;
struct go7007 {scalar_t__ status; struct go7007_usb* hpi_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct go7007*,int,int,int,int*,int,int) ;
 struct go7007* FUNC_2 (int ) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_6, u8 VAR_7, u8 VAR_8)
{
 struct go7007 *VAR_9 = FUNC_2(VAR_6->adapter);
 struct go7007_usb *VAR_10;
 int VAR_11;
 int VAR_12 = VAR_6->addr << 1;
 u8 *VAR_13;

 if (VAR_9 == ((void*)0))
  return -VAR_2;

 if (VAR_9->status == VAR_5)
  return -VAR_0;

 VAR_13 = FUNC_4(16, VAR_4);
 if (VAR_13 == ((void*)0))
  return -VAR_3;

 VAR_10 = VAR_9->hpi_context;
 if (FUNC_5(&VAR_10->i2c_lock) != 0) {
  FUNC_0(&VAR_6->dev, "i2c lock failed\n");
  FUNC_3(VAR_13);
  return -VAR_1;
 }
 VAR_11 = FUNC_1(VAR_9, 0x55, VAR_12,
           (VAR_7<<8 | VAR_8),
           VAR_13,
           16, 1);

 FUNC_6(&VAR_10->i2c_lock);
 FUNC_3(VAR_13);
 return VAR_11;
}
