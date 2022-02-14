
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netcp_packet {int * tx_pipe; } ;
struct gbe_intf {int tx_pipe; } ;


 int FUNC_0 (struct gbe_intf*,struct netcp_packet*) ;

__attribute__((used)) static int FUNC_1(int VAR_0, void *VAR_1, struct netcp_packet *VAR_2)
{
 struct gbe_intf *VAR_3 = VAR_1;

 VAR_2->tx_pipe = &VAR_3->tx_pipe;

 return FUNC_0(VAR_3, VAR_2);
}
