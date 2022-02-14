
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int check_func; } ;
struct pvr2_dvb_adapter {TYPE_3__ channel; int lock; int buffer_wait_data; } ;
struct pvr2_context {TYPE_2__* hdw; } ;
struct TYPE_6__ {TYPE_1__* hdw_desc; } ;
struct TYPE_5__ {int dvb_props; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct pvr2_dvb_adapter* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,struct pvr2_context*) ;
 int FUNC_5 (struct pvr2_dvb_adapter*) ;
 int FUNC_6 (struct pvr2_dvb_adapter*) ;
 int FUNC_7 (struct pvr2_dvb_adapter*) ;
 int VAR_1 ;

struct pvr2_dvb_adapter *FUNC_8(struct pvr2_context *VAR_2)
{
 int VAR_3 = 0;
 struct pvr2_dvb_adapter *VAR_4;
 if (!VAR_2->hdw->hdw_desc->dvb_props) {


  return ((void*)0);
 }
 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4) return VAR_4;
 FUNC_4(&VAR_4->channel, VAR_2);
 VAR_4->channel.check_func = VAR_1;
 FUNC_0(&VAR_4->buffer_wait_data);
 FUNC_2(&VAR_4->lock);
 VAR_3 = FUNC_6(VAR_4);
 if (VAR_3 < 0) goto fail1;
 VAR_3 = FUNC_7(VAR_4);
 if (VAR_3 < 0) goto fail2;
 return VAR_4;

fail2:
 FUNC_5(VAR_4);
fail1:
 FUNC_3(&VAR_4->channel);
 return ((void*)0);
}
