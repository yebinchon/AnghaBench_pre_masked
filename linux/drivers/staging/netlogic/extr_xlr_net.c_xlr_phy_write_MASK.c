
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int*,int ) ;
 int FUNC_4 (int*,int ,int) ;

__attribute__((used)) static int FUNC_5(u32 *VAR_5, int VAR_6, int VAR_7, u16 VAR_8)
{
 unsigned long VAR_9, VAR_10, VAR_11;
 int VAR_12;


 VAR_9 = FUNC_0(100);
 VAR_10 = VAR_4 + VAR_9;
 VAR_12 = 0;

 FUNC_4(VAR_5, VAR_1, (VAR_6 << 8) | VAR_7);


 FUNC_4(VAR_5, VAR_3, (u32)VAR_8);


 while (!VAR_12) {
  VAR_11 = VAR_4;
  if (FUNC_3(VAR_5, VAR_2) == 0)
   break;
  VAR_12 = FUNC_2(VAR_11, VAR_10);
 }
 if (VAR_12) {
  FUNC_1("Phy device write err: device busy");
  return -VAR_0;
 }

 return 0;
}
