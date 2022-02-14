
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
struct ubifs_info {int key_len; } ;
struct ubifs_branch {int dummy; } ;



__attribute__((used)) static inline u8 *FUNC_0(struct ubifs_info *VAR_0,
        struct ubifs_branch *VAR_1)
{
 return (void *)VAR_1 + sizeof(*VAR_1) + VAR_0->key_len;
}
