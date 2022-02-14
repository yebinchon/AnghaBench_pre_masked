
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct venus_caps {int cap_bufs_mode_dynamic; } ;


 scalar_t__ const VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct venus_caps *VAR_1, const void *VAR_2, unsigned int VAR_3)
{
 const u32 *VAR_4 = VAR_2;

 if (*VAR_4 == VAR_0)
  VAR_1->cap_bufs_mode_dynamic = 1;
}
