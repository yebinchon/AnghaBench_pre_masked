
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imgu_device {int dummy; } ;
struct imgu_css_pipe {TYPE_1__* aux_frames; int ** binary_params_cs; } ;
struct imgu_css {struct imgu_css_pipe* pipes; int dev; } ;
struct TYPE_2__ {int * mem; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct imgu_device* FUNC_0 (int ) ;
 int FUNC_1 (struct imgu_device*,int *) ;

__attribute__((used)) static void FUNC_2(struct imgu_css *VAR_5, unsigned int VAR_6)
{
 struct imgu_device *VAR_7 = FUNC_0(VAR_5->dev);
 unsigned int VAR_8, VAR_9;

 struct imgu_css_pipe *VAR_10 = &VAR_5->pipes[VAR_6];

 for (VAR_9 = 0; VAR_9 < VAR_1 - 1; VAR_9++)
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   FUNC_1(VAR_7,
      &VAR_10->binary_params_cs[VAR_9][VAR_8]);

 VAR_9 = VAR_3;
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  FUNC_1(VAR_7,
     &VAR_10->aux_frames[VAR_9].mem[VAR_8]);

 VAR_9 = VAR_4;
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  FUNC_1(VAR_7,
     &VAR_10->aux_frames[VAR_9].mem[VAR_8]);
}
