
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyclades_port {scalar_t__ chip_rev; int tbpr; int tco; int rbpr; int rco; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct cyclades_port *VAR_1, __u32 VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 __u32 VAR_6 = ((VAR_1->chip_rev >= VAR_0) ? 60000000 :
   25000000);

 if (VAR_2 == 0) {
  VAR_1->tbpr = VAR_1->tco = VAR_1->rbpr = VAR_1->rco = 0;
  return;
 }


 for (VAR_3 = 4, VAR_4 = 2048; VAR_3; VAR_3--, VAR_4 >>= 2) {
  if (VAR_6 / VAR_4 / VAR_2 > 63)
   break;
 }

 VAR_5 = (VAR_6 / VAR_4 * 2 / VAR_2 + 1) / 2;
 if (VAR_5 > 255)
  VAR_5 = 255;

 VAR_1->tbpr = VAR_1->rbpr = VAR_5;
 VAR_1->tco = VAR_1->rco = VAR_3;
}
