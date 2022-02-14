
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_data; } ;
typedef scalar_t__ ext2_grpblk_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static ext2_grpblk_t
FUNC_1(ext2_grpblk_t VAR_0, struct buffer_head *VAR_1,
     ext2_grpblk_t VAR_2)
{
 ext2_grpblk_t VAR_3;

 VAR_3 = FUNC_0(VAR_1->b_data, VAR_2, VAR_0);
 if (VAR_3 >= VAR_2)
  return -1;
 return VAR_3;
}
