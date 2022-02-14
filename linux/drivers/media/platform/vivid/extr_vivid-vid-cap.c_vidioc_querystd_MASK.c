
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct vivid_dev {unsigned int* query_std_last; size_t input; scalar_t__* std_signal_mode; int * query_std; int * std_cap; int tpg; } ;
struct file {int dummy; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *) ;
 struct vivid_dev* FUNC_2 (struct file*) ;
 int FUNC_3 (struct vivid_dev*) ;
 scalar_t__ FUNC_4 (struct vivid_dev*) ;
 int * VAR_7 ;

int FUNC_5(struct file *VAR_8, void *VAR_9, v4l2_std_id *VAR_10)
{
 struct vivid_dev *VAR_11 = FUNC_2(VAR_8);
 unsigned int VAR_12 = VAR_11->query_std_last[VAR_11->input];

 if (!FUNC_3(VAR_11))
  return -VAR_1;
 if (VAR_11->std_signal_mode[VAR_11->input] == VAR_3 ||
     VAR_11->std_signal_mode[VAR_11->input] == VAR_2) {
  *VAR_10 = VAR_6;
  return 0;
 }
 if (FUNC_4(VAR_11) && FUNC_1(&VAR_11->tpg) == VAR_5) {
  *VAR_10 = VAR_6;
 } else if (VAR_11->std_signal_mode[VAR_11->input] == VAR_0) {
  *VAR_10 = VAR_11->std_cap[VAR_11->input];
 } else if (VAR_11->std_signal_mode[VAR_11->input] == VAR_4) {
  *VAR_10 = VAR_11->query_std[VAR_11->input];
 } else {
  *VAR_10 = VAR_7[VAR_12];
  VAR_11->query_std_last[VAR_11->input] =
   (VAR_12 + 1) % FUNC_0(VAR_7);
 }

 return 0;
}
