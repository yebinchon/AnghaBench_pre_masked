
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tid_t ;
struct list_head {int dummy; } ;
struct jbd2_revoke_record_s {unsigned long long blocknr; int hash; int sequence; } ;
struct TYPE_6__ {int j_revoke_lock; TYPE_1__* j_revoke; } ;
typedef TYPE_2__ journal_t ;
typedef int gfp_t ;
struct TYPE_5__ {struct list_head* hash_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (TYPE_2__*,unsigned long long) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct jbd2_revoke_record_s* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(journal_t *VAR_5, unsigned long long VAR_6,
         tid_t VAR_7)
{
 struct list_head *VAR_8;
 struct jbd2_revoke_record_s *VAR_9;
 gfp_t VAR_10 = VAR_1;

 if (VAR_4)
  VAR_10 |= VAR_2;
 VAR_9 = FUNC_1(VAR_3, VAR_10);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->sequence = VAR_7;
 VAR_9->blocknr = VAR_6;
 VAR_8 = &VAR_5->j_revoke->hash_table[FUNC_0(VAR_5, VAR_6)];
 FUNC_3(&VAR_5->j_revoke_lock);
 FUNC_2(&VAR_9->hash, VAR_8);
 FUNC_4(&VAR_5->j_revoke_lock);
 return 0;
}
