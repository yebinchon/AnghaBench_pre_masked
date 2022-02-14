
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_configuration {int dpdData_size; int dpdData; int dot11StationId; int dot11RtsThreshold; int dot11MaxReceiveLifeTime; int dot11MaxTransmitMsduLifeTime; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {struct wsm_buf wsm_cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wsm_buf*,int ,int) ;
 int FUNC_1 (struct wsm_buf*,int) ;
 int FUNC_2 (struct wsm_buf*,int ) ;
 int FUNC_3 (struct cw1200_common*) ;
 int FUNC_4 (struct cw1200_common*,struct wsm_buf*,struct wsm_configuration*,int ,int ) ;
 int FUNC_5 (struct cw1200_common*) ;

int FUNC_6(struct cw1200_common *VAR_4, struct wsm_configuration *VAR_5)
{
 int VAR_6;
 struct wsm_buf *VAR_7 = &VAR_4->wsm_cmd_buf;

 FUNC_3(VAR_4);

 FUNC_2(VAR_7, VAR_5->dot11MaxTransmitMsduLifeTime);
 FUNC_2(VAR_7, VAR_5->dot11MaxReceiveLifeTime);
 FUNC_2(VAR_7, VAR_5->dot11RtsThreshold);


 FUNC_1(VAR_7, VAR_5->dpdData_size + 12);
 FUNC_1(VAR_7, 1);
 FUNC_0(VAR_7, VAR_5->dot11StationId, VAR_1);
 FUNC_1(VAR_7, 5);
 FUNC_0(VAR_7, VAR_5->dpdData, VAR_5->dpdData_size);

 VAR_6 = FUNC_4(VAR_4, VAR_7, VAR_5,
      VAR_3, VAR_2);

 FUNC_5(VAR_4);
 return VAR_6;

nomem:
 FUNC_5(VAR_4);
 return -VAR_0;
}
