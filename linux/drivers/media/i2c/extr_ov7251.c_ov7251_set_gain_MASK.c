
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ov7251 {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ov7251*,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct ov7251 *VAR_1, s32 VAR_2)
{
 u16 VAR_3;
 u8 VAR_4[2];

 VAR_3 = VAR_0;
 VAR_4[0] = (VAR_2 & 0x0300) >> 8;
 VAR_4[1] = VAR_2 & 0xff;

 return FUNC_0(VAR_1, VAR_3, VAR_4, 2);
}
