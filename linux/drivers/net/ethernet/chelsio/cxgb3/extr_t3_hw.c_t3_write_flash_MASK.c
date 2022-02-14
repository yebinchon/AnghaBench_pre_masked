
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct adapter*,int,int) ;
 scalar_t__ FUNC_2 (int const*,int *,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (struct adapter*,unsigned int,int,unsigned int) ;
 unsigned int FUNC_5 (unsigned int) ;
 int FUNC_6 (struct adapter*,unsigned int,int ,int *,int) ;

__attribute__((used)) static int FUNC_7(struct adapter *VAR_5, unsigned int VAR_6,
     unsigned int VAR_7, const u8 *VAR_8)
{
 int VAR_9;
 u32 VAR_10[64];
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15 = VAR_6 & 0xff;

 if (VAR_6 + VAR_7 > VAR_3 || VAR_15 + VAR_7 > 256)
  return -VAR_0;

 VAR_14 = FUNC_5(VAR_6) | VAR_2;

 if ((VAR_9 = FUNC_4(VAR_5, 1, 0, VAR_4)) != 0 ||
     (VAR_9 = FUNC_4(VAR_5, 4, 1, VAR_14)) != 0)
  return VAR_9;

 for (VAR_13 = VAR_7; VAR_13; VAR_13 -= VAR_12) {
  VAR_12 = FUNC_3(VAR_13, 4U);
  for (VAR_14 = 0, VAR_11 = 0; VAR_11 < VAR_12; ++VAR_11)
   VAR_14 = (VAR_14 << 8) + *VAR_8++;

  VAR_9 = FUNC_4(VAR_5, VAR_12, VAR_12 != VAR_13, VAR_14);
  if (VAR_9)
   return VAR_9;
 }
 if ((VAR_9 = FUNC_1(VAR_5, 5, 1)) != 0)
  return VAR_9;


 VAR_9 = FUNC_6(VAR_5, VAR_6 & ~0xff, FUNC_0(VAR_10), VAR_10, 1);
 if (VAR_9)
  return VAR_9;

 if (FUNC_2(VAR_8 - VAR_7, (u8 *) VAR_10 + VAR_15, VAR_7))
  return -VAR_1;
 return 0;
}
