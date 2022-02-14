
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_flexfile_layout {void* last_report_time; } ;
struct nfs4_ff_layoutstat {int busy_timer; } ;
struct nfs4_ff_layout_mirror {scalar_t__ report_interval; void* start_time; int layout; } ;
typedef long long s64 ;
typedef void* ktime_t ;


 long long VAR_0 ;
 struct nfs4_flexfile_layout* FUNC_0 (int ) ;
 int FUNC_1 (void*,void*) ;
 long long FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,void*) ;

__attribute__((used)) static bool
FUNC_4(struct nfs4_ff_layout_mirror *VAR_2,
       struct nfs4_ff_layoutstat *VAR_3,
       ktime_t VAR_4)
{
 s64 VAR_5 = VAR_0;
 struct nfs4_flexfile_layout *VAR_6 = FUNC_0(VAR_2->layout);

 FUNC_3(&VAR_3->busy_timer, VAR_4);
 if (!VAR_2->start_time)
  VAR_2->start_time = VAR_4;
 if (VAR_2->report_interval != 0)
  VAR_5 = (s64)VAR_2->report_interval * 1000LL;
 else if (VAR_1 != 0)
  VAR_5 = (s64)VAR_1 * 1000LL;
 if (FUNC_2(FUNC_1(VAR_4, VAR_6->last_report_time)) >=
   VAR_5) {
  VAR_6->last_report_time = VAR_4;
  return 1;
 }

 return 0;
}
