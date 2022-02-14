
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ftgmac100 {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ftgmac100 *VAR_2, const u8 *VAR_3)
{
 unsigned int VAR_4 = VAR_3[0] << 8 | VAR_3[1];
 unsigned int VAR_5 = VAR_3[2] << 24 | VAR_3[3] << 16 | VAR_3[4] << 8 | VAR_3[5];

 FUNC_0(VAR_4, VAR_2->base + VAR_1);
 FUNC_0(VAR_5, VAR_2->base + VAR_0);
}
