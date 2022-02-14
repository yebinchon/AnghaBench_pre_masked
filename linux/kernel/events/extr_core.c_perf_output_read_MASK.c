
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_output_handle {int dummy; } ;
struct TYPE_2__ {int read_format; } ;
struct perf_event {TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_event*,int*,int*,int*) ;
 int FUNC_1 (struct perf_output_handle*,struct perf_event*,int,int) ;
 int FUNC_2 (struct perf_output_handle*,struct perf_event*,int,int) ;

__attribute__((used)) static void FUNC_3(struct perf_output_handle *VAR_2,
        struct perf_event *VAR_3)
{
 u64 VAR_4 = 0, VAR_5 = 0, VAR_6;
 u64 VAR_7 = VAR_3->attr.read_format;
 if (VAR_7 & VAR_1)
  FUNC_0(VAR_3, &VAR_6, &VAR_4, &VAR_5);

 if (VAR_3->attr.read_format & VAR_0)
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 else
  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
}
