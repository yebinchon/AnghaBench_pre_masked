
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sa_family; } ;
struct TYPE_4__ {int s_addr; } ;
struct TYPE_5__ {TYPE_1__ sin_addr; } ;
union vxlan_addr {TYPE_3__ sa; TYPE_2__ sin; } ;
struct nlattr {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;

__attribute__((used)) static int FUNC_2(union vxlan_addr *VAR_2, struct nlattr *VAR_3)
{
 if (FUNC_1(VAR_3) >= sizeof(struct in6_addr)) {
  return -VAR_1;
 } else if (FUNC_1(VAR_3) >= sizeof(__be32)) {
  VAR_2->sin.sin_addr.s_addr = FUNC_0(VAR_3);
  VAR_2->sa.sa_family = VAR_0;
  return 0;
 } else {
  return -VAR_1;
 }
}
