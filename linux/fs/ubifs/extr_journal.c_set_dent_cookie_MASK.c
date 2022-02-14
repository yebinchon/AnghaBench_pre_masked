
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {scalar_t__ double_hash; } ;
struct ubifs_dent_node {scalar_t__ cookie; } ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct ubifs_info *VAR_0, struct ubifs_dent_node *VAR_1)
{
 if (VAR_0->double_hash)
  VAR_1->cookie = FUNC_0();
 else
  VAR_1->cookie = 0;
}
