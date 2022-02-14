
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tango_ir {int rc; scalar_t__ rc6_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct tango_ir *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_4 = FUNC_2(VAR_3->rc6_base + VAR_0);
 VAR_5 = FUNC_2(VAR_3->rc6_base + VAR_1);

 VAR_7 = VAR_4 >> 1 & 7;
 if (VAR_7 != 0)
  return;

 VAR_6 = VAR_4 & 1;
 VAR_8 = VAR_4 >> 16;
 VAR_9 = VAR_5;

 VAR_10 = FUNC_0(VAR_8, VAR_9);
 FUNC_1(VAR_3->rc, VAR_2, VAR_10, VAR_6);
}
