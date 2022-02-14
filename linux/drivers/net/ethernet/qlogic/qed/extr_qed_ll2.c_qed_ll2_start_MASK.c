
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qed_ll2_params {int ll2_mac_address; scalar_t__ mtu; } ;
struct qed_ll2_buffer {int list; int phys_addr; int data; } ;
struct qed_hwfn {TYPE_1__* ll2; int ll2_mac_address; } ;
struct qed_dev {TYPE_1__* ll2; int ll2_mac_address; } ;
struct TYPE_2__ {int handle; int list; scalar_t__ rx_size; int lock; int cbs; } ;


 int FUNC_0 (struct qed_hwfn*,char*,...) ;
 int FUNC_1 (struct qed_hwfn*,char*) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct qed_hwfn* FUNC_4 (struct qed_hwfn*) ;
 scalar_t__ FUNC_5 (struct qed_hwfn*) ;
 struct qed_hwfn* FUNC_6 (struct qed_hwfn*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ll2_params*) ;
 int FUNC_9 (struct qed_hwfn*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct qed_ll2_buffer*) ;
 struct qed_ll2_buffer* FUNC_13 (int,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (struct qed_hwfn*,int **,int *) ;
 int FUNC_16 (struct qed_hwfn*) ;
 int FUNC_17 (struct qed_hwfn*) ;
 int FUNC_18 (struct qed_hwfn*,struct qed_ll2_params*) ;
 int FUNC_19 (struct qed_hwfn*) ;
 int FUNC_20 (struct qed_hwfn*,int ,int ) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct qed_dev *VAR_9, struct qed_ll2_params *VAR_10)
{
 bool VAR_11 = FUNC_16(VAR_9);
 struct qed_hwfn *VAR_12 = FUNC_4(VAR_9);
 struct qed_ll2_buffer *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 if (!FUNC_11(VAR_10->ll2_mac_address)) {
  FUNC_1(VAR_9, "Invalid Ethernet address\n");
  return -VAR_0;
 }

 FUNC_7(!VAR_9->ll2->cbs);


 FUNC_3(&VAR_9->ll2->list);
 FUNC_21(&VAR_9->ll2->lock);

 VAR_9->ll2->rx_size = VAR_5 + VAR_2 +
        VAR_4 + VAR_10->mtu;





 VAR_14 = VAR_6 * (VAR_11 ? 2 : 1);
 FUNC_0(VAR_9, "Allocating %d LL2 buffers of size %08x bytes\n",
  VAR_14, VAR_9->ll2->rx_size);
 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
  VAR_13 = FUNC_13(sizeof(*VAR_13), VAR_3);
  if (!VAR_13) {
   FUNC_0(VAR_9, "Failed to allocate LL2 buffers\n");
   VAR_16 = -VAR_1;
   goto err0;
  }

  VAR_16 = FUNC_15(VAR_9, (u8 **)&VAR_13->data,
       &VAR_13->phys_addr);
  if (VAR_16) {
   FUNC_12(VAR_13);
   goto err0;
  }

  FUNC_14(&VAR_13->list, &VAR_9->ll2->list);
 }

 VAR_16 = FUNC_8(VAR_12, VAR_10);
 if (VAR_16) {
  FUNC_1(VAR_9, "Failed to start LL2\n");
  goto err0;
 }




 if (VAR_11) {
  VAR_16 = FUNC_8(FUNC_6(VAR_9), VAR_10);
  if (VAR_16) {
   FUNC_1(FUNC_6(VAR_9),
      "Failed to start LL2 on engine 0\n");
   goto err1;
  }
 }

 if (FUNC_5(VAR_12)) {
  FUNC_2(VAR_9, VAR_8, "Starting OOO LL2 queue\n");
  VAR_16 = FUNC_18(VAR_12, VAR_10);
  if (VAR_16) {
   FUNC_1(VAR_9, "Failed to start OOO LL2\n");
   goto err2;
  }
 }

 VAR_16 = FUNC_20(VAR_9, 0, VAR_10->ll2_mac_address);
 if (VAR_16) {
  FUNC_1(VAR_9, "Failed to add an LLH filter\n");
  goto err3;
 }

 FUNC_10(VAR_9->ll2_mac_address, VAR_10->ll2_mac_address);

 return 0;

err3:
 if (FUNC_5(VAR_12))
  FUNC_19(VAR_12);
err2:
 if (VAR_11)
  FUNC_9(FUNC_6(VAR_9));
err1:
 FUNC_9(VAR_12);
err0:
 FUNC_17(VAR_9);
 VAR_9->ll2->handle = VAR_7;
 return VAR_16;
}
