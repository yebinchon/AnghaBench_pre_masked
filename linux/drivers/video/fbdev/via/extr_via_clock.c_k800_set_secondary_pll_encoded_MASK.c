
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static inline void FUNC_2(u32 VAR_1)
{
 FUNC_1(VAR_0, 0x40, 0x04, 0x04);
 FUNC_0(VAR_0, 0x4A, VAR_1 & 0xFF);
 FUNC_0(VAR_0, 0x4B, (VAR_1 >> 8) & 0xFF);
 FUNC_0(VAR_0, 0x4C, (VAR_1 >> 16) & 0xFF);
 FUNC_1(VAR_0, 0x40, 0x00, 0x04);
}
