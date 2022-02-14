
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct radar_detector_specs {scalar_t__ width_min; scalar_t__ width_max; scalar_t__ max_pri_tolerance; scalar_t__ chirp; } ;
struct pulse_event {scalar_t__ ts; scalar_t__ width; scalar_t__ chirp; } ;
struct pri_sequence {int dummy; } ;
struct pri_detector {scalar_t__ last_ts; struct radar_detector_specs* rs; } ;


 int FUNC_0 (struct pri_detector*,scalar_t__) ;
 int FUNC_1 (struct pri_detector*,scalar_t__) ;
 struct pri_sequence* FUNC_2 (struct pri_detector*) ;
 int FUNC_3 (struct pri_detector*,scalar_t__,int ) ;
 int FUNC_4 (struct pri_detector*,scalar_t__) ;

__attribute__((used)) static struct pri_sequence *FUNC_5(struct pri_detector *VAR_0,
         struct pulse_event *VAR_1)
{
 u32 VAR_2;
 struct pri_sequence *VAR_3;
 u64 VAR_4 = VAR_1->ts;
 const struct radar_detector_specs *VAR_5 = VAR_0->rs;


 if ((VAR_5->width_min > VAR_1->width) || (VAR_5->width_max < VAR_1->width))
  return ((void*)0);

 if ((VAR_4 - VAR_0->last_ts) < VAR_5->max_pri_tolerance)

  return ((void*)0);

 if (VAR_5->chirp && VAR_5->chirp != VAR_1->chirp)
  return ((void*)0);

 VAR_0->last_ts = VAR_4;

 VAR_2 = FUNC_1(VAR_0, VAR_4);

 if (!FUNC_3(VAR_0, VAR_4, VAR_2)) {
  FUNC_0(VAR_0, VAR_4);
  return ((void*)0);
 }

 VAR_3 = FUNC_2(VAR_0);

 if (VAR_3 == ((void*)0))
  FUNC_4(VAR_0, VAR_4);

 return VAR_3;
}
