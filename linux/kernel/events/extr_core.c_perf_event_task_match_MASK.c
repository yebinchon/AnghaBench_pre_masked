
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ task; scalar_t__ mmap_data; scalar_t__ mmap2; scalar_t__ mmap; scalar_t__ comm; } ;
struct perf_event {TYPE_1__ attr; } ;



__attribute__((used)) static int FUNC_0(struct perf_event *VAR_0)
{
 return VAR_0->attr.comm || VAR_0->attr.mmap ||
        VAR_0->attr.mmap2 || VAR_0->attr.mmap_data ||
        VAR_0->attr.task;
}
