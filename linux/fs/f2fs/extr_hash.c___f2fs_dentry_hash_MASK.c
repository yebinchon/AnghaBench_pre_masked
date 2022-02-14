
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {unsigned char* name; size_t len; } ;
struct TYPE_2__ {int name; } ;
struct fscrypt_name {int hash; TYPE_1__ disk_name; } ;
typedef int f2fs_hash_t ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct qstr const*) ;
 int FUNC_3 (unsigned char const*,size_t,int*,int) ;

__attribute__((used)) static f2fs_hash_t FUNC_4(const struct qstr *VAR_1,
    struct fscrypt_name *VAR_2)
{
 __u32 VAR_3;
 f2fs_hash_t VAR_4;
 const unsigned char *VAR_5;
 __u32 VAR_6[8], VAR_7[4];
 const unsigned char *VAR_8 = VAR_1->name;
 size_t VAR_9 = VAR_1->len;


 if (VAR_2 && !VAR_2->disk_name.name)
  return FUNC_1(VAR_2->hash);

 if (FUNC_2(VAR_1))
  return 0;


 VAR_7[0] = 0x67452301;
 VAR_7[1] = 0xefcdab89;
 VAR_7[2] = 0x98badcfe;
 VAR_7[3] = 0x10325476;

 VAR_5 = VAR_8;
 while (1) {
  FUNC_3(VAR_5, VAR_9, VAR_6, 4);
  FUNC_0(VAR_7, VAR_6);
  VAR_5 += 16;
  if (VAR_9 <= 16)
   break;
  VAR_9 -= 16;
 }
 VAR_3 = VAR_7[0];
 VAR_4 = FUNC_1(VAR_3 & ~VAR_0);
 return VAR_4;
}
