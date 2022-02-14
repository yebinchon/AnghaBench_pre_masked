
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {scalar_t__ base_addr; } ;
struct i596_private {int options; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 struct i596_private* FUNC_1 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3, int VAR_4, dma_addr_t VAR_5)
{
 struct i596_private *VAR_6 = FUNC_1(VAR_3);

 u32 VAR_7 = (u32) (VAR_4) | (u32) (VAR_5);
 u16 VAR_8, VAR_9;

 if (VAR_6->options & VAR_0) {
  VAR_8 = VAR_7 >> 16;
  VAR_9 = VAR_7 & 0xffff;
 } else {
  VAR_8 = VAR_7 & 0xffff;
  VAR_9 = VAR_7 >> 16;
 }

 FUNC_0(VAR_8, VAR_3->base_addr + VAR_1);
 if (!VAR_2)
  FUNC_2(1);
 FUNC_0(VAR_9, VAR_3->base_addr + VAR_1);
}
