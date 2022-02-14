
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tda18271_priv {int dummy; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;
struct TYPE_2__ {int rfmax; int limit; int target; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int,int ,int ) ;

int FUNC_1(struct dvb_frontend *VAR_1,
          u32 *VAR_2, u8 *VAR_3, u16 *VAR_4)
{
 struct tda18271_priv *VAR_5 = VAR_1->tuner_priv;
 int VAR_6 = 0;

 while ((VAR_0[VAR_6].rfmax * 1000) < *VAR_2) {
  if (VAR_0[VAR_6 + 1].rfmax == 0)
   break;
  VAR_6++;
 }
 *VAR_3 = VAR_0[VAR_6].target;
 *VAR_4 = VAR_0[VAR_6].limit;

 FUNC_0("(%d) cid_target = %02x, count_limit = %d\n", VAR_6,
  VAR_0[VAR_6].target, VAR_0[VAR_6].limit);

 return 0;
}
