
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ni_device_routes {int n_route_sets; int device; TYPE_1__* routes; } ;
struct TYPE_6__ {int * route_values; struct ni_device_routes* valid_routes; } ;
struct TYPE_5__ {TYPE_3__ routing_tables; } ;
struct TYPE_4__ {scalar_t__ dest; int n_src; scalar_t__* src; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int const*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_9 (struct ni_device_routes const*) ;
 int FUNC_10 (struct ni_device_routes const*) ;
 scalar_t__ FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int,char*) ;

void FUNC_13(void)
{
 const struct ni_device_routes *VAR_11, *VAR_12;
 const u8 *VAR_13, *VAR_14;

 FUNC_6();
 FUNC_8(VAR_6, VAR_8, &VAR_10.routing_tables);
 VAR_11 = VAR_10.routing_tables.valid_routes;
 VAR_13 = VAR_10.routing_tables.route_values;

 FUNC_12(FUNC_11(VAR_11->device, VAR_8, 10) == 0,
   "find device pci-6070e\n");
 FUNC_12(VAR_11->n_route_sets == 37,
   "number of pci-6070e route_sets == 37\n");
 FUNC_12(VAR_11->routes->dest == FUNC_2(0),
   "first pci-6070e route_set is for NI_PFI(0)\n");
 FUNC_12(VAR_11->routes->n_src == 1,
   "first pci-6070e route_set length == 1\n");
 FUNC_12(VAR_11->routes->src[0] == VAR_3,
   "first pci-6070e route_set src. == NI_AI_StartTrigger\n");
 FUNC_12(VAR_11->routes[10].dest == FUNC_4(0),
   "10th pci-6070e route_set is for TRIGGER_LINE(0)\n");
 FUNC_12(VAR_11->routes[10].n_src == 10,
   "10th pci-6070e route_set length == 10\n");
 FUNC_12(VAR_11->routes[10].src[0] == FUNC_1(0),
   "10th pci-6070e route_set src. == NI_CtrSource(0)\n");
 FUNC_12(FUNC_9(VAR_11),
   "all pci-6070e route_sets in order of signal destination\n");
 FUNC_12(FUNC_10(VAR_11),
   "all pci-6070e route_set->src's in order of signal source\n");

 FUNC_12(
   FUNC_3(VAR_13, FUNC_0(VAR_5), FUNC_0(VAR_2)) == FUNC_5(17) &&
   FUNC_3(VAR_13, FUNC_0(VAR_0), FUNC_0(FUNC_4(0))) == 0 &&
   FUNC_3(VAR_13, FUNC_0(VAR_1), FUNC_0(FUNC_2(0))) == 0 &&
   FUNC_3(VAR_13, FUNC_0(VAR_1), FUNC_0(FUNC_2(2))) ==
  FUNC_5(VAR_4),
   "pci-6070e finds e-series route_values table\n");

 VAR_12 = VAR_11;
 VAR_14 = VAR_13;
 FUNC_7();
 FUNC_8(VAR_7, VAR_9, &VAR_10.routing_tables);
 VAR_11 = VAR_10.routing_tables.valid_routes;
 VAR_13 = VAR_10.routing_tables.route_values;

 FUNC_12(FUNC_11(VAR_11->device, VAR_9, 10) == 0,
   "find device pci-6220\n");
 FUNC_12(VAR_14 != VAR_13, "pci-6220 find other route_values table\n");

 FUNC_12(
   FUNC_3(VAR_13, FUNC_0(VAR_5), FUNC_0(VAR_2)) == FUNC_5(20) &&
   FUNC_3(VAR_13, FUNC_0(VAR_0), FUNC_0(FUNC_4(0))) == FUNC_5(12) &&
   FUNC_3(VAR_13, FUNC_0(VAR_1), FUNC_0(FUNC_2(0))) == FUNC_5(3) &&
   FUNC_3(VAR_13, FUNC_0(VAR_1), FUNC_0(FUNC_2(2))) == FUNC_5(3),
   "pci-6220 finds m-series route_values table\n");
}
