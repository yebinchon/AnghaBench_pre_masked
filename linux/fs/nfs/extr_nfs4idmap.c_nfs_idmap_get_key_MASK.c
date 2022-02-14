
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_key_payload {size_t datalen; int data; int perm; } ;
typedef struct key {size_t datalen; int data; int perm; } const key ;
struct idmap {int dummy; } ;
struct cred {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct user_key_payload const*) ;
 scalar_t__ FUNC_1 (struct user_key_payload const*) ;
 int VAR_1 ;
 size_t FUNC_2 (struct user_key_payload const*) ;
 int VAR_2 ;
 int FUNC_3 (struct user_key_payload const*) ;
 size_t FUNC_4 (struct user_key_payload const*) ;
 int FUNC_5 (void*,int ,size_t) ;
 struct user_key_payload* FUNC_6 (char const*,size_t,char const*,struct idmap*) ;
 struct cred* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct cred const*) ;
 struct user_key_payload* FUNC_11 (struct user_key_payload const*) ;

__attribute__((used)) static ssize_t FUNC_12(const char *VAR_3, size_t VAR_4,
     const char *VAR_5, void *VAR_6,
     size_t VAR_7, struct idmap *VAR_8)
{
 const struct cred *VAR_9;
 struct key *VAR_10;
 const struct user_key_payload *VAR_11;
 ssize_t VAR_12;

 VAR_9 = FUNC_7(VAR_2);
 VAR_10 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_8);
 FUNC_10(VAR_9);

 if (FUNC_0(VAR_10)) {
  VAR_12 = FUNC_2(VAR_10);
  goto out;
 }

 FUNC_8();
 VAR_10->perm |= VAR_1;

 VAR_12 = FUNC_4(VAR_10);
 if (VAR_12 < 0)
  goto out_up;

 VAR_11 = FUNC_11(VAR_10);
 if (FUNC_1(VAR_11)) {
  VAR_12 = FUNC_2(VAR_11);
  goto out_up;
 }

 VAR_12 = VAR_11->datalen;
 if (VAR_12 > 0 && VAR_12 <= VAR_7)
  FUNC_5(VAR_6, VAR_11->data, VAR_12);
 else
  VAR_12 = -VAR_0;

out_up:
 FUNC_9();
 FUNC_3(VAR_10);
out:
 return VAR_12;
}
