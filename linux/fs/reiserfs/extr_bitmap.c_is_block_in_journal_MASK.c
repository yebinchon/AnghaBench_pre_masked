
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef int b_blocknr_t ;
struct TYPE_2__ {int retry; int in_journal_nohint; int in_journal_hint; } ;


 int FUNC_0 (struct super_block*,int ) ;
 scalar_t__ FUNC_1 (struct super_block*,unsigned int,int,int,int*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline int FUNC_2(struct super_block *VAR_1, unsigned int VAR_2,
          int VAR_3, int *VAR_4)
{
 b_blocknr_t VAR_5;

 if (FUNC_1(VAR_1, VAR_2, VAR_3, 1, &VAR_5)) {
  if (VAR_5) {
   *VAR_4 = VAR_5;
   FUNC_0(VAR_1, VAR_0.in_journal_hint);
  } else {
   (*VAR_4) = VAR_3 + 1;
   FUNC_0(VAR_1, VAR_0.in_journal_nohint);
  }
  FUNC_0(VAR_1, VAR_0.retry);
  return 1;
 }
 return 0;
}
