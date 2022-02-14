
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imgu_device {int dummy; } ;
struct imgu_css_pipe {TYPE_1__* aux_frames; int ** binary_params_cs; } ;
struct imgu_css {struct imgu_css_pipe* pipes; int dev; } ;
struct TYPE_2__ {int * mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 struct imgu_device* FUNC_0 (int ) ;
 int FUNC_1 (struct imgu_css*,unsigned int) ;
 int FUNC_2 (struct imgu_device*,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct imgu_css *VAR_10, unsigned int VAR_11)
{
 struct imgu_device *VAR_12 = FUNC_0(VAR_10->dev);
 unsigned int VAR_13, VAR_14;

 struct imgu_css_pipe *VAR_15 = &VAR_10->pipes[VAR_11];

 for (VAR_14 = VAR_5;
      VAR_14 < VAR_6; VAR_14++)
  for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
   if (!FUNC_2(VAR_12,
            &VAR_15->binary_params_cs[VAR_14 - 1][VAR_13],
            VAR_0))
    goto out_of_memory;

 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
  if (!FUNC_2(VAR_12,
           &VAR_15->aux_frames[VAR_8].
           mem[VAR_13], VAR_1))
   goto out_of_memory;

 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
  if (!FUNC_2(VAR_12,
           &VAR_15->aux_frames[VAR_9].
           mem[VAR_13], VAR_2))
   goto out_of_memory;

 return 0;

out_of_memory:
 FUNC_1(VAR_10, VAR_11);
 return -VAR_3;
}
