
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radar_detector_specs {int pri_max; int ppb; int num_pri; } ;
struct pri_detector {int window_size; int max_count; struct radar_detector_specs const* rs; int pulses; int sequences; int reset; int add_pulse; int exit; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct pri_detector* FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

struct pri_detector *FUNC_3(const struct radar_detector_specs *VAR_4)
{
 struct pri_detector *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 VAR_5->exit = VAR_2;
 VAR_5->add_pulse = VAR_1;
 VAR_5->reset = VAR_3;

 FUNC_0(&VAR_5->sequences);
 FUNC_0(&VAR_5->pulses);
 VAR_5->window_size = VAR_4->pri_max * VAR_4->ppb * VAR_4->num_pri;
 VAR_5->max_count = VAR_4->ppb * 2;
 VAR_5->rs = VAR_4;

 FUNC_2();
 return VAR_5;
}
