
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tridentfb_par {scalar_t__ io_virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,char const*,unsigned int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct tridentfb_par*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct tridentfb_par *VAR_5, const char *VAR_6,
        u32 VAR_7, u32 VAR_8, u32 VAR_9, u32 VAR_10, u32 VAR_11, u32 VAR_12)
{
 unsigned VAR_13 = ((VAR_9 + 31) >> 5) * VAR_10;

 FUNC_2(VAR_5, VAR_2, VAR_11);
 FUNC_2(VAR_5, VAR_0, VAR_12);
 FUNC_2(VAR_5, VAR_1, 0xa0000000 | 3 << 19);

 FUNC_2(VAR_5, VAR_3, FUNC_1(VAR_7, VAR_8));
 FUNC_2(VAR_5, VAR_4, FUNC_1(VAR_7 + VAR_9 - 1, VAR_8 + VAR_10 - 1));

 FUNC_0(VAR_5->io_virt + 0x10000, VAR_6, VAR_13);
}
