
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fman_port {TYPE_2__* cfg; } ;
struct fman_buffer_prefix_content {int dummy; } ;
struct TYPE_3__ {scalar_t__ data_align; } ;
struct TYPE_4__ {TYPE_1__ buffer_prefix_content; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,struct fman_buffer_prefix_content*,int) ;

int FUNC_2(struct fman_port *VAR_2,
         struct fman_buffer_prefix_content *
         VAR_3)
{
 if (FUNC_0(VAR_2->cfg))
  return -VAR_1;

 FUNC_1(&VAR_2->cfg->buffer_prefix_content,
        VAR_3,
        sizeof(struct fman_buffer_prefix_content));



 if (!VAR_2->cfg->buffer_prefix_content.data_align)
  VAR_2->cfg->buffer_prefix_content.data_align =
  VAR_0;

 return 0;
}
