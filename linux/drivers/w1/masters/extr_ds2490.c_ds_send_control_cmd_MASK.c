
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ds_device {int * ep; int udev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int *,int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ds_device *VAR_3, u16 VAR_4, u16 VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3->udev, FUNC_2(VAR_3->udev, VAR_3->ep[VAR_1]),
   VAR_0, VAR_2, VAR_4, VAR_5, ((void*)0), 0, 1000);
 if (VAR_6 < 0) {
  FUNC_0("Failed to send command control message %x.%x: err=%d.\n",
    VAR_4, VAR_5, VAR_6);
  return VAR_6;
 }

 return VAR_6;
}
