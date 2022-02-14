
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct gfar_private {int hash_width; int * hash_regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct gfar_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1, u8 *VAR_2)
{
 u32 VAR_3;
 struct gfar_private *VAR_4 = FUNC_3(VAR_1);
 u32 VAR_5 = FUNC_0(VAR_0, VAR_2);
 int VAR_6 = VAR_4->hash_width;
 u8 VAR_7 = (VAR_5 >> (32 - VAR_6)) & 0x1f;
 u8 VAR_8 = VAR_5 >> (32 - VAR_6 + 5);
 u32 VAR_9 = (1 << (31-VAR_7));

 VAR_3 = FUNC_1(VAR_4->hash_regs[VAR_8]);
 VAR_3 |= VAR_9;
 FUNC_2(VAR_4->hash_regs[VAR_8], VAR_3);
}
