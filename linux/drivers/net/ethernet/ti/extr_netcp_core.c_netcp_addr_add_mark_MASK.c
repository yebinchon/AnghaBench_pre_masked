
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct netcp_intf {int dummy; } ;
struct netcp_addr {int flags; } ;
typedef enum netcp_addr_type { ____Placeholder_netcp_addr_type } netcp_addr_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct netcp_addr* FUNC_1 (struct netcp_intf*,int const*,int) ;
 struct netcp_addr* FUNC_2 (struct netcp_intf*,int const*,int) ;

__attribute__((used)) static void FUNC_3(struct netcp_intf *VAR_2, const u8 *VAR_3,
    enum netcp_addr_type VAR_4)
{
 struct netcp_addr *VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (VAR_5) {
  VAR_5->flags |= VAR_1;
  return;
 }

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (!FUNC_0(!VAR_5))
  VAR_5->flags |= VAR_0;
}
