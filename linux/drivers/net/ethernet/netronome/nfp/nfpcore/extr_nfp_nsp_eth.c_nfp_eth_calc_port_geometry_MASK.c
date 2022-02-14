
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_eth_table {unsigned int count; TYPE_1__* ports; int max_index; } ;
struct nfp_cpp {int dummy; } ;
struct TYPE_2__ {scalar_t__ label_port; scalar_t__ label_subport; int is_split; scalar_t__ lanes; int port_lanes; int index; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nfp_cpp*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct nfp_cpp *VAR_0, struct nfp_eth_table *VAR_1)
{
 unsigned int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++) {
  VAR_1->max_index = FUNC_0(VAR_1->max_index, VAR_1->ports[VAR_2].index);

  for (VAR_3 = 0; VAR_3 < VAR_1->count; VAR_3++) {
   if (VAR_1->ports[VAR_2].label_port !=
       VAR_1->ports[VAR_3].label_port)
    continue;
   VAR_1->ports[VAR_2].port_lanes += VAR_1->ports[VAR_3].lanes;

   if (VAR_2 == VAR_3)
    continue;
   if (VAR_1->ports[VAR_2].label_subport ==
       VAR_1->ports[VAR_3].label_subport)
    FUNC_1(VAR_0,
      "Port %d subport %d is a duplicate\n",
      VAR_1->ports[VAR_2].label_port,
      VAR_1->ports[VAR_2].label_subport);

   VAR_1->ports[VAR_2].is_split = 1;
  }
 }
}
