
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
 unsigned int VAR_9 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;
 int FUNC_5 (struct adapter*,int ) ;
 int FUNC_6 (struct adapter*,unsigned int,int ) ;
 int FUNC_7 (struct adapter*,int ,unsigned int) ;

int FUNC_8(struct adapter *VAR_10, unsigned int VAR_11,
    int VAR_12, u64 VAR_13, unsigned int VAR_14,
    unsigned int VAR_15, int VAR_16, unsigned int VAR_17)
{
 unsigned int VAR_18 = 0;

 if (VAR_13 & 0xfff)
  return -VAR_6;
 if (FUNC_5(VAR_10, VAR_0) & VAR_7)
  return -VAR_5;

 VAR_13 >>= 12;
 FUNC_7(VAR_10, VAR_1, FUNC_2(VAR_14) |
       FUNC_1(VAR_17));
 FUNC_7(VAR_10, VAR_2, VAR_13);
 VAR_13 >>= 32;
 if (VAR_12 >= 0)
  VAR_18 = FUNC_4(VAR_12) | VAR_9;
 FUNC_7(VAR_10, VAR_3,
       FUNC_0((u32) VAR_13) | VAR_18 | FUNC_3(VAR_16));
 FUNC_7(VAR_10, VAR_4, VAR_15);
 return FUNC_6(VAR_10, VAR_11, VAR_8);
}
