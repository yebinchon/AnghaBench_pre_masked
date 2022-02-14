
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct adapter*,unsigned int,int) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,int ,int,int ) ;
 int FUNC_4 (struct adapter*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct adapter *VAR_10, unsigned int VAR_11, int VAR_12)
{
 if (VAR_12) {





  FUNC_3(VAR_10, VAR_3, VAR_4, 0);
  if (VAR_11 <= VAR_5) {
   FUNC_3(VAR_10, VAR_0, VAR_9, 0);
   FUNC_0(100);
   if (FUNC_1(VAR_10, VAR_11,
     VAR_7 | VAR_6) == 0)
    return 0;
  }

  FUNC_4(VAR_10, VAR_8, VAR_7 | VAR_6);
  FUNC_0(2000);
 } else {
  int VAR_13;

  FUNC_3(VAR_10, VAR_0, VAR_9, 0);
  for (VAR_13 = 0; VAR_13 < VAR_2; ) {
   if (!(FUNC_2(VAR_10, VAR_3) & VAR_4))
    return 0;
   FUNC_0(100);
   VAR_13 += 100;
  }
  return -VAR_1;
 }
 return 0;
}
