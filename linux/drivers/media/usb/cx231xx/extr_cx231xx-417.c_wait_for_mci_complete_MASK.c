
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct cx231xx*,int,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct cx231xx *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3 = 0;
 u8 VAR_4 = 0;
 FUNC_1(VAR_1, VAR_3, &VAR_2);

 while (!(VAR_2&0x020000)) {
  FUNC_2(10);

  FUNC_1(VAR_1, VAR_3, &VAR_2);

  if (VAR_4++ > 100) {
   FUNC_0(3, "ERROR: Timeout - gpio=%x\n", VAR_2);
   return -VAR_0;
  }
 }
 return 0;
}
