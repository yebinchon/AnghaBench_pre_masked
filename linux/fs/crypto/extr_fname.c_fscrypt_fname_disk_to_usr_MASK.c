
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef void* u32 ;
struct qstr {int dummy; } ;
struct inode {int dummy; } ;
struct fscrypt_str {char* name; int len; } ;
struct fscrypt_digested_name {int digest; void* minor_hash; void* hash; } ;
typedef int digested_name ;


 int VAR_0 ;
 int FUNC_0 (char const*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct qstr FUNC_1 (struct fscrypt_str const*) ;
 int VAR_3 ;
 void* FUNC_2 (char const*,int,char const*) ;
 int FUNC_3 (struct inode*,struct fscrypt_str const*,struct fscrypt_str*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct qstr const*) ;
 int FUNC_6 (int ,int ,int ) ;

int FUNC_7(struct inode *VAR_4,
   u32 VAR_5, u32 VAR_6,
   const struct fscrypt_str *VAR_7,
   struct fscrypt_str *VAR_8)
{
 const struct qstr VAR_9 = FUNC_1(VAR_7);
 struct fscrypt_digested_name VAR_10;

 if (FUNC_5(&VAR_9)) {
  VAR_8->name[0] = '.';
  VAR_8->name[VAR_7->len - 1] = '.';
  VAR_8->len = VAR_7->len;
  return 0;
 }

 if (VAR_7->len < VAR_3)
  return -VAR_0;

 if (FUNC_4(VAR_4))
  return FUNC_3(VAR_4, VAR_7, VAR_8);

 if (VAR_7->len <= VAR_2) {
  VAR_8->len = FUNC_2(VAR_7->name, VAR_7->len,
        VAR_8->name);
  return 0;
 }
 if (VAR_5) {
  VAR_10.hash = VAR_5;
  VAR_10.minor_hash = VAR_6;
 } else {
  VAR_10.hash = 0;
  VAR_10.minor_hash = 0;
 }
 FUNC_6(VAR_10.digest,
        FUNC_0(VAR_7->name, VAR_7->len),
        VAR_1);
 VAR_8->name[0] = '_';
 VAR_8->len = 1 + FUNC_2((const u8 *)&VAR_10,
           sizeof(VAR_10), VAR_8->name + 1);
 return 0;
}
