
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct v4l2_frequency {scalar_t__ tuner; int frequency; } const v4l2_frequency ;
struct TYPE_2__ {scalar_t__ tuner_type; } ;
struct cx88_core {int freq; TYPE_1__ board; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cx88_core*,int ,int ,struct v4l2_frequency const*) ;
 int FUNC_1 (struct cx88_core*) ;
 int FUNC_2 (struct cx88_core*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

int FUNC_5(struct cx88_core *VAR_5,
    const struct v4l2_frequency *VAR_6)
{
 struct v4l2_frequency VAR_7 = *VAR_6;

 if (FUNC_3(VAR_5->board.tuner_type == VAR_1))
  return -VAR_0;
 if (FUNC_3(VAR_6->tuner != 0))
  return -VAR_0;

 FUNC_1(VAR_5);
 FUNC_0(VAR_5, VAR_4, VAR_3, VAR_6);
 FUNC_0(VAR_5, VAR_4, VAR_2, &VAR_7);
 VAR_5->freq = VAR_7.frequency;


 FUNC_4(10000, 20000);
 FUNC_2(VAR_5);

 return 0;
}
