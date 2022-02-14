
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct key {int flags; } ;
struct cred {int jit_keyring; struct key* thread_keyring; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (int ,char*,int ) ;
 TYPE_1__ VAR_11 ;
 int FUNC_3 (struct key*) ;
 int FUNC_4 (struct key*) ;
 struct key* FUNC_5 (char*,int ,int ,struct cred*,int,int ,int *,int *) ;
 struct cred* FUNC_6 (int *) ;
 int FUNC_7 (struct cred*) ;
 int FUNC_8 (TYPE_1__*) ;
 struct cred* VAR_12 ;
 int FUNC_9 (int ,int *) ;

int
FUNC_10(void)
{
 struct cred *VAR_13;
 struct key *VAR_14;
 int VAR_15;

 FUNC_2(VAR_1, "Registering the %s key type\n",
   VAR_11.name);







 VAR_13 = FUNC_6(((void*)0));
 if (!VAR_13)
  return -VAR_0;

 VAR_14 = FUNC_5(".cifs_idmap",
    VAR_3, VAR_2, VAR_13,
    (VAR_6 & ~VAR_7) |
    VAR_10 | VAR_9,
    VAR_4, ((void*)0), ((void*)0));
 if (FUNC_0(VAR_14)) {
  VAR_15 = FUNC_1(VAR_14);
  goto failed_put_cred;
 }

 VAR_15 = FUNC_8(&VAR_11);
 if (VAR_15 < 0)
  goto failed_put_key;



 FUNC_9(VAR_5, &VAR_14->flags);
 VAR_13->thread_keyring = VAR_14;
 VAR_13->jit_keyring = VAR_8;
 VAR_12 = VAR_13;

 FUNC_2(VAR_1, "cifs idmap keyring: %d\n", FUNC_4(VAR_14));
 return 0;

failed_put_key:
 FUNC_3(VAR_14);
failed_put_cred:
 FUNC_7(VAR_13);
 return VAR_15;
}
