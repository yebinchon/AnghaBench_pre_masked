
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b53_device {int ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct b53_device*,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct b53_device*) ;
 scalar_t__ FUNC_4 (struct b53_device*) ;

__attribute__((used)) static void FUNC_5(struct b53_device *VAR_6, int VAR_7)
{
 u8 VAR_8;


 if ((FUNC_3(VAR_6) || FUNC_4(VAR_6)) && VAR_7 == VAR_1)
  VAR_7 = VAR_0;

 VAR_8 = VAR_3 |
      VAR_4 |
      VAR_5;
 FUNC_2(VAR_6, VAR_2, FUNC_0(VAR_7), VAR_8);

 FUNC_1(VAR_6->ds, VAR_7);
}
