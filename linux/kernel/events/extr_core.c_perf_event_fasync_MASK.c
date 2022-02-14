
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {struct fasync_struct* fasync; struct perf_event* parent; } ;
struct fasync_struct {int dummy; } ;



__attribute__((used)) static inline struct fasync_struct **FUNC_0(struct perf_event *VAR_0)
{

 if (VAR_0->parent)
  VAR_0 = VAR_0->parent;
 return &VAR_0->fasync;
}
