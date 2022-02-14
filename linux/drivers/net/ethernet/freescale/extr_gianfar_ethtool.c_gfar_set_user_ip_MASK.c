
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filer_table {int dummy; } ;
struct ethtool_usrip4_spec {int l4_4_bytes; int proto; int tos; int ip4dst; int ip4src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,struct filer_table*) ;

__attribute__((used)) static void FUNC_2(struct ethtool_usrip4_spec *VAR_5,
        struct ethtool_usrip4_spec *VAR_6,
        struct filer_table *VAR_7)
{
 FUNC_1(FUNC_0(VAR_5->ip4src),
      FUNC_0(VAR_6->ip4src),
      VAR_3, VAR_7);
 FUNC_1(FUNC_0(VAR_5->ip4dst),
      FUNC_0(VAR_6->ip4dst),
      VAR_1, VAR_7);
 FUNC_1(VAR_5->tos, VAR_6->tos, VAR_4, VAR_7);
 FUNC_1(VAR_5->proto, VAR_6->proto, VAR_2, VAR_7);
 FUNC_1(FUNC_0(VAR_5->l4_4_bytes),
      FUNC_0(VAR_6->l4_4_bytes),
      VAR_0, VAR_7);

}
