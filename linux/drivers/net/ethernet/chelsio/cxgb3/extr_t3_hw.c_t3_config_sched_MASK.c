
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cclk; } ;
struct TYPE_4__ {TYPE_1__ vpd; } ;
struct adapter {TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,int ,unsigned int) ;

int FUNC_2(struct adapter *VAR_4, unsigned int VAR_5, int VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12 = ~0;
 unsigned int VAR_13 = VAR_4->params.vpd.cclk * 1000;
 unsigned int VAR_14 = 0, VAR_15 = 0;

 if (VAR_5 > 0) {
  VAR_5 *= 125;
  for (VAR_9 = 1; VAR_9 <= 255; VAR_9++) {
   VAR_8 = VAR_13 / VAR_9;
   VAR_10 = (VAR_5 + VAR_8 / 2) / VAR_8;
   if (VAR_10 > 0 && VAR_10 <= 255) {
    VAR_7 = VAR_10 * VAR_8;
    VAR_11 = VAR_7 >= VAR_5 ? VAR_7 - VAR_5 : VAR_5 - VAR_7;
    if (VAR_11 <= VAR_12) {
     VAR_12 = VAR_11;
     VAR_14 = VAR_9;
     VAR_15 = VAR_10;
    }
   } else if (VAR_14)
    break;
  }
  if (!VAR_14)
   return -VAR_3;
 }
 FUNC_1(VAR_4, VAR_0,
       VAR_2 - VAR_6 / 2);
 VAR_7 = FUNC_0(VAR_4, VAR_1);
 if (VAR_6 & 1)
  VAR_7 = (VAR_7 & 0xffff) | (VAR_14 << 16) | (VAR_15 << 24);
 else
  VAR_7 = (VAR_7 & 0xffff0000) | VAR_14 | (VAR_15 << 8);
 FUNC_1(VAR_4, VAR_1, VAR_7);
 return 0;
}
