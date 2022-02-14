
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
 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 struct key* FUNC_6 (int *,char*,int ,int ,int ,int,int ,int *) ;
 int FUNC_7 (struct key*,int *,int ,int ,int *) ;
 int FUNC_8 (struct key*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct fscrypt_master_key *VAR_4)
{
 char VAR_5[VAR_0];
 struct key *VAR_6;
 int VAR_7;

 FUNC_5(VAR_5, VAR_4->mk_spec.u.identifier);
 VAR_6 = FUNC_6(&VAR_3, VAR_5,
       FUNC_3(), FUNC_4(), FUNC_2(),
       VAR_1 | VAR_2, 0, ((void*)0));
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7 = FUNC_7(VAR_6, ((void*)0), 0, VAR_4->mk_users, ((void*)0));
 FUNC_8(VAR_6);
 return VAR_7;
}
