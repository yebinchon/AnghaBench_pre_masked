
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpss_pg_frame_size {int dummy; } ;
struct TYPE_3__ {int (* set_pg_frame_size ) (struct vpss_pg_frame_size) ;} ;
struct TYPE_4__ {TYPE_1__ hw_ops; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct vpss_pg_frame_size) ;

void FUNC_1(struct vpss_pg_frame_size VAR_1)
{
 if (!VAR_0.hw_ops.set_pg_frame_size)
  return;

 VAR_0.hw_ops.set_pg_frame_size(VAR_1);
}
