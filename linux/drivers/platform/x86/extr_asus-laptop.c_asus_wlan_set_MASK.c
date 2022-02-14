
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_laptop {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct asus_laptop *VAR_2, int VAR_3)
{
 if (FUNC_1(VAR_2->handle, VAR_1, !!VAR_3)) {
  FUNC_0("Error setting wlan status to %d\n", VAR_3);
  return -VAR_0;
 }
 return 0;
}
