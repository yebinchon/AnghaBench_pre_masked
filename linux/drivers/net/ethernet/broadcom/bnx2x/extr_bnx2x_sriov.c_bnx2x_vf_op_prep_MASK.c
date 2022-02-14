
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_vf_bulletin_content {int dummy; } ;
struct bnx2x_virtf {int vfqs; } ;
struct bnx2x {scalar_t__ state; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ VAR_0 ;
 struct bnx2x_virtf* FUNC_2 (struct bnx2x*,int) ;
 struct pf_vf_bulletin_content* FUNC_3 (struct bnx2x*,int) ;
 int VAR_1 ;
 int FUNC_4 (struct bnx2x*) ;

__attribute__((used)) static int FUNC_5(struct bnx2x *VAR_2, int VAR_3,
       struct bnx2x_virtf **VAR_4,
       struct pf_vf_bulletin_content **VAR_5,
       bool VAR_6)
{
 if (VAR_2->state != VAR_0) {
  FUNC_0("PF is down - can't utilize iov-related functionality\n");
  return -VAR_1;
 }

 if (!FUNC_4(VAR_2)) {
  FUNC_0("sriov is disabled - can't utilize iov-related functionality\n");
  return -VAR_1;
 }

 if (VAR_3 >= FUNC_1(VAR_2)) {
  FUNC_0("VF is uninitialized - can't utilize iov-related functionality. vfidx was %d BNX2X_NR_VIRTFN was %d\n",
     VAR_3, FUNC_1(VAR_2));
  return -VAR_1;
 }


 *VAR_4 = FUNC_2(VAR_2, VAR_3);
 *VAR_5 = FUNC_3(VAR_2, VAR_3);

 if (!*VAR_4) {
  FUNC_0("Unable to get VF structure for vfidx %d\n", VAR_3);
  return -VAR_1;
 }

 if (VAR_6 && !(*VAR_4)->vfqs) {
  FUNC_0("vfqs struct is null. Was this invoked before dynamically enabling SR-IOV? vfidx was %d\n",
     VAR_3);
  return -VAR_1;
 }

 if (!*VAR_5) {
  FUNC_0("Bulletin Board struct is null for vfidx %d\n",
     VAR_3);
  return -VAR_1;
 }

 return 0;
}
