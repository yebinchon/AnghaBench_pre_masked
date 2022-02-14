
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cnic_ops {int dummy; } ;
struct cnic_eth_dev {int iro_arr; int drv_state; scalar_t__ num_irq; } ;
struct bnx2x {int cnic_enabled; int cnic_ops; int iro_arr; void* cnic_data; scalar_t__ cnic_kwq_pending; scalar_t__ cnic_spq_pending; scalar_t__ cnic_kwq; scalar_t__ cnic_kwq_last; scalar_t__ cnic_kwq_prod; scalar_t__ cnic_kwq_cons; struct cnic_eth_dev cnic_eth_dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*,int ,int ) ;
 int FUNC_6 (struct bnx2x*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 struct bnx2x* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,struct cnic_ops*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_9, struct cnic_ops *VAR_10,
          void *VAR_11)
{
 struct bnx2x *VAR_12 = FUNC_8(VAR_9);
 struct cnic_eth_dev *VAR_13 = &VAR_12->cnic_eth_dev;
 int VAR_14;

 FUNC_3(VAR_7, "Register_cnic called\n");

 if (VAR_10 == ((void*)0)) {
  FUNC_0("NULL ops received\n");
  return -VAR_2;
 }

 if (!FUNC_2(VAR_12)) {
  FUNC_0("Can't register CNIC when not supported\n");
  return -VAR_4;
 }

 if (!FUNC_1(VAR_12)) {
  VAR_14 = FUNC_4(VAR_12);
  if (VAR_14) {
   FUNC_0("CNIC-related load failed\n");
   return VAR_14;
  }
 }

 VAR_12->cnic_enabled = 1;

 VAR_12->cnic_kwq = FUNC_7(VAR_8, VAR_5);
 if (!VAR_12->cnic_kwq)
  return -VAR_3;

 VAR_12->cnic_kwq_cons = VAR_12->cnic_kwq;
 VAR_12->cnic_kwq_prod = VAR_12->cnic_kwq;
 VAR_12->cnic_kwq_last = VAR_12->cnic_kwq + VAR_6;

 VAR_12->cnic_spq_pending = 0;
 VAR_12->cnic_kwq_pending = 0;

 VAR_12->cnic_data = VAR_11;

 VAR_13->num_irq = 0;
 VAR_13->drv_state |= VAR_1;
 VAR_13->iro_arr = VAR_12->iro_arr;

 FUNC_6(VAR_12);

 FUNC_9(VAR_12->cnic_ops, VAR_10);


 FUNC_5(VAR_12, VAR_0, 0);

 return 0;
}
