
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int xtal_freq; scalar_t__ lpf; int normal_srch_wait; int fast_srch_wait; int lpf_wait; } ;
struct qm1d1c0042_state {int* regs; TYPE_2__ cfg; } ;
struct TYPE_3__ {int frequency; } ;
struct dvb_frontend {TYPE_1__ dtv_property_cache; struct qm1d1c0042_state* tuner_priv; } ;
typedef int s64 ;
typedef scalar_t__ s32 ;


 int** VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qm1d1c0042_state*,int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1)
{
 struct qm1d1c0042_state *VAR_2;
 u32 VAR_3;
 int VAR_4, VAR_5;
 u8 VAR_6, VAR_7;
 u32 VAR_8, VAR_9;
 s32 VAR_10;

 VAR_2 = VAR_1->tuner_priv;
 VAR_3 = VAR_1->dtv_property_cache.frequency;

 VAR_2->regs[0x08] &= 0xf0;
 VAR_2->regs[0x08] |= 0x09;

 VAR_2->regs[0x13] &= 0x9f;
 VAR_2->regs[0x13] |= 0x20;


 VAR_6 = VAR_2->regs[0x02] & 0x0f;
 for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
  if (VAR_3 < VAR_0[VAR_4][0] && VAR_3 >= VAR_0[VAR_4 + 1][0]) {
   VAR_6 |= VAR_0[VAR_4][1] << 7;
   VAR_6 |= VAR_0[VAR_4][2] << 4;
   break;
  }
 VAR_5 = FUNC_2(VAR_2, 0x02, VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_8 = (VAR_3 + VAR_2->cfg.xtal_freq / 2) / VAR_2->cfg.xtal_freq;

 VAR_2->regs[0x06] &= 0x40;
 VAR_2->regs[0x06] |= (VAR_8 - 12) / 4;
 VAR_5 = FUNC_2(VAR_2, 0x06, VAR_2->regs[0x06]);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_2->regs[0x07] &= 0xf0;
 VAR_2->regs[0x07] |= (VAR_8 - 4 * ((VAR_8 - 12) / 4 + 1) - 5) & 0x0f;
 VAR_5 = FUNC_2(VAR_2, 0x07, VAR_2->regs[0x07]);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_6 = VAR_2->regs[0x08];
 if (VAR_2->cfg.lpf) {

  VAR_6 &= 0xf0;
  VAR_6 |= 0x02;
 }
 VAR_5 = FUNC_2(VAR_2, 0x08, VAR_6);
 if (VAR_5 < 0)
  return VAR_5;






 VAR_10 = (s32)FUNC_0(((s64) VAR_3) << 20, VAR_2->cfg.xtal_freq)
      - (((s64) VAR_8) << 20);

 if (VAR_10 >= 0)
  VAR_9 = VAR_10;
 else
  VAR_9 = (1 << 22) + VAR_10;

 VAR_2->regs[0x09] &= 0xc0;
 VAR_2->regs[0x09] |= (VAR_9 >> 16) & 0x3f;
 VAR_2->regs[0x0a] = (VAR_9 >> 8) & 0xff;
 VAR_2->regs[0x0b] = VAR_9 & 0xff;
 VAR_5 = FUNC_2(VAR_2, 0x09, VAR_2->regs[0x09]);
 if (VAR_5 == 0)
  VAR_5 = FUNC_2(VAR_2, 0x0a, VAR_2->regs[0x0a]);
 if (VAR_5 == 0)
  VAR_5 = FUNC_2(VAR_2, 0x0b, VAR_2->regs[0x0b]);
 if (VAR_5 != 0)
  return VAR_5;

 if (!VAR_2->cfg.lpf) {

  VAR_5 = FUNC_2(VAR_2, 0x13, VAR_2->regs[0x13]);
  if (VAR_5 < 0)
   return VAR_5;
 }


 VAR_7 = VAR_2->cfg.lpf ? 0x3f : 0x7f;
 VAR_6 = VAR_2->regs[0x0c] & VAR_7;
 VAR_5 = FUNC_2(VAR_2, 0x0c, VAR_6);
 if (VAR_5 < 0)
  return VAR_5;
 FUNC_3(2000, 3000);
 VAR_6 = VAR_2->regs[0x0c] | ~VAR_7;
 VAR_5 = FUNC_2(VAR_2, 0x0c, VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_2->cfg.lpf)
  FUNC_1(VAR_2->cfg.lpf_wait);
 else if (VAR_2->regs[0x03] & 0x01)
  FUNC_1(VAR_2->cfg.fast_srch_wait);
 else
  FUNC_1(VAR_2->cfg.normal_srch_wait);

 if (VAR_2->cfg.lpf) {

  VAR_5 = FUNC_2(VAR_2, 0x08, 0x09);
  if (VAR_5 < 0)
   return VAR_5;


  VAR_5 = FUNC_2(VAR_2, 0x13, VAR_2->regs[0x13]);
  if (VAR_5 < 0)
   return VAR_5;
 }
 return 0;
}
