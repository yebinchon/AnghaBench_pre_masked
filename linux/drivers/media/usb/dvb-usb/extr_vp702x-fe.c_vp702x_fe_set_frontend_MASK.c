
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct vp702x_fe_state {scalar_t__ voltage; int status_check_interval; TYPE_1__* d; int next_status_check; } ;
struct vp702x_device_state {int* buf; int buf_mutex; } ;
struct dtv_frontend_properties {int frequency; int symbol_rate; } ;
struct dvb_frontend {struct vp702x_fe_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_2__ {struct vp702x_device_state* priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int*,int,int*,int,int) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_2)
{
 struct dtv_frontend_properties *VAR_3 = &VAR_2->dtv_property_cache;
 struct vp702x_fe_state *VAR_4 = VAR_2->demodulator_priv;
 struct vp702x_device_state *VAR_5 = VAR_4->d->priv;
 u32 VAR_6 = VAR_3->frequency/1000;


 u64 VAR_7;
 u8 *VAR_8;

 FUNC_3(&VAR_5->buf_mutex);

 VAR_8 = VAR_5->buf;
 FUNC_2(VAR_8, 0, 10);

 VAR_8[0] = (VAR_6 >> 8) & 0x7f;
 VAR_8[1] = VAR_6 & 0xff;
 VAR_8[2] = 1;

 VAR_7 = (u64) (VAR_3->symbol_rate/1000) << 20;
 FUNC_1(VAR_7,88000);
 VAR_8[3] = (VAR_7 >> 12) & 0xff;
 VAR_8[4] = (VAR_7 >> 4) & 0xff;
 VAR_8[5] = (VAR_7 << 4) & 0xf0;

 FUNC_0("setting frontend to: %u -> %u (%x) LNB-based GHz, symbolrate: %d -> %lu (%lx)\n",
   VAR_3->frequency, VAR_6, VAR_6, VAR_3->symbol_rate,
   (unsigned long) VAR_7, (unsigned long) VAR_7);




 if (VAR_4->voltage == VAR_0)
  VAR_8[6] |= 0x40;
 VAR_8[7] = FUNC_5(VAR_8,0,7);

 VAR_4->status_check_interval = 250;
 VAR_4->next_status_check = VAR_1;

 FUNC_6(VAR_4->d, VAR_8, 8, VAR_8, 10, 100);

 if (VAR_8[2] == 0 && VAR_8[3] == 0)
  FUNC_0("tuning failed.\n");
 else
  FUNC_0("tuning succeeded.\n");

 FUNC_4(&VAR_5->buf_mutex);

 return 0;
}
