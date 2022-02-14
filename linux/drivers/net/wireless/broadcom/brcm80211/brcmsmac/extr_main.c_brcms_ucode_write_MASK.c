
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
typedef int u32 ;
struct brcms_hardware {int unit; struct bcma_device* d11core; } ;
struct bcma_device {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bcma_device*,int ) ;
 int FUNC_2 (struct bcma_device*,int ,int) ;
 int FUNC_3 (struct bcma_device*,char*,int ) ;
 int FUNC_4 (int const) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(struct brcms_hardware *VAR_4,
         const __le32 VAR_5[], const size_t VAR_6)
{
 struct bcma_device *VAR_7 = VAR_4->d11core;
 uint VAR_8;
 uint VAR_9;

 FUNC_3(VAR_4->d11core, "wl%d\n", VAR_4->unit);

 VAR_9 = (VAR_6 / sizeof(u32));

 FUNC_2(VAR_7, FUNC_0(VAR_2),
       VAR_0 | VAR_1);
 (void)FUNC_1(VAR_7, FUNC_0(VAR_2));
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  FUNC_2(VAR_7, FUNC_0(VAR_3), FUNC_4(VAR_5[VAR_8]));

}
