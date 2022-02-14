
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int half_step; int lpf_freq; } ;
struct qm1d1b0004_state {int i2c; TYPE_2__ cfg; } ;
struct TYPE_3__ {int frequency; int symbol_rate; } ;
struct dvb_frontend {TYPE_1__ dtv_property_cache; struct qm1d1b0004_state* tuner_priv; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_4)
{
 struct qm1d1b0004_state *VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 u16 VAR_9;
 u8 VAR_10[4], VAR_11, VAR_12;
 int VAR_13;

 VAR_5 = VAR_4->tuner_priv;
 VAR_6 = VAR_4->dtv_property_cache.frequency;

 VAR_7 = VAR_3 / 4;
 if (VAR_5->cfg.half_step)
  VAR_7 /= 2;
 VAR_9 = FUNC_0(VAR_6, VAR_7);
 VAR_11 = FUNC_4(VAR_6);
 if (VAR_11 & VAR_2)
  VAR_9 = (VAR_9 << 1 & ~0x1f) | (VAR_9 & 0x0f);


 VAR_10[0] = 0x40 | VAR_9 >> 8;
 VAR_10[1] = VAR_9;

 VAR_10[2] = 0xe0 | VAR_5->cfg.half_step;
 VAR_10[3] = VAR_11;
 VAR_13 = FUNC_3(VAR_5->i2c, VAR_10, 4);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_10[0] = 0xe4 | VAR_5->cfg.half_step;
 VAR_13 = FUNC_3(VAR_5->i2c, VAR_10, 1);
 if (VAR_13 < 0)
  return VAR_13;
 FUNC_5(20);


 VAR_8 = VAR_5->cfg.lpf_freq;
 if (VAR_8 == VAR_0)
  VAR_8 = VAR_4->dtv_property_cache.symbol_rate / 1000;
 if (VAR_8 == 0)
  VAR_8 = VAR_1;
 VAR_12 = FUNC_1(VAR_8, 2000) - 2;
 VAR_10[0] = 0xe4 | ((VAR_12 & 0x0c) << 1) | VAR_5->cfg.half_step;
 VAR_10[1] = VAR_11 | ((VAR_12 & 0x03) << 2);
 VAR_13 = FUNC_3(VAR_5->i2c, VAR_10, 2);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_10[0] = 0;
 VAR_13 = FUNC_2(VAR_5->i2c, VAR_10, 1);
 if (VAR_13 < 0)
  return VAR_13;
 return 0;
}
