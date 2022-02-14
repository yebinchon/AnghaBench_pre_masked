
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct b53_device*,int ,int ,int*) ;
 int FUNC_1 (struct b53_device*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct b53_device *VAR_8, int VAR_9)
{
 u8 VAR_10;

 FUNC_0(VAR_8, VAR_0, VAR_5, &VAR_10);

 if (VAR_9)
  VAR_10 |= VAR_7;
 else
  VAR_10 &= ~VAR_7;

 FUNC_1(VAR_8, VAR_0, VAR_5, VAR_10);



 FUNC_0(VAR_8, VAR_0, VAR_4, &VAR_10);
 VAR_10 |= VAR_3;
 FUNC_1(VAR_8, VAR_0, VAR_4, VAR_10);




 FUNC_0(VAR_8, VAR_0, VAR_1, &VAR_10);
 VAR_10 |= VAR_6 | VAR_2;
 FUNC_1(VAR_8, VAR_0, VAR_1, VAR_10);
}
