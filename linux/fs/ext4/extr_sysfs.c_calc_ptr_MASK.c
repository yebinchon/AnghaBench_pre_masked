
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ext4_sb_info {scalar_t__ s_es; } ;
struct TYPE_2__ {void* explicit_ptr; int offset; } ;
struct ext4_attr {int attr_ptr; TYPE_1__ u; } ;






__attribute__((used)) static void *FUNC_0(struct ext4_attr *VAR_0, struct ext4_sb_info *VAR_1)
{
 switch (VAR_0->attr_ptr) {
 case 130:
  return VAR_0->u.explicit_ptr;
 case 129:
  return (void *) (((char *) VAR_1) + VAR_0->u.offset);
 case 128:
  return (void *) (((char *) VAR_1->s_es) + VAR_0->u.offset);
 }
 return ((void*)0);
}
