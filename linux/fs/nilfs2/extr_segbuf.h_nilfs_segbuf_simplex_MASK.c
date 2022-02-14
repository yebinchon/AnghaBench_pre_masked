
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int flags; } ;
struct nilfs_segment_buffer {TYPE_1__ sb_sum; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct nilfs_segment_buffer *VAR_2)
{
 unsigned int VAR_3 = VAR_2->sb_sum.flags;

 return (VAR_3 & (VAR_0 | VAR_1)) ==
  (VAR_0 | VAR_1);
}
