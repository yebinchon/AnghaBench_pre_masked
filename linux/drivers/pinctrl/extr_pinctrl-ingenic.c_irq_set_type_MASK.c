
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ingenic_gpio_chip {TYPE_1__* jzpc; } ;
struct TYPE_2__ {scalar_t__ version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ingenic_gpio_chip*,int ,int ,int) ;
 int FUNC_1 (struct ingenic_gpio_chip*,int ,int ,int) ;
 int FUNC_2 (struct ingenic_gpio_chip*) ;

__attribute__((used)) static void FUNC_3(struct ingenic_gpio_chip *VAR_6,
  u8 VAR_7, unsigned int VAR_8)
{
 u8 VAR_9, VAR_10;

 if (VAR_6->jzpc->version >= VAR_0) {
  VAR_9 = VAR_5;
  VAR_10 = VAR_4;
 } else {
  VAR_9 = VAR_3;
  VAR_10 = VAR_2;
 }

 switch (VAR_8) {
 case 130:
  if (VAR_6->jzpc->version >= VAR_1) {
   FUNC_1(VAR_6, VAR_10, VAR_7, 1);
   FUNC_1(VAR_6, VAR_9, VAR_7, 1);
   FUNC_2(VAR_6);
  } else {
   FUNC_0(VAR_6, VAR_10, VAR_7, 1);
   FUNC_0(VAR_6, VAR_9, VAR_7, 1);
  }
  break;
 case 131:
  if (VAR_6->jzpc->version >= VAR_1) {
   FUNC_1(VAR_6, VAR_10, VAR_7, 0);
   FUNC_1(VAR_6, VAR_9, VAR_7, 1);
   FUNC_2(VAR_6);
  } else {
   FUNC_0(VAR_6, VAR_10, VAR_7, 0);
   FUNC_0(VAR_6, VAR_9, VAR_7, 1);
  }
  break;
 case 129:
  if (VAR_6->jzpc->version >= VAR_1) {
   FUNC_1(VAR_6, VAR_10, VAR_7, 1);
   FUNC_1(VAR_6, VAR_9, VAR_7, 0);
   FUNC_2(VAR_6);
  } else {
   FUNC_0(VAR_6, VAR_10, VAR_7, 1);
   FUNC_0(VAR_6, VAR_9, VAR_7, 0);
  }
  break;
 case 128:
 default:
  if (VAR_6->jzpc->version >= VAR_1) {
   FUNC_1(VAR_6, VAR_10, VAR_7, 0);
   FUNC_1(VAR_6, VAR_9, VAR_7, 0);
   FUNC_2(VAR_6);
  } else {
   FUNC_0(VAR_6, VAR_10, VAR_7, 0);
   FUNC_0(VAR_6, VAR_9, VAR_7, 0);
  }
  break;
 }
}
