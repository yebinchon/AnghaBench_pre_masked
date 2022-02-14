
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct hdpvr_device {int v4l2_dev; int usbc_mutex; int * usbc_buf; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,char,int,int ,int ,int *,int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int *,char*,int ,int) ;

int FUNC_5(struct hdpvr_device *VAR_3, uint VAR_4, u8 VAR_5)
{
 int VAR_6;
 char VAR_7 = 0x38, VAR_8 = 0x01;

 FUNC_0(&VAR_3->usbc_mutex);
 VAR_3->usbc_buf[0] = VAR_5;
 VAR_6 = FUNC_2(VAR_3->udev,
         FUNC_3(VAR_3->udev, 0),
         VAR_8, 0x00 | VAR_7,
         VAR_4, VAR_0,
         VAR_3->usbc_buf, 1, 10000);

 FUNC_1(&VAR_3->usbc_mutex);
 FUNC_4(VAR_1, VAR_2, &VAR_3->v4l2_dev,
   "config call request for value 0x%x returned %d\n", VAR_4,
   VAR_6);

 return VAR_6 < 0 ? VAR_6 : 0;
}
