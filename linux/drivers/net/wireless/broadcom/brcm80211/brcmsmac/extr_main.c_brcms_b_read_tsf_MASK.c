
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcms_hardware {struct bcma_device* d11core; } ;
struct bcma_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bcma_device*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct brcms_hardware *VAR_2, u32 *VAR_3,
    u32 *VAR_4)
{
 struct bcma_device *VAR_5 = VAR_2->d11core;


 *VAR_3 = FUNC_1(VAR_5, FUNC_0(VAR_1));
 *VAR_4 = FUNC_1(VAR_5, FUNC_0(VAR_0));
}
