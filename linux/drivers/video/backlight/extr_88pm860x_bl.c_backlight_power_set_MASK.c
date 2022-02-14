
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pm860x_chip*,int ) ;
 int FUNC_1 (struct pm860x_chip*,int ) ;

__attribute__((used)) static int FUNC_2(struct pm860x_chip *VAR_4, int VAR_5,
  int VAR_6)
{
 int VAR_7 = -VAR_0;

 switch (VAR_5) {
 case 0:
  VAR_7 = VAR_6 ? FUNC_1(VAR_4, VAR_1) :
   FUNC_0(VAR_4, VAR_1);
  break;
 case 1:
  VAR_7 = VAR_6 ? FUNC_1(VAR_4, VAR_2) :
   FUNC_0(VAR_4, VAR_2);
  break;
 case 2:
  VAR_7 = VAR_6 ? FUNC_1(VAR_4, VAR_3) :
   FUNC_0(VAR_4, VAR_3);
  break;
 }
 return VAR_7;
}
