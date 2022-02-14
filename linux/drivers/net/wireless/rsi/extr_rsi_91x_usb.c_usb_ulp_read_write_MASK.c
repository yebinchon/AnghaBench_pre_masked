
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rsi_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rsi_hw*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct rsi_hw *VAR_6, u16 VAR_7, u32 VAR_8,
         u16 VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_1
   (VAR_6, VAR_4,
    ((VAR_7 << 6) | ((VAR_8 >> 16) & 0xffff)), 2);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_6, VAR_3,
           (VAR_8 & 0xffff), 2);
 if (VAR_10 < 0)
  return VAR_10;


 FUNC_1(VAR_6, VAR_0,
     VAR_1, 2);

 VAR_10 = FUNC_1(VAR_6, VAR_2,
           ((VAR_9 - 1) | VAR_5), 2);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_0(20);

 return 0;
}
