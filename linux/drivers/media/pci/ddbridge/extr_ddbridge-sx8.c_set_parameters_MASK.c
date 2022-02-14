
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int status; } ;
struct sx8 {int started; int first_time_lock; TYPE_1__ signal_info; } ;
struct dtv_frontend_properties {int stream_id; int modulation; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct sx8* demodulator_priv; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dvb_frontend*,int,int,int) ;
 int FUNC_1 (struct dvb_frontend*,int ,int,int) ;
 int FUNC_2 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_5)
{
 int VAR_6 = 0;
 struct sx8 *VAR_7 = VAR_5->demodulator_priv;
 struct dtv_frontend_properties *VAR_8 = &VAR_5->dtv_property_cache;
 u32 VAR_9 = VAR_3, VAR_10 = 0, VAR_11;

 if (VAR_7->started)
  FUNC_2(VAR_5);

 VAR_11 = VAR_8->stream_id;
 if (VAR_11 != VAR_0)
  VAR_10 = (VAR_11 & 0x30000000) >> 28;

 if (VAR_10)
  VAR_9 = (VAR_4 | VAR_2);
 if (VAR_10 < 3) {
  u32 VAR_12;

  switch (VAR_8->modulation) {
  case 128:
   VAR_12 = 0x0f;
   break;
  case 129:
   VAR_12 = 0x07;
   break;
  default:
   VAR_12 = 0x03;
   break;
  }
  VAR_6 = FUNC_0(VAR_5, 3, VAR_12, VAR_9);
 } else {
  VAR_6 = FUNC_1(VAR_5, 0, 4, VAR_9);
 }
 if (!VAR_6) {
  VAR_7->started = 1;
  VAR_7->first_time_lock = 1;
  VAR_7->signal_info.status = VAR_1;
 }

 return VAR_6;
}
