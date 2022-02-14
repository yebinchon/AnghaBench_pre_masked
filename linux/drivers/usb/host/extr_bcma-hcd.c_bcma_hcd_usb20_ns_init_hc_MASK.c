
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcma_device {int dummy; } ;


 int FUNC_0 (struct bcma_device*,int) ;
 int FUNC_1 (struct bcma_device*,int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct bcma_device *VAR_0)
{
 u32 VAR_1;


 VAR_1 = FUNC_0(VAR_0, 0x94);
 VAR_1 &= 0xffff;
 VAR_1 |= 0x80 << 16;
 FUNC_1(VAR_0, 0x94, VAR_1);


 VAR_1 = FUNC_0(VAR_0, 0x9c);
 VAR_1 |= 1;
 FUNC_1(VAR_0, 0x9c, VAR_1);






 FUNC_2(1000, 2000);
}
