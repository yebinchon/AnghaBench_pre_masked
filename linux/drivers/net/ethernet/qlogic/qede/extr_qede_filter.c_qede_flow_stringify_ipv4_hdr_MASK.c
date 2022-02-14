
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_arfs_tuple {scalar_t__ ip_proto; int src_port; int dst_port; int dst_ipv4; int src_ipv4; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,char*,char const*,int *,int,int *,int) ;

__attribute__((used)) static void FUNC_1(struct qede_arfs_tuple *VAR_2,
      void *VAR_3)
{
 const char *VAR_4 = VAR_2->ip_proto == VAR_0 ? "TCP" : "UDP";

 FUNC_0(VAR_3, VAR_1,
   "%s %pI4 (%04x) -> %pI4 (%04x)",
   VAR_4, &VAR_2->src_ipv4, VAR_2->src_port,
   &VAR_2->dst_ipv4, VAR_2->dst_port);
}
