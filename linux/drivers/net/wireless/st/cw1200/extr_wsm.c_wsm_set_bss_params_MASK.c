
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_set_bss_params {int beacon_lost_count; int operational_rate_set; int aid; scalar_t__ reset_beacon_loss; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {struct wsm_buf wsm_cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wsm_buf*,int ) ;
 int FUNC_1 (struct wsm_buf*,int ) ;
 int FUNC_2 (struct wsm_buf*,int) ;
 int VAR_2 ;
 int FUNC_3 (struct cw1200_common*) ;
 int FUNC_4 (struct cw1200_common*,struct wsm_buf*,int *,int ,int ) ;
 int FUNC_5 (struct cw1200_common*) ;

int FUNC_6(struct cw1200_common *VAR_3,
         const struct wsm_set_bss_params *VAR_4)
{
 int VAR_5;
 struct wsm_buf *VAR_6 = &VAR_3->wsm_cmd_buf;

 FUNC_3(VAR_3);

 FUNC_2(VAR_6, (VAR_4->reset_beacon_loss ? 0x1 : 0));
 FUNC_2(VAR_6, VAR_4->beacon_lost_count);
 FUNC_0(VAR_6, VAR_4->aid);
 FUNC_1(VAR_6, VAR_4->operational_rate_set);

 VAR_5 = FUNC_4(VAR_3, VAR_6, ((void*)0),
      VAR_2, VAR_1);

 FUNC_5(VAR_3);
 return VAR_5;

nomem:
 FUNC_5(VAR_3);
 return -VAR_0;
}
