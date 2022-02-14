
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_name_t {int name_len; } ;
typedef int s32 ;



s32 FUNC_0(struct uni_name_t *VAR_0)
{
 s32 VAR_1;

 VAR_1 = VAR_0->name_len;
 if (VAR_1 == 0)
  return 0;


 return (VAR_1 - 1) / 15 + 3;
}
