
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tridentfb_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct tridentfb_par*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct tridentfb_par *VAR_7,
       u32 VAR_8, u32 VAR_9, u32 VAR_10, u32 VAR_11, u32 VAR_12, u32 VAR_13)
{
 FUNC_1(VAR_7, VAR_1, VAR_12);
 FUNC_1(VAR_7, VAR_4, VAR_13 ? VAR_6 : VAR_5);
 FUNC_1(VAR_7, VAR_0, 0x20000000 | 1 << 19 | 1 << 4 | 2 << 2);

 FUNC_1(VAR_7, VAR_2, FUNC_0(VAR_8, VAR_9));
 FUNC_1(VAR_7, VAR_3, FUNC_0(VAR_8 + VAR_10 - 1, VAR_9 + VAR_11 - 1));
}
