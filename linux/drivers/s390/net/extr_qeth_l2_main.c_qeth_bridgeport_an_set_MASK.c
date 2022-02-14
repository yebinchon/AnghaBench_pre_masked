
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct subchannel_id {int dummy; } ;
struct TYPE_3__ {int supported_funcs; } ;
struct TYPE_4__ {TYPE_1__ sbp; } ;
struct qeth_card {TYPE_2__ options; } ;
struct ccw_device {int dummy; } ;


 struct ccw_device* FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ccw_device*,struct subchannel_id*) ;
 int FUNC_2 (struct subchannel_id,int,int *,int *,struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*,int,int ) ;
 int FUNC_4 (struct qeth_card*,int ,int ,int *,int *) ;
 int * VAR_3 ;

int FUNC_5(struct qeth_card *VAR_4, int VAR_5)
{
 int VAR_6;
 u16 VAR_7;
 struct ccw_device *VAR_8;
 struct subchannel_id VAR_9;

 if (!VAR_4)
  return -VAR_0;
 if (!VAR_4->options.sbp.supported_funcs)
  return -VAR_1;
 VAR_8 = FUNC_0(VAR_4);
 FUNC_1(VAR_8, &VAR_9);

 if (VAR_5) {
  FUNC_4(VAR_4, VAR_2, 0, ((void*)0), ((void*)0));
  VAR_6 = FUNC_2(VAR_9, 1, &VAR_7,
   VAR_3, VAR_4);
 } else
  VAR_6 = FUNC_2(VAR_9, 0, &VAR_7, ((void*)0), ((void*)0));
 return FUNC_3(VAR_4, VAR_6, VAR_7);
}
