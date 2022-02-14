
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mxl301rf_state {int dummy; } ;
struct dtv_fe_stats {int len; TYPE_2__* stat; } ;
struct TYPE_3__ {struct dtv_fe_stats strength; } ;
struct dvb_frontend {struct mxl301rf_state* tuner_priv; TYPE_1__ dtv_property_cache; } ;
typedef int s64 ;
struct TYPE_4__ {int svalue; int scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mxl301rf_state*,int,int*) ;
 int FUNC_1 (struct mxl301rf_state*,int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2, u16 *VAR_3)
{
 struct mxl301rf_state *VAR_4;
 int VAR_5;
 u8 VAR_6, VAR_7, VAR_8, VAR_9;
 u16 VAR_10, VAR_11;
 s64 VAR_12;
 struct dtv_fe_stats *VAR_13;

 VAR_13 = &VAR_2->dtv_property_cache.strength;
 VAR_13->len = 1;
 VAR_13->stat[0].scale = VAR_1;
 *VAR_3 = 0;

 VAR_4 = VAR_2->tuner_priv;
 VAR_5 = FUNC_1(VAR_4, 0x14, 0x01);
 if (VAR_5 < 0)
  return VAR_5;
 FUNC_2(1000, 2000);

 VAR_5 = FUNC_0(VAR_4, 0x18, &VAR_6);
 if (VAR_5 == 0)
  VAR_5 = FUNC_0(VAR_4, 0x19, &VAR_7);
 if (VAR_5 == 0)
  VAR_5 = FUNC_0(VAR_4, 0xd6, &VAR_8);
 if (VAR_5 == 0)
  VAR_5 = FUNC_0(VAR_4, 0xd7, &VAR_9);
 if (VAR_5 != 0)
  return VAR_5;

 VAR_10 = (VAR_7 & 0x07) << 8 | VAR_6;
 VAR_11 = (VAR_9 & 0x0f) << 5 | (VAR_8 >> 3);
 VAR_12 = VAR_10 - VAR_11 - (113 << 3);
 VAR_12 = VAR_12 * 1000 / 8;
 VAR_13->stat[0].svalue = VAR_12;
 VAR_13->stat[0].scale = VAR_0;

 *VAR_3 = (VAR_10 - VAR_11 + (1 << 9) - 1) * 100 / ((5 << 9) - 2);
 return 0;
}
