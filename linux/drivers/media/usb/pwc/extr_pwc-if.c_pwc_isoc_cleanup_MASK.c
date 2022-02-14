
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int udev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct pwc_device*) ;
 int FUNC_2 (struct pwc_device*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct pwc_device *VAR_0)
{
 FUNC_0(">> pwc_isoc_cleanup()\n");

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 FUNC_3(VAR_0->udev, 0, 0);

 FUNC_0("<< pwc_isoc_cleanup()\n");
}
