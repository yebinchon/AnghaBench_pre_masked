
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint ;
typedef int u32 ;
typedef int u16 ;
struct d11init {scalar_t__ addr; scalar_t__ size; int value; } ;
struct brcms_hardware {int unit; struct bcma_device* d11core; } ;
struct bcma_device {int dummy; } ;


 int FUNC_0 (struct bcma_device*,void*,int ) ;
 int FUNC_1 (struct bcma_device*,void*,int ) ;
 int FUNC_2 (struct bcma_device*,char*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct brcms_hardware *VAR_0,
    const struct d11init *VAR_1)
{
 struct bcma_device *VAR_2 = VAR_0->d11core;
 int VAR_3;
 uint VAR_4;
 u16 VAR_5;
 u32 VAR_6;

 FUNC_2(VAR_0->d11core, "wl%d\n", VAR_0->unit);

 for (VAR_3 = 0; VAR_1[VAR_3].addr != FUNC_3(0xffff); VAR_3++) {
  VAR_5 = FUNC_4(VAR_1[VAR_3].size);
  VAR_4 = FUNC_4(VAR_1[VAR_3].addr);
  VAR_6 = FUNC_5(VAR_1[VAR_3].value);
  if (VAR_5 == 2)
   FUNC_0(VAR_2, VAR_4, VAR_6);
  else if (VAR_5 == 4)
   FUNC_1(VAR_2, VAR_4, VAR_6);
  else
   break;
 }
}
