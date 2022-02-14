
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ hash_result_offset; } ;
struct fman_port {TYPE_1__ buffer_offsets; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(struct fman_port *VAR_2, u32 *VAR_3)
{
 if (VAR_2->buffer_offsets.hash_result_offset == VAR_1)
  return -VAR_0;

 *VAR_3 = VAR_2->buffer_offsets.hash_result_offset;

 return 0;
}
