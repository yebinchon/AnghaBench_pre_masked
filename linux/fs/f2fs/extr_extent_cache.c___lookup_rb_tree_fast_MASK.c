
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_entry {unsigned int ofs; unsigned int len; } ;



__attribute__((used)) static struct rb_entry *FUNC_0(struct rb_entry *VAR_0,
       unsigned int VAR_1)
{
 if (VAR_0) {
  if (VAR_0->ofs <= VAR_1 &&
    VAR_0->ofs + VAR_0->len > VAR_1) {
   return VAR_0;
  }
 }
 return ((void*)0);
}
