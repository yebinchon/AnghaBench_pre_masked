
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tango_ir {int rc; scalar_t__ rc5_base; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct tango_ir *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_3 = FUNC_3(VAR_2->rc5_base + VAR_0);
 if (VAR_3 & FUNC_0(31))
  return;

 VAR_4 = VAR_3 >> 12 & 1;
 VAR_5 = VAR_3 >> 11 & 1;
 VAR_6 = VAR_3 >> 6 & 0x1f;
 VAR_7 = (VAR_3 & 0x3f) | (VAR_4 ^ 1) << 6;

 VAR_8 = FUNC_1(VAR_6, VAR_7);
 FUNC_2(VAR_2->rc, VAR_1, VAR_8, VAR_5);
}
