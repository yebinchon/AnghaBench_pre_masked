
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filer_table {int dummy; } ;
struct ethtool_tcpip4_spec {int tos; int psrc; int pdst; int ip4dst; int ip4src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,struct filer_table*) ;

__attribute__((used)) static void FUNC_3(struct ethtool_tcpip4_spec *VAR_5,
         struct ethtool_tcpip4_spec *VAR_6,
         struct filer_table *VAR_7)
{
 FUNC_2(FUNC_1(VAR_5->ip4src),
      FUNC_1(VAR_6->ip4src),
      VAR_2, VAR_7);
 FUNC_2(FUNC_1(VAR_5->ip4dst),
      FUNC_1(VAR_6->ip4dst),
      VAR_0, VAR_7);
 FUNC_2(FUNC_0(VAR_5->pdst),
      FUNC_0(VAR_6->pdst),
      VAR_1, VAR_7);
 FUNC_2(FUNC_0(VAR_5->psrc),
      FUNC_0(VAR_6->psrc),
      VAR_3, VAR_7);
 FUNC_2(VAR_5->tos, VAR_6->tos, VAR_4, VAR_7);
}
