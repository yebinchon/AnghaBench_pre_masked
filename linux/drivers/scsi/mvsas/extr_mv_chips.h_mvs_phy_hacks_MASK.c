
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mvs_info*,int ) ;
 int FUNC_1 (struct mvs_info*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct mvs_info *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 VAR_6 &= ~(1 << 9);
 VAR_6 |= (1 << 10);
 FUNC_1(VAR_5, VAR_1, VAR_6);


 FUNC_1(VAR_5, VAR_3, 0x7f7f);


 VAR_6 = FUNC_0(VAR_5, VAR_2);
 VAR_6 &= ~0xffff;
 VAR_6 |= 0x3fff;
 FUNC_1(VAR_5, VAR_2, VAR_6);

 FUNC_1(VAR_5, VAR_4, 0x7a0000);


 FUNC_1(VAR_5, VAR_0, 0xffefbf7d);
}
