
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct qed_hwfn {int cdev; } ;
struct qed_db_recovery_entry {scalar_t__ db_width; scalar_t__ db_data; int db_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct qed_hwfn *VAR_2,
     struct qed_db_recovery_entry *VAR_3)
{

 if (VAR_3->db_width == VAR_0) {
  FUNC_2(VAR_2, VAR_1,
      "ringing doorbell address %p data %x\n",
      VAR_3->db_addr,
      *(u32 *)VAR_3->db_data);
 } else {
  FUNC_2(VAR_2, VAR_1,
      "ringing doorbell address %p data %llx\n",
      VAR_3->db_addr,
      *(u64 *)(VAR_3->db_data));
 }


 if (!FUNC_3(VAR_2->cdev, VAR_3->db_addr,
          VAR_3->db_width, VAR_3->db_data))
  return;





 FUNC_4();


 if (VAR_3->db_width == VAR_0)
  FUNC_0(VAR_3->db_addr,
         *(u32 *)(VAR_3->db_data));
 else
  FUNC_1(VAR_3->db_addr,
    *(u64 *)(VAR_3->db_data));




 FUNC_4();
}
