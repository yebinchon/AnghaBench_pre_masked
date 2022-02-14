
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; scalar_t__ type; int frequency; } ;
struct radio_tea5777 {int freq; int band; scalar_t__ has_am; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct radio_tea5777*) ;
 struct radio_tea5777* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
     const struct v4l2_frequency *VAR_6)
{
 struct radio_tea5777 *VAR_7 = FUNC_1(VAR_4);

 if (VAR_6->tuner != 0 || VAR_6->type != VAR_3)
  return -VAR_2;

 if (VAR_7->has_am && VAR_6->frequency < (20000 * 16))
  VAR_7->band = VAR_0;
 else
  VAR_7->band = VAR_1;

 VAR_7->freq = VAR_6->frequency;
 return FUNC_0(VAR_7);
}
