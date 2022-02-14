
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_cookie {scalar_t__ key_hash; scalar_t__ parent; int key_len; scalar_t__ type; void* key; int inline_key; } ;


 long FUNC_0 (void const*,void const*,int) ;

__attribute__((used)) static long FUNC_1(const struct fscache_cookie *VAR_0,
       const struct fscache_cookie *VAR_1)
{
 const void *VAR_2, *VAR_3;

 if (VAR_0->key_hash != VAR_1->key_hash)
  return (long)VAR_0->key_hash - (long)VAR_1->key_hash;
 if (VAR_0->parent != VAR_1->parent)
  return (long)VAR_0->parent - (long)VAR_1->parent;
 if (VAR_0->key_len != VAR_1->key_len)
  return (long)VAR_0->key_len - (long)VAR_1->key_len;
 if (VAR_0->type != VAR_1->type)
  return (long)VAR_0->type - (long)VAR_1->type;

 if (VAR_0->key_len <= sizeof(VAR_0->inline_key)) {
  VAR_2 = &VAR_0->inline_key;
  VAR_3 = &VAR_1->inline_key;
 } else {
  VAR_2 = VAR_0->key;
  VAR_3 = VAR_1->key;
 }
 return FUNC_0(VAR_2, VAR_3, VAR_0->key_len);
}
