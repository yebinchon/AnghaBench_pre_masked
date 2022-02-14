
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct brcms_hardware {int unit; struct bcma_device* d11core; } ;
struct bcma_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bcma_device*,int ,int) ;
 int FUNC_2 (struct bcma_device*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct brcms_hardware *VAR_3, int VAR_4,
         const u8 *VAR_5)
{
 struct bcma_device *VAR_6 = VAR_3->d11core;
 u16 VAR_7;
 u16 VAR_8;
 u16 VAR_9;

 FUNC_2(VAR_6, "wl%d: brcms_b_set_addrmatch\n", VAR_3->unit);

 VAR_7 = VAR_5[0] | (VAR_5[1] << 8);
 VAR_8 = VAR_5[2] | (VAR_5[3] << 8);
 VAR_9 = VAR_5[4] | (VAR_5[5] << 8);


 FUNC_1(VAR_6, FUNC_0(VAR_1),
       VAR_0 | VAR_4);
 FUNC_1(VAR_6, FUNC_0(VAR_2), VAR_7);
 FUNC_1(VAR_6, FUNC_0(VAR_2), VAR_8);
 FUNC_1(VAR_6, FUNC_0(VAR_2), VAR_9);
}
