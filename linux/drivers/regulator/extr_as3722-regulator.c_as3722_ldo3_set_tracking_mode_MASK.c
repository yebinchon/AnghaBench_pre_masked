
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct as3722_regulators {struct as3722* as3722; } ;
struct as3722 {int dummy; } ;
struct TYPE_2__ {int vsel_reg; } ;


 int VAR_0 ;




 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct as3722*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct as3722_regulators *VAR_3,
  int VAR_4, u8 VAR_5)
{
 struct as3722 *VAR_6 = VAR_3->as3722;

 switch (VAR_5) {
 case 130:
 case 129:
 case 131:
 case 128:
  return FUNC_0(VAR_6,
   VAR_2[VAR_4].vsel_reg,
   VAR_0, VAR_5);

 default:
  return -VAR_1;
 }
}
