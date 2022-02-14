
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b53_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b53_device*,int ,int ,int*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct b53_device *VAR_5)
{
 unsigned int VAR_6 = 1000;
 u8 VAR_7;

 do {
  FUNC_0(VAR_5, VAR_2, VAR_3, &VAR_7);
  if (!(VAR_7 & VAR_0))
   return 0;

  if (VAR_7 & VAR_1)
   return 0;

  FUNC_1(1000, 2000);
 } while (VAR_6--);

 return -VAR_4;
}
