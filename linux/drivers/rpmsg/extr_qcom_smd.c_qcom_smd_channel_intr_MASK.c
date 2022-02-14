
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_smd_channel {int remote_state; scalar_t__ state; int pkt_size; int fblockread_event; int state_change_event; } ;
typedef int pktlen ;
typedef int __le32 ;


 int FUNC_0 (struct qcom_smd_channel*,int ) ;
 int FUNC_1 (struct qcom_smd_channel*,int ) ;
 int FUNC_2 (struct qcom_smd_channel*,int ) ;
 int FUNC_3 (struct qcom_smd_channel*,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct qcom_smd_channel*,int) ;
 int FUNC_6 (struct qcom_smd_channel*) ;
 int FUNC_7 (struct qcom_smd_channel*,int *,int) ;
 int FUNC_8 (struct qcom_smd_channel*) ;
 int FUNC_9 (struct qcom_smd_channel*) ;
 int VAR_6 ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;

__attribute__((used)) static bool FUNC_12(struct qcom_smd_channel *VAR_7)
{
 bool VAR_8 = 0;
 int VAR_9;
 __le32 VAR_10;
 int VAR_11;
 int VAR_12;


 VAR_9 = FUNC_1(VAR_7, VAR_6);
 if (VAR_9 != VAR_7->remote_state) {
  VAR_7->remote_state = VAR_9;
  VAR_8 = 1;

  FUNC_10(&VAR_7->state_change_event);
 }

 FUNC_3(VAR_7, VAR_4, 0);


 if (!FUNC_2(VAR_7, VAR_2))
  FUNC_10(&VAR_7->fblockread_event);


 if (VAR_7->state != VAR_0)
  goto out;


 FUNC_3(VAR_7, VAR_3, 0);


 for (;;) {
  VAR_11 = FUNC_6(VAR_7);

  if (!VAR_7->pkt_size && VAR_11 >= VAR_1) {
   FUNC_7(VAR_7, &VAR_10, sizeof(VAR_10));
   FUNC_5(VAR_7, VAR_1);
   VAR_7->pkt_size = FUNC_4(VAR_10);
  } else if (VAR_7->pkt_size && VAR_11 >= VAR_7->pkt_size) {
   VAR_12 = FUNC_8(VAR_7);
   if (VAR_12)
    break;
  } else {
   break;
  }
 }


 FUNC_3(VAR_7, VAR_5, 1);


 if (!FUNC_0(VAR_7, VAR_2)) {

  FUNC_11();

  FUNC_9(VAR_7);
 }

out:
 return VAR_8;
}
