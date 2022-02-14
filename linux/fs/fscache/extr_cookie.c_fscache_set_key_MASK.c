
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fscache_cookie {unsigned long long key_hash; scalar_t__ type; scalar_t__ parent; scalar_t__ inline_key; scalar_t__* key; } ;


 int FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_1 (int,int,int ) ;
 int FUNC_2 (scalar_t__*,void const*,size_t) ;

__attribute__((used)) static int FUNC_3(struct fscache_cookie *VAR_2,
      const void *VAR_3, size_t VAR_4)
{
 unsigned long long VAR_5;
 u32 *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_4, sizeof(*VAR_6));

 if (VAR_4 > sizeof(VAR_2->inline_key)) {
  VAR_6 = FUNC_1(VAR_7, sizeof(*VAR_6), VAR_1);
  if (!VAR_6)
   return -VAR_0;
  VAR_2->key = VAR_6;
 } else {
  VAR_6 = (u32 *)VAR_2->inline_key;
 }

 FUNC_2(VAR_6, VAR_3, VAR_4);




 VAR_5 = (unsigned long)VAR_2->parent;
 VAR_5 += VAR_4 + VAR_2->type;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  VAR_5 += VAR_6[VAR_8];

 VAR_2->key_hash = VAR_5 ^ (VAR_5 >> 32);
 return 0;
}
