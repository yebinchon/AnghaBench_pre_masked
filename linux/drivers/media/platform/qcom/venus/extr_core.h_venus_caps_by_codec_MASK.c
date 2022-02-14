
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct venus_core {unsigned int codecs_count; struct venus_caps* caps; } ;
struct venus_caps {scalar_t__ codec; scalar_t__ domain; } ;



__attribute__((used)) static inline struct venus_caps *
FUNC_0(struct venus_core *VAR_0, u32 VAR_1, u32 VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->codecs_count; VAR_3++) {
  if (VAR_0->caps[VAR_3].codec == VAR_1 &&
      VAR_0->caps[VAR_3].domain == VAR_2)
   return &VAR_0->caps[VAR_3];
 }

 return ((void*)0);
}
