
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds_device {int * ep; int udev; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,int ,unsigned char*,int,int*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ds_device *VAR_1, unsigned char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = 0;
 VAR_5 = FUNC_1(VAR_1->udev, FUNC_2(VAR_1->udev, VAR_1->ep[VAR_0]), VAR_2, VAR_3, &VAR_4, 1000);
 if (VAR_5 < 0) {
  FUNC_0("Failed to write 1-wire data to ep0x%x: "
   "err=%d.\n", VAR_1->ep[VAR_0], VAR_5);
  return VAR_5;
 }

 return VAR_5;
}
