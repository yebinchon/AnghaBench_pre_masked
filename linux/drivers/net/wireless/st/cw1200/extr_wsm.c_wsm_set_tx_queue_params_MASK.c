
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wsm_set_tx_queue_params {int ackPolicy; int allowedMediumTime; int maxTransmitLifetime; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {struct wsm_buf wsm_cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wsm_buf*,int ) ;
 int FUNC_1 (struct wsm_buf*,int ) ;
 int FUNC_2 (struct wsm_buf*,int) ;
 int FUNC_3 (struct cw1200_common*) ;
 int FUNC_4 (struct cw1200_common*,struct wsm_buf*,int *,int,int ) ;
 int FUNC_5 (struct cw1200_common*) ;

int FUNC_6(struct cw1200_common *VAR_2,
  const struct wsm_set_tx_queue_params *VAR_3, u8 VAR_4)
{
 int VAR_5;
 struct wsm_buf *VAR_6 = &VAR_2->wsm_cmd_buf;
 u8 VAR_7[] = {3, 2, 0, 1};

 FUNC_3(VAR_2);

 FUNC_2(VAR_6, VAR_7[VAR_4]);
 FUNC_2(VAR_6, 0);
 FUNC_2(VAR_6, VAR_3->ackPolicy);
 FUNC_2(VAR_6, 0);
 FUNC_1(VAR_6, VAR_3->maxTransmitLifetime);
 FUNC_0(VAR_6, VAR_3->allowedMediumTime);
 FUNC_0(VAR_6, 0);

 VAR_5 = FUNC_4(VAR_2, VAR_6, ((void*)0), 0x0012, VAR_1);

 FUNC_5(VAR_2);
 return VAR_5;

nomem:
 FUNC_5(VAR_2);
 return -VAR_0;
}
