
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct ustorm_eth_queue_zone {int dummy; } ;
struct TYPE_2__ {int queue_id; } ;
struct qed_queue_cid {TYPE_1__ abs; int sb_igu_id; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,struct ustorm_eth_queue_zone*,int,int) ;

int FUNC_4(struct qed_hwfn *VAR_2,
    struct qed_ptt *VAR_3,
    u16 VAR_4, struct qed_queue_cid *VAR_5)
{
 struct ustorm_eth_queue_zone VAR_6;
 u8 VAR_7, VAR_8;
 u32 VAR_9;
 int VAR_10;


 if (VAR_4 <= 0x7F) {
  VAR_8 = 0;
 } else if (VAR_4 <= 0xFF) {
  VAR_8 = 1;
 } else if (VAR_4 <= 0x1FF) {
  VAR_8 = 2;
 } else {
  FUNC_0(VAR_2, "Invalid coalesce value - %d\n", VAR_4);
  return -VAR_1;
 }
 VAR_7 = (u8)(VAR_4 >> VAR_8);

 VAR_10 = FUNC_2(VAR_2, VAR_3, VAR_8,
       VAR_5->sb_igu_id, 0);
 if (VAR_10)
  goto out;

 VAR_9 = VAR_0 +
    FUNC_1(VAR_5->abs.queue_id);

 VAR_10 = FUNC_3(VAR_2, VAR_3, VAR_9, &VAR_6,
         sizeof(struct ustorm_eth_queue_zone), VAR_7);
 if (VAR_10)
  goto out;

out:
 return VAR_10;
}
