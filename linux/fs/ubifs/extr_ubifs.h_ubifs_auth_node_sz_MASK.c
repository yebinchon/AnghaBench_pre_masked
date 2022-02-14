
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int hmac_desc_len; } ;
struct ubifs_auth_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct ubifs_info const*) ;

__attribute__((used)) static inline int FUNC_1(const struct ubifs_info *VAR_0)
{
 if (FUNC_0(VAR_0))
  return sizeof(struct ubifs_auth_node) + VAR_0->hmac_desc_len;
 else
  return 0;
}
