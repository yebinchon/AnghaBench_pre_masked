
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int dummy; } ;
typedef int __fs64 ;
typedef int __fs32 ;
struct TYPE_4__ {TYPE_1__* s_uspi; } ;
struct TYPE_3__ {scalar_t__ fs_magic; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (struct super_block*,int ) ;

__attribute__((used)) static inline u64 FUNC_3(struct super_block *VAR_1, void *VAR_2)
{
 return FUNC_0(VAR_1)->s_uspi->fs_magic == VAR_0 ?
  FUNC_2(VAR_1, *(__fs64 *)VAR_2) :
  FUNC_1(VAR_1, *(__fs32 *)VAR_2);
}
