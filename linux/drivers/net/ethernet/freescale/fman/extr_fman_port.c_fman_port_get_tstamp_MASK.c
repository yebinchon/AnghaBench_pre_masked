
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ time_stamp_offset; } ;
struct fman_port {TYPE_1__ buffer_offsets; } ;
typedef int __be64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct fman_port *VAR_2, const void *VAR_3, u64 *VAR_4)
{
 if (VAR_2->buffer_offsets.time_stamp_offset == VAR_1)
  return -VAR_0;

 *VAR_4 = FUNC_0(*(__be64 *)(VAR_3 +
   VAR_2->buffer_offsets.time_stamp_offset));

 return 0;
}
