
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct bnx2x {scalar_t__ state; int requested_nr_virtfn; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,int,int) ;
 int VAR_2 ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*,int) ;
 struct bnx2x* FUNC_7 (int ) ;
 int FUNC_8 (struct pci_dev*) ;

int FUNC_9(struct pci_dev *VAR_3, int VAR_4)
{
 struct bnx2x *VAR_5 = FUNC_7(FUNC_8(VAR_3));

 if (!FUNC_3(VAR_5)) {
  FUNC_0("failed to configure SR-IOV since vfdb was not allocated. Check dmesg for errors in probe stage\n");
  return -VAR_2;
 }

 FUNC_2(VAR_0, "bnx2x_sriov_configure called with %d, BNX2X_NR_VIRTFN(bp) was %d\n",
    VAR_4, FUNC_1(VAR_5));


 if (VAR_5->state != VAR_1) {
  FUNC_0("VF num configuration via sysfs not supported while PF is down\n");
  return -VAR_2;
 }


 if (VAR_4 > FUNC_1(VAR_5)) {
  FUNC_0("truncating requested number of VFs (%d) down to maximum allowed (%d)\n",
     VAR_4, FUNC_1(VAR_5));
  VAR_4 = FUNC_1(VAR_5);
 }

 VAR_5->requested_nr_virtfn = VAR_4;
 if (VAR_4 == 0) {
  FUNC_6(VAR_5, 0);
  FUNC_4(VAR_5);
  return 0;
 } else {
  return FUNC_5(VAR_5);
 }
}
