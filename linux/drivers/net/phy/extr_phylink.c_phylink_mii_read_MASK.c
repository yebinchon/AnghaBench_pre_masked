
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phylink_link_state {int dummy; } ;
struct phylink {int link_an_mode; } ;


 int VAR_0 ;



 int FUNC_0 (struct phylink*,struct phylink_link_state*) ;
 int FUNC_1 (struct phylink*,struct phylink_link_state*) ;
 int FUNC_2 (unsigned int,struct phylink_link_state*) ;

__attribute__((used)) static int FUNC_3(struct phylink *VAR_1, unsigned int VAR_2,
       unsigned int VAR_3)
{
 struct phylink_link_state VAR_4;
 int VAR_5 = 0xffff;

 switch (VAR_1->link_an_mode) {
 case 130:
  if (VAR_2 == 0) {
   FUNC_0(VAR_1, &VAR_4);
   VAR_5 = FUNC_2(VAR_3, &VAR_4);
  }
  break;

 case 128:
  return -VAR_0;

 case 129:
  if (VAR_2 == 0) {
   VAR_5 = FUNC_1(VAR_1, &VAR_4);
   if (VAR_5 < 0)
    return VAR_5;

   VAR_5 = FUNC_2(VAR_3, &VAR_4);
  }
  break;
 }

 return VAR_5 & 0xffff;
}
