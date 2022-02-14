
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtllib_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct rtllib_device *VAR_1, u8 **VAR_2)
{
 u8 *VAR_3 = *VAR_2;

 *VAR_3++ = VAR_0;
 *VAR_3++ = 7;
 *VAR_3++ = 0x00;
 *VAR_3++ = 0xe0;
 *VAR_3++ = 0x4c;
 *VAR_3++ = 0x01;
 *VAR_3++ = 0x02;
 *VAR_3++ = 0x11;
 *VAR_3++ = 0x00;

 *VAR_2 = VAR_3;
 FUNC_0(VAR_1->dev, "This is enable turbo mode IE process\n");
}
