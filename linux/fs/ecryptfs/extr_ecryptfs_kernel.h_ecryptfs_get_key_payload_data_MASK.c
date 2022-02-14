
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_key_payload {scalar_t__ data; } ;
struct key {int dummy; } ;
struct ecryptfs_auth_tok {int dummy; } ;


 int VAR_0 ;
 struct ecryptfs_auth_tok* FUNC_0 (int ) ;
 struct ecryptfs_auth_tok* FUNC_1 (struct key*) ;
 struct user_key_payload* FUNC_2 (struct key*) ;

__attribute__((used)) static inline struct ecryptfs_auth_tok *
FUNC_3(struct key *VAR_1)
{
 struct ecryptfs_auth_tok *VAR_2;
 struct user_key_payload *VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 return (struct ecryptfs_auth_tok *)VAR_3->data;
}
