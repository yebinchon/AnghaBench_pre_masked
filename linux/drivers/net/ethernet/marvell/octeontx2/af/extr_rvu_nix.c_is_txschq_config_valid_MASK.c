
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct rvu {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int,int ) ;
 int VAR_5 ;
 int FUNC_5 (struct rvu*,int,int,int,int) ;
 int FUNC_6 (int ,int,int) ;

__attribute__((used)) static bool FUNC_7(struct rvu *VAR_6, u16 VAR_7, int VAR_8,
       int VAR_9, u64 VAR_10, u64 VAR_11)
{
 u64 VAR_12 = VAR_10 & 0xFFFF;
 u16 VAR_13, VAR_14;

 if (!FUNC_6(VAR_4, VAR_9, VAR_10))
  return 0;

 VAR_13 = FUNC_4(VAR_10, VAR_5);

 if (!FUNC_5(VAR_6, VAR_8, VAR_9, VAR_7, VAR_13))
  return 0;

 VAR_14 = (VAR_11 >> 16) & 0x1FF;

 if (VAR_12 == FUNC_0(0) &&
     !FUNC_5(VAR_6, VAR_8, VAR_3, VAR_7, VAR_14))
  return 0;


 if (VAR_12 == FUNC_3(0) &&
     !FUNC_5(VAR_6, VAR_8, VAR_2, VAR_7, VAR_14))
  return 0;


 if (VAR_12 == FUNC_2(0) &&
     !FUNC_5(VAR_6, VAR_8, VAR_1, VAR_7, VAR_14))
  return 0;


 if (VAR_12 == FUNC_1(0) &&
     !FUNC_5(VAR_6, VAR_8, VAR_0, VAR_7, VAR_14))
  return 0;

 return 1;
}
