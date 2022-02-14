
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int i2c_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dvb_usb_device*,int ,int const*,int,int*,int) ;
 int FUNC_4 (int*,int*) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_4, u8 VAR_5[6])
{
 const u8 VAR_6[] = { 0x1f, 0xcc };
 u8 VAR_7[20];
 int VAR_8;

 VAR_8 = -VAR_0;
 if (FUNC_1(&VAR_4->i2c_mutex) < 0)
  goto failed;

 VAR_8 = FUNC_3(VAR_4, VAR_2,
    VAR_6 + 1, 1,
    VAR_7, 20);
 if (-VAR_1 == VAR_8)


  VAR_8 = FUNC_3(VAR_4, VAR_3,
     VAR_6, 2,
     VAR_7, 20);

 FUNC_2(&VAR_4->i2c_mutex);

 if (20 != VAR_8)
  goto failed;

 VAR_8 = FUNC_4(VAR_5, VAR_7);
 if (0 != VAR_8)
  goto failed;

 return 0;

failed:
 FUNC_0(VAR_5);

 return VAR_8;
}
