
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct in6_addr {int dummy; } ;
typedef int __be32 ;
struct TYPE_5__ {int ipv6; } ;
struct TYPE_8__ {TYPE_1__ ipv6_layout; } ;
struct TYPE_6__ {int ipv6; } ;
struct TYPE_7__ {TYPE_2__ ipv6_layout; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int ,int ) ;
 TYPE_4__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct in6_addr*) ;
 int VAR_4 ;
 int FUNC_4 (int ,int *,int ) ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static void
FUNC_5(void *VAR_6, void *VAR_7, __be32 VAR_8[4],
 __be32 VAR_9[4], __be32 VAR_10[4], __be32 VAR_11[4])
{
 u8 VAR_12 = FUNC_2(VAR_4, VAR_3);

 if (!FUNC_3((struct in6_addr *)VAR_8)) {
  FUNC_4(FUNC_0(VAR_7, VAR_5),
         VAR_9, VAR_12);
  FUNC_4(FUNC_0(VAR_6, VAR_5),
         VAR_8, VAR_12);
 }
 if (!FUNC_3((struct in6_addr *)VAR_10)) {
  FUNC_4(FUNC_0(VAR_7, VAR_1),
         VAR_11, VAR_12);
  FUNC_4(FUNC_0(VAR_6, VAR_1),
         VAR_10, VAR_12);
 }

 FUNC_1(VAR_6, VAR_2, 0xffff);
 FUNC_1(VAR_7, VAR_2, VAR_0);
}
