
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root_cached {int dummy; } ;
struct rb_entry {int dummy; } ;


 struct rb_entry* FUNC_0 (struct rb_entry*,unsigned int) ;
 struct rb_entry* FUNC_1 (struct rb_root_cached*,unsigned int) ;

struct rb_entry *FUNC_2(struct rb_root_cached *VAR_0,
    struct rb_entry *VAR_1, unsigned int VAR_2)
{
 struct rb_entry *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3)
  return FUNC_1(VAR_0, VAR_2);

 return VAR_3;
}
