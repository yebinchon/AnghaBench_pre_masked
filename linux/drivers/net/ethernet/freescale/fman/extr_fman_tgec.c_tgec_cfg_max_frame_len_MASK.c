
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct fman_mac {TYPE_1__* cfg; } ;
struct TYPE_2__ {int max_frame_length; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

int FUNC_1(struct fman_mac *VAR_1, u16 VAR_2)
{
 if (FUNC_0(VAR_1->cfg))
  return -VAR_0;

 VAR_1->cfg->max_frame_length = VAR_2;

 return 0;
}
