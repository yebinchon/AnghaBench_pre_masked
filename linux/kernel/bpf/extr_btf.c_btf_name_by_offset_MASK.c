
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {size_t str_len; } ;
struct btf {char const* strings; TYPE_1__ hdr; } ;



const char *FUNC_0(const struct btf *VAR_0, u32 VAR_1)
{
 if (VAR_1 < VAR_0->hdr.str_len)
  return &VAR_0->strings[VAR_1];

 return ((void*)0);
}
