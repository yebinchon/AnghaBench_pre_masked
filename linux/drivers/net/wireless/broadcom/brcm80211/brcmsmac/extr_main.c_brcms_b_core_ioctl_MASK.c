
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcms_hardware {struct bcma_device* d11core; } ;
struct bcma_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcma_device*,int ) ;
 int FUNC_1 (struct bcma_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct brcms_hardware *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct bcma_device *VAR_4 = VAR_1->d11core;
 u32 VAR_5 = FUNC_0(VAR_4, VAR_0) & ~VAR_2;

 FUNC_1(VAR_4, VAR_0, VAR_5 | VAR_3);
}
