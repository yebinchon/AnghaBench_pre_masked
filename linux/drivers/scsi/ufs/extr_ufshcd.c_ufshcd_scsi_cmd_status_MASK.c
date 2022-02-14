
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufshcd_lrb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (struct ufshcd_lrb*) ;

__attribute__((used)) static inline int
FUNC_1(struct ufshcd_lrb *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_4) {
 case 131:
  FUNC_0(VAR_3);

 case 130:
  VAR_5 |= VAR_2 << 16 |
     VAR_0 << 8 |
     VAR_4;
  break;
 case 128:
 case 132:
 case 129:
  FUNC_0(VAR_3);
  VAR_5 |= VAR_4;
  break;
 default:
  VAR_5 |= VAR_1 << 16;
  break;
 }

 return VAR_5;
}
