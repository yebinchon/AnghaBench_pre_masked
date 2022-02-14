
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_buffer {int (* fill_func ) (struct debug_buffer*) ;int count; scalar_t__ output_buf; int alloc_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct debug_buffer*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct debug_buffer *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1->output_buf)
  VAR_1->output_buf = FUNC_1(VAR_1->alloc_size);

 if (!VAR_1->output_buf) {
  VAR_2 = -VAR_0;
  goto out;
 }

 VAR_2 = VAR_1->fill_func(VAR_1);

 if (VAR_2 >= 0) {
  VAR_1->count = VAR_2;
  VAR_2 = 0;
 }

out:
 return VAR_2;
}
