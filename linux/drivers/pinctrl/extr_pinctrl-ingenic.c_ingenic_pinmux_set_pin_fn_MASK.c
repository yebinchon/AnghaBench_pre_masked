
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingenic_pinctrl {scalar_t__ version; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,char,unsigned int,int) ;
 int FUNC_1 (struct ingenic_pinctrl*,int,int ,int) ;
 int FUNC_2 (struct ingenic_pinctrl*,int,int ,int) ;
 int FUNC_3 (struct ingenic_pinctrl*,int) ;

__attribute__((used)) static int FUNC_4(struct ingenic_pinctrl *VAR_10,
  int VAR_11, int VAR_12)
{
 unsigned int VAR_13 = VAR_11 % VAR_9;
 unsigned int VAR_14 = VAR_11 / VAR_9;

 FUNC_0(VAR_10->dev, "set pin P%c%u to function %u\n",
   'A' + VAR_14, VAR_13, VAR_12);

 if (VAR_10->version >= VAR_2) {
  FUNC_2(VAR_10, VAR_11, VAR_6, 0);
  FUNC_2(VAR_10, VAR_11, VAR_0, 0);
  FUNC_2(VAR_10, VAR_11, VAR_8, VAR_12 & 0x2);
  FUNC_2(VAR_10, VAR_11, VAR_7, VAR_12 & 0x1);
  FUNC_3(VAR_10, VAR_11);
 } else if (VAR_10->version >= VAR_1) {
  FUNC_1(VAR_10, VAR_11, VAR_6, 0);
  FUNC_1(VAR_10, VAR_11, VAR_0, 0);
  FUNC_1(VAR_10, VAR_11, VAR_8, VAR_12 & 0x2);
  FUNC_1(VAR_10, VAR_11, VAR_7, VAR_12 & 0x1);
 } else {
  FUNC_1(VAR_10, VAR_11, VAR_3, 1);
  FUNC_1(VAR_10, VAR_11, VAR_5, VAR_12 & 0x2);
  FUNC_1(VAR_10, VAR_11, VAR_4, VAR_12 > 0);
 }

 return 0;
}
