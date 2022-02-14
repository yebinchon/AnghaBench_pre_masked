
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ freq; } ;
struct hw_perf_event {scalar_t__ interrupts_seq; int interrupts; scalar_t__ freq_time_stamp; int last_period; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct perf_event*,int,int ,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct perf_event*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct perf_event *VAR_6, int VAR_7)
{
 struct hw_perf_event *VAR_8 = &VAR_6->hw;
 int VAR_9 = 0;
 u64 VAR_10;

 VAR_10 = FUNC_1(VAR_5);
 if (VAR_10 != VAR_8->interrupts_seq) {
  VAR_8->interrupts_seq = VAR_10;
  VAR_8->interrupts = 1;
 } else {
  VAR_8->interrupts++;
  if (FUNC_7(VAR_7
        && VAR_8->interrupts >= VAR_3)) {
   FUNC_0(VAR_4);
   FUNC_6(FUNC_5(), VAR_1);
   VAR_8->interrupts = VAR_0;
   FUNC_4(VAR_6, 0);
   VAR_9 = 1;
  }
 }

 if (VAR_6->attr.freq) {
  u64 VAR_11 = FUNC_3();
  s64 VAR_12 = VAR_11 - VAR_8->freq_time_stamp;

  VAR_8->freq_time_stamp = VAR_11;

  if (VAR_12 > 0 && VAR_12 < 2*VAR_2)
   FUNC_2(VAR_6, VAR_12, VAR_8->last_period, 1);
 }

 return VAR_9;
}
