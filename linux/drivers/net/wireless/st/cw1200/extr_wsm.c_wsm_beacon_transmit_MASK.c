
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_buf {int dummy; } ;
struct wsm_beacon_transmit {scalar_t__ enable_beaconing; } ;
struct cw1200_common {struct wsm_buf wsm_cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wsm_buf*,int) ;
 int FUNC_1 (struct cw1200_common*) ;
 int FUNC_2 (struct cw1200_common*,struct wsm_buf*,int *,int ,int ) ;
 int FUNC_3 (struct cw1200_common*) ;

int FUNC_4(struct cw1200_common *VAR_3,
   const struct wsm_beacon_transmit *VAR_4)
{
 int VAR_5;
 struct wsm_buf *VAR_6 = &VAR_3->wsm_cmd_buf;

 FUNC_1(VAR_3);

 FUNC_0(VAR_6, VAR_4->enable_beaconing ? 1 : 0);

 VAR_5 = FUNC_2(VAR_3, VAR_6, ((void*)0),
      VAR_1, VAR_2);

 FUNC_3(VAR_3);
 return VAR_5;

nomem:
 FUNC_3(VAR_3);
 return -VAR_0;
}
