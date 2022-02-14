
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_magic; } ;
struct reiserfs_super_block {TYPE_1__ s_v1; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(struct reiserfs_super_block *VAR_1)
{
 return !FUNC_1(VAR_1->s_v1.s_magic, VAR_0,
   FUNC_0(VAR_0));
}
