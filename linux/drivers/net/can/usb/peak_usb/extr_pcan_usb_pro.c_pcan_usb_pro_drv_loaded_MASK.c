
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct peak_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct peak_usb_device*,int ,int ,int*,int ) ;

__attribute__((used)) static int FUNC_3(struct peak_usb_device *VAR_5, int VAR_6)
{
 u8 *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_3, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7[0] = 0;
 VAR_7[1] = !!VAR_6;

 VAR_8 = FUNC_2(VAR_5, VAR_4,
        VAR_2, VAR_7,
        VAR_3);
 FUNC_0(VAR_7);

 return VAR_8;
}
