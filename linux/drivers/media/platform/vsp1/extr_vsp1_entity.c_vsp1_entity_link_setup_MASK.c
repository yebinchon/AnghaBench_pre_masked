
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct media_pad {int flags; } ;
struct media_entity {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct media_pad const*,struct media_pad const*,int ) ;
 int FUNC_1 (struct media_pad const*,struct media_pad const*,int ) ;

int FUNC_2(struct media_entity *VAR_1,
      const struct media_pad *VAR_2,
      const struct media_pad *VAR_3, u32 VAR_4)
{
 if (VAR_2->flags & VAR_0)
  return FUNC_1(VAR_2, VAR_3, VAR_4);
 else
  return FUNC_0(VAR_3, VAR_2, VAR_4);
}
