
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef void* u64 ;
typedef int u32 ;
struct lme2510_state {int tuner_config; int signal_level; int signal_sn; scalar_t__ i2c_talk_onoff; } ;
struct dvb_usb_adapter {struct dvb_frontend** fe; } ;
struct TYPE_15__ {int len; TYPE_11__* stat; } ;
struct TYPE_13__ {int len; TYPE_9__* stat; } ;
struct TYPE_23__ {int len; TYPE_7__* stat; } ;
struct TYPE_21__ {int len; TYPE_5__* stat; } ;
struct TYPE_19__ {int len; TYPE_3__* stat; } ;
struct TYPE_17__ {int len; TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_12__ cnr; TYPE_10__ strength; TYPE_8__ post_bit_error; TYPE_6__ post_bit_count; TYPE_4__ block_error; TYPE_2__ block_count; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_24__ {void* uvalue; void* scale; } ;
struct TYPE_22__ {void* scale; } ;
struct TYPE_20__ {void* scale; } ;
struct TYPE_18__ {void* scale; } ;
struct TYPE_16__ {void* scale; } ;
struct TYPE_14__ {void* uvalue; void* scale; } ;


 void* VAR_0 ;
 void* VAR_1 ;




 struct lme2510_state* FUNC_0 (struct dvb_usb_adapter*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct dvb_usb_adapter *VAR_2)
{
 struct lme2510_state *VAR_3 = FUNC_0(VAR_2);
 struct dvb_frontend *VAR_4 = VAR_2->fe[0];
 struct dtv_frontend_properties *VAR_5;
 u32 VAR_6 = 0, VAR_7 = 0;

 if (!VAR_4)
  return;

 VAR_5 = &VAR_4->dtv_property_cache;

 VAR_5->block_count.len = 1;
 VAR_5->block_count.stat[0].scale = VAR_0;
 VAR_5->block_error.len = 1;
 VAR_5->block_error.stat[0].scale = VAR_0;
 VAR_5->post_bit_count.len = 1;
 VAR_5->post_bit_count.stat[0].scale = VAR_0;
 VAR_5->post_bit_error.len = 1;
 VAR_5->post_bit_error.stat[0].scale = VAR_0;

 if (VAR_3->i2c_talk_onoff) {
  VAR_5->strength.len = 1;
  VAR_5->strength.stat[0].scale = VAR_0;
  VAR_5->cnr.len = 1;
  VAR_5->cnr.stat[0].scale = VAR_0;
  return;
 }

 switch (VAR_3->tuner_config) {
 case 131:
  VAR_6 = FUNC_1(0xff - VAR_3->signal_level);
  VAR_7 = FUNC_1(0xff - VAR_3->signal_sn);
  break;
 case 128:
 case 129:
  VAR_6 = 0xffff - (((VAR_3->signal_level * 2) << 8) * 5 / 4);
  VAR_7 = FUNC_1((0xff - VAR_3->signal_sn - 0xa1) * 3);
  break;
 case 130:
  VAR_6 = FUNC_1(VAR_3->signal_level);
  VAR_7 = FUNC_1(VAR_3->signal_sn);
 }

 VAR_5->strength.len = 1;
 VAR_5->strength.stat[0].scale = VAR_1;
 VAR_5->strength.stat[0].uvalue = (u64)VAR_6;

 VAR_5->cnr.len = 1;
 VAR_5->cnr.stat[0].scale = VAR_1;
 VAR_5->cnr.stat[0].uvalue = (u64)VAR_7;
}
