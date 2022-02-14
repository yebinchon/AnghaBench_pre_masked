
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_master_keys; } ;
struct key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,struct super_block*) ;
 struct key* FUNC_4 (char*,int ,int ,int ,int,int ,int *,int *) ;
 int FUNC_5 (scalar_t__*,struct key*) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_8)
{
 char VAR_9[VAR_0];
 struct key *VAR_10;

 if (VAR_8->s_master_keys)
  return 0;

 FUNC_3(VAR_9, VAR_8);
 VAR_10 = FUNC_4(VAR_9, VAR_2, VAR_1,
    FUNC_2(), VAR_4 |
      VAR_6 | VAR_5 | VAR_7,
    VAR_3, ((void*)0), ((void*)0));
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);


 FUNC_5(&VAR_8->s_master_keys, VAR_10);
 return 0;
}
