
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wsm_edca_params {TYPE_1__* params; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {struct wsm_buf wsm_cmd_buf; } ;
struct TYPE_2__ {int max_rx_lifetime; int txop_limit; int aifns; int cwmax; int cwmin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wsm_buf*,int ) ;
 int FUNC_1 (struct wsm_buf*,int ) ;
 int FUNC_2 (struct wsm_buf*,int ) ;
 int FUNC_3 (struct cw1200_common*) ;
 int FUNC_4 (struct cw1200_common*,struct wsm_buf*,int *,int ,int ) ;
 int FUNC_5 (struct cw1200_common*) ;

int FUNC_6(struct cw1200_common *VAR_3,
    const struct wsm_edca_params *VAR_4)
{
 int VAR_5;
 struct wsm_buf *VAR_6 = &VAR_3->wsm_cmd_buf;

 FUNC_3(VAR_3);



 FUNC_0(VAR_6, VAR_4->params[3].cwmin);
 FUNC_0(VAR_6, VAR_4->params[2].cwmin);
 FUNC_0(VAR_6, VAR_4->params[1].cwmin);
 FUNC_0(VAR_6, VAR_4->params[0].cwmin);

 FUNC_0(VAR_6, VAR_4->params[3].cwmax);
 FUNC_0(VAR_6, VAR_4->params[2].cwmax);
 FUNC_0(VAR_6, VAR_4->params[1].cwmax);
 FUNC_0(VAR_6, VAR_4->params[0].cwmax);

 FUNC_2(VAR_6, VAR_4->params[3].aifns);
 FUNC_2(VAR_6, VAR_4->params[2].aifns);
 FUNC_2(VAR_6, VAR_4->params[1].aifns);
 FUNC_2(VAR_6, VAR_4->params[0].aifns);

 FUNC_0(VAR_6, VAR_4->params[3].txop_limit);
 FUNC_0(VAR_6, VAR_4->params[2].txop_limit);
 FUNC_0(VAR_6, VAR_4->params[1].txop_limit);
 FUNC_0(VAR_6, VAR_4->params[0].txop_limit);

 FUNC_1(VAR_6, VAR_4->params[3].max_rx_lifetime);
 FUNC_1(VAR_6, VAR_4->params[2].max_rx_lifetime);
 FUNC_1(VAR_6, VAR_4->params[1].max_rx_lifetime);
 FUNC_1(VAR_6, VAR_4->params[0].max_rx_lifetime);

 VAR_5 = FUNC_4(VAR_3, VAR_6, ((void*)0),
      VAR_2, VAR_1);
 FUNC_5(VAR_3);
 return VAR_5;

nomem:
 FUNC_5(VAR_3);
 return -VAR_0;
}
