
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct media_pad {int dummy; } ;
struct media_entity {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct media_pad const*) ;

__attribute__((used)) static int FUNC_1(struct media_entity *VAR_2,
     const struct media_pad *VAR_3,
     const struct media_pad *VAR_4, u32 VAR_5)
{
 if (VAR_5 & VAR_1)
  if (FUNC_0(VAR_3))
   return -VAR_0;

 return 0;
}
