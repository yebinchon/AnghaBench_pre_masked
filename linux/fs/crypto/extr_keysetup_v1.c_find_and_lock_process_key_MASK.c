
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct user_key_payload {int datalen; scalar_t__ data; } ;
struct key {int sem; int description; } ;
struct fscrypt_key {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct key* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,...) ;
 char* FUNC_4 (int ,char*,char const*,int ,int const*) ;
 int FUNC_5 (struct key*) ;
 int VAR_5 ;
 int FUNC_6 (char*) ;
 struct key* FUNC_7 (int *,char*,int *) ;
 int FUNC_8 (int *) ;
 struct user_key_payload* FUNC_9 (struct key*) ;

__attribute__((used)) static struct key *
FUNC_10(const char *VAR_6,
     const u8 VAR_7[VAR_2],
     unsigned int VAR_8,
     const struct fscrypt_key **VAR_9)
{
 char *VAR_10;
 struct key *VAR_11;
 const struct user_key_payload *VAR_12;
 const struct fscrypt_key *VAR_13;

 VAR_10 = FUNC_4(VAR_4, "%s%*phN", VAR_6,
    VAR_2, VAR_7);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_11 = FUNC_7(&VAR_5, VAR_10, ((void*)0));
 FUNC_6(VAR_10);
 if (FUNC_1(VAR_11))
  return VAR_11;

 FUNC_2(&VAR_11->sem);
 VAR_12 = FUNC_9(VAR_11);

 if (!VAR_12)
  goto invalid;

 VAR_13 = (const struct fscrypt_key *)VAR_12->data;

 if (VAR_12->datalen != sizeof(struct fscrypt_key) ||
     VAR_13->size < 1 || VAR_13->size > VAR_3) {
  FUNC_3(((void*)0),
        "key with description '%s' has invalid payload",
        VAR_11->description);
  goto invalid;
 }

 if (VAR_13->size < VAR_8) {
  FUNC_3(((void*)0),
        "key with description '%s' is too short (got %u bytes, need %u+ bytes)",
        VAR_11->description, VAR_13->size, VAR_8);
  goto invalid;
 }

 *VAR_9 = VAR_13;
 return VAR_11;

invalid:
 FUNC_8(&VAR_11->sem);
 FUNC_5(VAR_11);
 return FUNC_0(-VAR_0);
}
