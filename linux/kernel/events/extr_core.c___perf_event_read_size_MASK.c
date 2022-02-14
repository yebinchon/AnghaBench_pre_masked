
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int read_format; } ;
struct perf_event {int read_size; TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct perf_event *VAR_4, int VAR_5)
{
 int VAR_6 = sizeof(u64);
 int VAR_7 = 0;
 int VAR_8 = 1;

 if (VAR_4->attr.read_format & VAR_2)
  VAR_7 += sizeof(u64);

 if (VAR_4->attr.read_format & VAR_3)
  VAR_7 += sizeof(u64);

 if (VAR_4->attr.read_format & VAR_1)
  VAR_6 += sizeof(u64);

 if (VAR_4->attr.read_format & VAR_0) {
  VAR_8 += VAR_5;
  VAR_7 += sizeof(u64);
 }

 VAR_7 += VAR_6 * VAR_8;
 VAR_4->read_size = VAR_7;
}
