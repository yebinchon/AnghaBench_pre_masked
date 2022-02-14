
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {scalar_t__ rhp; TYPE_2__* pdi; TYPE_4__ channel; } ;
struct pvr2_stream {int dummy; } ;
struct pvr2_hdw {int dummy; } ;
typedef int pvr2_stream_callback ;
struct TYPE_8__ {struct pvr2_stream* stream; } ;
struct TYPE_7__ {int config; TYPE_3__* stream; } ;
struct TYPE_6__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct pvr2_hdw*,int ) ;
 int FUNC_3 (struct pvr2_hdw*,int) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (struct pvr2_stream*,int ,struct pvr2_v4l2_fh*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_6(struct pvr2_v4l2_fh *VAR_3)
{
 int VAR_4;
 struct pvr2_stream *VAR_5;
 struct pvr2_hdw *VAR_6;
 if (VAR_3->rhp) return 0;

 if (!VAR_3->pdi->stream) {


  return -VAR_1;
 }



 if ((VAR_4 = FUNC_0(&VAR_3->channel,
          VAR_3->pdi->stream)) != 0) {

  return VAR_4;
 }

 VAR_3->rhp = FUNC_1(VAR_3->pdi->stream);
 if (!VAR_3->rhp) {
  FUNC_0(&VAR_3->channel,((void*)0));
  return -VAR_0;
 }

 VAR_6 = VAR_3->channel.mc_head->hdw;
 VAR_5 = VAR_3->pdi->stream->stream;
 FUNC_5(VAR_5,(pvr2_stream_callback)VAR_2,VAR_3);
 FUNC_2(VAR_6,VAR_3->pdi->config);
 if ((VAR_4 = FUNC_3(VAR_6,!0)) < 0) return VAR_4;
 return FUNC_4(VAR_3->rhp,!0);
}
