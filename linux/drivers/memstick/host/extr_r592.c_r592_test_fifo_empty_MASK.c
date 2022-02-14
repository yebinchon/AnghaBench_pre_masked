
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r592_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct r592_device*) ;
 int FUNC_3 (struct r592_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct r592_device *VAR_3)
{
 if (FUNC_3(VAR_3, VAR_1) & VAR_2)
  return 0;

 FUNC_0("FIFO not ready, trying to reset the device");
 FUNC_2(VAR_3);

 if (FUNC_3(VAR_3, VAR_1) & VAR_2)
  return 0;

 FUNC_1("FIFO still not ready, giving up");
 return -VAR_0;
}
