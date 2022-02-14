
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct log_group {int dummy; } ;
struct arena_info {scalar_t__ logoff; } ;


 int VAR_0 ;
 int FUNC_0 (struct arena_info*,scalar_t__,struct log_group*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct arena_info *VAR_1, u32 VAR_2,
   struct log_group *VAR_3)
{
 return FUNC_0(VAR_1,
   VAR_1->logoff + (VAR_2 * VAR_0), VAR_3,
   VAR_0, 0);
}
