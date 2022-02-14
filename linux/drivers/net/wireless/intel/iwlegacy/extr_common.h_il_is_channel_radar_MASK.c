
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_channel_info {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(const struct il_channel_info *VAR_1)
{
 return (VAR_1->flags & VAR_0) ? 1 : 0;
}
