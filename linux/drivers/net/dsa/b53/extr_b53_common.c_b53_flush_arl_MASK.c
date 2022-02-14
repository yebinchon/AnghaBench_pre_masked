
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
 int FUNC_1 (struct b53_device*,int ,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct b53_device *VAR_5, u8 VAR_6)
{
 unsigned int VAR_7;

 FUNC_1(VAR_5, VAR_0, VAR_1,
     VAR_3 | VAR_4 | VAR_6);

 for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
  u8 VAR_8;

  FUNC_0(VAR_5, VAR_0, VAR_1,
     &VAR_8);

  if (!(VAR_8 & VAR_3))
   goto out;

  FUNC_2(1);
 }

 return -VAR_2;
out:

 FUNC_1(VAR_5, VAR_0, VAR_1, VAR_4);
 return 0;
}
