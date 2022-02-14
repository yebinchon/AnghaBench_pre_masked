
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct key {int dummy; } ;
struct TYPE_3__ {int identifier; } ;
struct TYPE_4__ {TYPE_1__ u; } ;
struct fscrypt_master_key {int mk_users; TYPE_2__ mk_spec; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 struct key* FUNC_1 (int ,int *,char*) ;

__attribute__((used)) static struct key *FUNC_2(struct fscrypt_master_key *VAR_2)
{
 char VAR_3[VAR_0];

 FUNC_0(VAR_3, VAR_2->mk_spec.u.identifier);
 return FUNC_1(VAR_2->mk_users, &VAR_1,
          VAR_3);
}
