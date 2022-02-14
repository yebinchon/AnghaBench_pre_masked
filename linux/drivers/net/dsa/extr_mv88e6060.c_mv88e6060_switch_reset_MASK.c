
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6060_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int VAR_11 ;
 int FUNC_1 (struct mv88e6060_priv*,int ,int ) ;
 int FUNC_2 (struct mv88e6060_priv*,int ,int ,int) ;
 scalar_t__ FUNC_3 (int,unsigned long) ;
 scalar_t__ FUNC_4 (int,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct mv88e6060_priv *VAR_12)
{
 int VAR_13;
 int VAR_14;
 unsigned long VAR_15;


 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  VAR_14 = FUNC_1(VAR_12, FUNC_0(VAR_13), VAR_8);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_14 = FUNC_2(VAR_12, FUNC_0(VAR_13), VAR_8,
    VAR_14 & ~VAR_9);
  if (VAR_14)
   return VAR_14;
 }


 FUNC_5(2000, 4000);


 VAR_14 = FUNC_2(VAR_12, VAR_10, VAR_1,
   VAR_3 |
   VAR_2);
 if (VAR_14)
  return VAR_14;


 VAR_15 = VAR_11 + 1 * VAR_6;
 while (FUNC_4(VAR_11, VAR_15)) {
  VAR_14 = FUNC_1(VAR_12, VAR_10, VAR_4);
  if (VAR_14 < 0)
   return VAR_14;

  if (VAR_14 & VAR_5)
   break;

  FUNC_5(1000, 2000);
 }
 if (FUNC_3(VAR_11, VAR_15))
  return -VAR_0;

 return 0;
}
