
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static u32 FUNC_1(u8 VAR_0, u16 VAR_1)
{
 FUNC_0(VAR_1 != 0,
    "sunxi_musb_ep_offset called with non 0 offset\n");

 return 0x80;
}
