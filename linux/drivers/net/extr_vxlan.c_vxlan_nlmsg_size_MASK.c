
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndmsg {int dummy; } ;
struct nda_cacheinfo {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int __u32 ;
typedef int __s32 ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static inline size_t FUNC_2(void)
{
 return FUNC_0(sizeof(struct ndmsg))
  + FUNC_1(VAR_0)
  + FUNC_1(sizeof(struct in6_addr))
  + FUNC_1(sizeof(__be16))
  + FUNC_1(sizeof(__be32))
  + FUNC_1(sizeof(__u32))
  + FUNC_1(sizeof(__s32))
  + FUNC_1(sizeof(struct nda_cacheinfo));
}
