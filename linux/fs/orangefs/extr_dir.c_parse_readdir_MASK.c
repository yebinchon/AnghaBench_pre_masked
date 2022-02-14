
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct orangefs_readdir_response_s {int dummy; } ;
struct TYPE_2__ {scalar_t__ trailer_size; scalar_t__ trailer_buf; } ;
struct orangefs_kernel_op_s {TYPE_1__ downcall; } ;
struct orangefs_dir_part {struct orangefs_dir_part* next; scalar_t__ len; } ;
struct orangefs_dir {size_t end; struct orangefs_dir_part* part; } ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(struct orangefs_dir *VAR_1,
    struct orangefs_kernel_op_s *VAR_2)
{
 struct orangefs_dir_part *VAR_3, *VAR_4;
 size_t VAR_5;

 VAR_5 = 1;
 VAR_3 = VAR_1->part;
 while (VAR_3) {
  VAR_5++;
  if (VAR_3->next)
   VAR_3 = VAR_3->next;
  else
   break;
 }

 VAR_4 = (void *)VAR_2->downcall.trailer_buf;
 VAR_4->next = ((void*)0);
 VAR_4->len = VAR_2->downcall.trailer_size -
     sizeof(struct orangefs_readdir_response_s);
 if (!VAR_1->part)
  VAR_1->part = VAR_4;
 else
  VAR_3->next = VAR_4;
 VAR_5++;
 VAR_1->end = VAR_5 << VAR_0;

 return 0;
}
