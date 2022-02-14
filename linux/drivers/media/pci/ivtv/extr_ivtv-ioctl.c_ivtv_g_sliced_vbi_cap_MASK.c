
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_sliced_vbi_cap {scalar_t__ type; int** service_lines; int service_set; } ;
struct ivtv {int v4l2_cap; scalar_t__ is_60hz; scalar_t__ is_50hz; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct ivtv* itv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int,int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_9, void *VAR_10, struct v4l2_sliced_vbi_cap *VAR_11)
{
 struct ivtv *VAR_12 = FUNC_0(VAR_10)->itv;
 int VAR_13 = VAR_12->is_50hz ? VAR_6 : VAR_5;
 int VAR_14, VAR_15;

 if (VAR_11->type == VAR_1) {
  for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
   for (VAR_15 = 0; VAR_15 < 24; VAR_15++) {
    if (FUNC_1(VAR_14, VAR_15, VAR_12->is_50hz))
     VAR_11->service_lines[VAR_14][VAR_15] = VAR_13;
   }
  }
 } else if (VAR_11->type == VAR_2) {
  if (!(VAR_12->v4l2_cap & VAR_3))
   return -VAR_0;
  if (VAR_12->is_60hz) {
   VAR_11->service_lines[0][21] = VAR_4;
   VAR_11->service_lines[1][21] = VAR_4;
  } else {
   VAR_11->service_lines[0][23] = VAR_8;
   VAR_11->service_lines[0][16] = VAR_7;
  }
 } else {
  return -VAR_0;
 }

 VAR_13 = 0;
 for (VAR_14 = 0; VAR_14 < 2; VAR_14++)
  for (VAR_15 = 0; VAR_15 < 24; VAR_15++)
   VAR_13 |= VAR_11->service_lines[VAR_14][VAR_15];
 VAR_11->service_set = VAR_13;
 return 0;
}
