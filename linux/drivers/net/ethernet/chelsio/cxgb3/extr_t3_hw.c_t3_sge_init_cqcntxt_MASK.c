
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (struct adapter*,int ) ;
 int FUNC_9 (struct adapter*,unsigned int,int ) ;
 int FUNC_10 (struct adapter*,int ,int) ;

int FUNC_11(struct adapter *VAR_9, unsigned int VAR_10, u64 VAR_11,
   unsigned int VAR_12, int VAR_13, int VAR_14,
   unsigned int VAR_15, unsigned int VAR_16)
{
 if (VAR_11 & 0xfff)
  return -VAR_6;
 if (FUNC_8(VAR_9, VAR_0) & VAR_7)
  return -VAR_5;

 VAR_11 >>= 12;
 FUNC_10(VAR_9, VAR_1, FUNC_7(VAR_12));
 FUNC_10(VAR_9, VAR_2, VAR_11);
 VAR_11 >>= 32;
 FUNC_10(VAR_9, VAR_3,
       FUNC_0((u32) VAR_11) | FUNC_6(VAR_13) |
       FUNC_4(1) | FUNC_5(VAR_14) |
       FUNC_3(VAR_14));
 FUNC_10(VAR_9, VAR_4, FUNC_1(VAR_15) |
       FUNC_2(VAR_16));
 return FUNC_9(VAR_9, VAR_10, VAR_8);
}
