
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cmac {int offset; int adapter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct cmac *VAR_2, int VAR_3, const u8 * VAR_4)
{
 u32 VAR_5, VAR_6;
 unsigned int VAR_7 = VAR_2->offset + VAR_3 * 8;

 VAR_5 = (VAR_4[3] << 24) | (VAR_4[2] << 16) | (VAR_4[1] << 8) | VAR_4[0];
 VAR_6 = (VAR_4[5] << 8) | VAR_4[4];

 FUNC_0(VAR_2->adapter, VAR_1 + VAR_7, VAR_5);
 FUNC_0(VAR_2->adapter, VAR_0 + VAR_7, VAR_6);
}
