
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int dummy; } ;
struct reiserfs_key {int k_objectid; } ;


 int VAR_0 ;
 int FUNC_0 (struct reiserfs_transaction_handle*,struct super_block*,int ) ;
 int FUNC_1 (struct reiserfs_transaction_handle*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct reiserfs_transaction_handle*,int *,struct reiserfs_key*) ;
 int FUNC_4 (struct reiserfs_transaction_handle*,int ) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_1,
     struct reiserfs_key *VAR_2, int VAR_3)
{
 struct reiserfs_transaction_handle VAR_4;
 int VAR_5;


 VAR_5 = FUNC_0(&VAR_4, VAR_1, VAR_0);
 if (VAR_5)
  return VAR_5;

 FUNC_3(&VAR_4, ((void*)0), VAR_2);
 if (VAR_3)

  FUNC_4(&VAR_4, FUNC_2(VAR_2->k_objectid));

 return FUNC_1(&VAR_4);
}
