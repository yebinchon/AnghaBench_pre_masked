
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency_band {scalar_t__ tuner; size_t index; } ;
struct radio_tea5777 {int has_am; } ;
struct file {int dummy; } ;


 size_t FUNC_0 (struct v4l2_frequency_band*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 struct v4l2_frequency_band* VAR_2 ;
 struct radio_tea5777* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
      struct v4l2_frequency_band *VAR_5)
{
 struct radio_tea5777 *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5->tuner != 0 || VAR_5->index >= FUNC_0(VAR_2) ||
     (!VAR_6->has_am && VAR_5->index == VAR_0))
  return -VAR_1;

 *VAR_5 = VAR_2[VAR_5->index];
 return 0;
}
