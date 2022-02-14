
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ str_len; } ;
struct btf {TYPE_1__ hdr; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(const struct btf *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_1) &&
  VAR_1 < VAR_0->hdr.str_len;
}
