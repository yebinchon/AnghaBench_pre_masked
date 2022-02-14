
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct in6_addr {int dummy; } ;
typedef int ipv6_addr ;
typedef int ipv4_addr ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;
typedef struct in6_addr __be32 ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct in6_addr) ;
 scalar_t__ FUNC_2 (struct in6_addr*) ;
 int FUNC_3 (struct in6_addr*,int *,int) ;
 scalar_t__ FUNC_4 (char const*,int,int *) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3, enum qeth_prot_versions VAR_4,
   u8 *VAR_5)
{
 __be32 VAR_6;
 struct in6_addr VAR_7;

 if (FUNC_4(VAR_3, VAR_4, VAR_5)) {
  return -VAR_0;
 }
 if (VAR_4 == VAR_1) {
  FUNC_3(&VAR_6, VAR_5, sizeof(VAR_6));
  if (FUNC_1(VAR_6)) {
   FUNC_0(2, "multicast rxip not supported.\n");
   return -VAR_0;
  }
 } else if (VAR_4 == VAR_2) {
  FUNC_3(&VAR_7, VAR_5, sizeof(VAR_7));
  if (FUNC_2(&VAR_7)) {
   FUNC_0(2, "multicast rxip not supported.\n");
   return -VAR_0;
  }
 }

 return 0;
}
