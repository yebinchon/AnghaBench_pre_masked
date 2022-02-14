
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ timestamp; } ;
struct TYPE_3__ {int sequence; TYPE_2__ vb2_buf; } ;
struct hva_stream {TYPE_1__ vbuf; } ;
struct hva_ctx_dbg {int is_valid_period; int window_stream_size; int total_stream_size; int cnt_duration; int total_duration; int max_duration; int min_duration; int begin; } ;
struct hva_ctx {int name; struct hva_ctx_dbg dbg; } ;
struct device {int dummy; } ;
typedef int ktime_t ;


 struct device* FUNC_0 (struct hva_ctx*) ;
 int FUNC_1 (struct device*,char*,int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ) ;

void FUNC_8(struct hva_ctx *VAR_0, struct hva_stream *VAR_1)
{
 struct device *VAR_2 = FUNC_0(VAR_0);
 u64 VAR_3;
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 struct hva_ctx_dbg *VAR_7 = &VAR_0->dbg;
 ktime_t VAR_8 = FUNC_3();


 VAR_5 = FUNC_7(&VAR_1->vbuf.vb2_buf, 0);
 VAR_3 = VAR_1->vbuf.vb2_buf.timestamp;
 FUNC_2(VAR_3, 1000);
 VAR_6 = (u32)VAR_3;


 VAR_3 = (u64)FUNC_4(VAR_8, VAR_7->begin);

 FUNC_1(VAR_2,
  "%s perf stream[%d] dts=%d encoded using %d bytes in %d us",
  VAR_0->name,
  VAR_1->vbuf.sequence,
  VAR_6,
  VAR_5, (u32)VAR_3);

 FUNC_2(VAR_3, 100);
 VAR_4 = (u32)VAR_3;

 VAR_7->min_duration = FUNC_6(VAR_4, VAR_7->min_duration);
 VAR_7->max_duration = FUNC_5(VAR_4, VAR_7->max_duration);
 VAR_7->total_duration += VAR_4;
 VAR_7->cnt_duration++;





 VAR_7->total_stream_size += VAR_5;
 VAR_7->window_stream_size += VAR_5;

 VAR_7->is_valid_period = 1;
}
