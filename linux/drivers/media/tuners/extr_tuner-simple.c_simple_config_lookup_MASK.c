
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tuner_simple_priv {int dummy; } ;
struct tuner_params {int count; TYPE_1__* ranges; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;
struct TYPE_2__ {unsigned int limit; int cb; int config; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,...) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0,
    struct tuner_params *VAR_1,
    unsigned *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 struct tuner_simple_priv *VAR_5 = VAR_0->tuner_priv;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1->count; VAR_6++) {
  if (*VAR_2 > VAR_1->ranges[VAR_6].limit)
   continue;
  break;
 }
 if (VAR_6 == VAR_1->count) {
  FUNC_0("frequency out of range (%d > %d)\n",
     *VAR_2, VAR_1->ranges[VAR_6 - 1].limit);
  *VAR_2 = VAR_1->ranges[--VAR_6].limit;
 }
 *VAR_3 = VAR_1->ranges[VAR_6].config;
 *VAR_4 = VAR_1->ranges[VAR_6].cb;

 FUNC_0("freq = %d.%02d (%d), range = %d, config = 0x%02x, cb = 0x%02x\n",
    *VAR_2 / 16, *VAR_2 % 16 * 100 / 16, *VAR_2,
    VAR_6, *VAR_3, *VAR_4);

 return VAR_6;
}
