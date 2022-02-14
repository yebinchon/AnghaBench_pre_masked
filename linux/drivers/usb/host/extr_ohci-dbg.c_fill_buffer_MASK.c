
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_buffer {char* page; int (* fill_func ) (struct debug_buffer*) ;int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct debug_buffer*) ;

__attribute__((used)) static int FUNC_2(struct debug_buffer *VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_2->page)
  VAR_2->page = (char *)FUNC_0(VAR_1);

 if (!VAR_2->page) {
  VAR_3 = -VAR_0;
  goto out;
 }

 VAR_3 = VAR_2->fill_func(VAR_2);

 if (VAR_3 >= 0) {
  VAR_2->count = VAR_3;
  VAR_3 = 0;
 }

out:
 return VAR_3;
}
