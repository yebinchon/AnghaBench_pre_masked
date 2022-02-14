
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int,int) ;

int FUNC_1(u8 VAR_2, u32 VAR_3)
{
 return FUNC_0(VAR_1,
       (VAR_2 & VAR_0) |




       (u8)((VAR_3 << 4) & 0xf0),
       (u8)((VAR_3 >> 4) & 0xff),
       (u8)((VAR_3 >> 12) & 0xff),
       (u8)((VAR_3 >> 20) & 0xff));
}
