
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int FUNC_5(u32 *VAR_7, int VAR_8, int VAR_9)
{
 unsigned long VAR_10, VAR_11, VAR_12;
 int VAR_13;


 VAR_10 = FUNC_0(100);
 VAR_11 = VAR_6 + VAR_10;
 VAR_13 = 0;


 FUNC_4(VAR_7, VAR_2,
       (VAR_8 << 8) | (VAR_9 << 0));


 FUNC_4(VAR_7, VAR_3,
       (1 << VAR_1));


 while (!VAR_13) {
  VAR_12 = VAR_6;
  if (FUNC_3(VAR_7, VAR_4) == 0)
   break;
  VAR_13 = FUNC_2(VAR_12, VAR_11);
 }
 if (VAR_13) {
  FUNC_1("Phy device read err: device busy");
  return -VAR_0;
 }


 FUNC_4(VAR_7, VAR_3, 0);


 return FUNC_3(VAR_7, VAR_5);
}
