
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct enic {unsigned int rq_count; unsigned int wq_count; int * napi; int vdev; struct net_device* netdev; } ;
struct device {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct enic*) ;
 int FUNC_3 (struct enic*) ;
 size_t FUNC_4 (struct enic*,unsigned int) ;
 int FUNC_5 (struct enic*) ;
 int FUNC_6 (struct enic*) ;
 int FUNC_7 (struct enic*) ;
 struct device* FUNC_8 (struct enic*) ;
 int FUNC_9 (struct enic*) ;
 int FUNC_10 (struct enic*) ;
 int FUNC_11 (struct enic*) ;
 int FUNC_12 (struct enic*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (struct enic*) ;
 int FUNC_14 (struct enic*) ;
 int FUNC_15 (struct net_device*,int *,int ,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct enic *VAR_4)
{
 struct device *VAR_5 = FUNC_8(VAR_4);
 struct net_device *VAR_6 = VAR_4->netdev;
 unsigned int VAR_7;
 int VAR_8;


 VAR_8 = FUNC_5(VAR_4);
 if (VAR_8) {
  FUNC_1(VAR_5, "Using default conversion factor for "
   "interrupt coalesce timer\n");
  FUNC_17(VAR_4->vdev);
 }




 VAR_8 = FUNC_10(VAR_4);
 if (VAR_8) {
  FUNC_0(VAR_5, "Get vNIC configuration failed, aborting\n");
  return VAR_8;
 }




 FUNC_9(VAR_4);



 FUNC_12(VAR_4);





 VAR_8 = FUNC_13(VAR_4);
 if (VAR_8) {
  FUNC_0(VAR_5, "Failed to set intr mode based on resource "
   "counts and system capabilities, aborting\n");
  return VAR_8;
 }




 VAR_8 = FUNC_2(VAR_4);
 if (VAR_8) {
  FUNC_0(VAR_5, "Failed to alloc vNIC resources, aborting\n");
  goto err_out_free_vnic_resources;
 }

 FUNC_11(VAR_4);

 VAR_8 = FUNC_14(VAR_4);
 if (VAR_8) {
  FUNC_0(VAR_5, "Failed to config nic, aborting\n");
  goto err_out_free_vnic_resources;
 }

 switch (FUNC_16(VAR_4->vdev)) {
 default:
  FUNC_15(VAR_6, &VAR_4->napi[0], VAR_1, 64);
  break;
 case 128:
  for (VAR_7 = 0; VAR_7 < VAR_4->rq_count; VAR_7++) {
   FUNC_15(VAR_6, &VAR_4->napi[VAR_7],
    VAR_2, VAR_0);
  }
  for (VAR_7 = 0; VAR_7 < VAR_4->wq_count; VAR_7++)
   FUNC_15(VAR_6, &VAR_4->napi[FUNC_4(VAR_4, VAR_7)],
           VAR_3, VAR_0);
  break;
 }

 return 0;

err_out_free_vnic_resources:
 FUNC_6(VAR_4);
 FUNC_3(VAR_4);
 FUNC_7(VAR_4);

 return VAR_8;
}
