
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __be32 ;
typedef int __be16 ;


 size_t FUNC_0 (int) ;

__attribute__((used)) static size_t FUNC_1(const struct net_device *VAR_0)
{
 return FUNC_0(sizeof(__u32)) +
  FUNC_0(sizeof(struct in6_addr)) +
  FUNC_0(sizeof(__u8)) +
  FUNC_0(sizeof(__u8)) +
  FUNC_0(sizeof(__u8)) +
  FUNC_0(sizeof(__be32)) +
  FUNC_0(sizeof(__be16)) +
  FUNC_0(0) +
  FUNC_0(sizeof(__u8)) +
  FUNC_0(sizeof(__u8)) +
  FUNC_0(sizeof(__u8)) +
  FUNC_0(sizeof(__u8)) +
  0;
}
