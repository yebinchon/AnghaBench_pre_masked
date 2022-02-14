
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int width; unsigned int height; } ;
struct vpe_q_data {TYPE_1__ c_rect; } ;
struct vpe_ctx {struct vpe_q_data* q_data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct vpe_ctx *VAR_4)
{
 struct vpe_q_data *VAR_5 = &VAR_4->q_data[VAR_1];
 struct vpe_q_data *VAR_6 = &VAR_4->q_data[VAR_0];
 unsigned int VAR_7 = VAR_5->c_rect.width;
 unsigned int VAR_8 = VAR_5->c_rect.height;
 unsigned int VAR_9 = VAR_6->c_rect.width;
 unsigned int VAR_10 = VAR_6->c_rect.height;

 if (VAR_7 == VAR_9 && VAR_8 == VAR_10)
  return 0;

 if (VAR_8 <= VAR_2 &&
     VAR_7 <= VAR_3 &&
     VAR_10 <= VAR_2 &&
     VAR_9 <= VAR_3)
  return 0;

 return -1;
}
