
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int * chpid; } ;
struct TYPE_6__ {TYPE_1__ pmcw; } ;
struct subchannel {TYPE_2__ schib; } ;
struct chp_id {int id; } ;
struct TYPE_7__ {int util_str; } ;
struct channel_path {int lock; TYPE_3__ desc_fmt3; } ;
struct TYPE_8__ {int parent; } ;
struct ccw_device {TYPE_4__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct chp_id*) ;
 struct channel_path* FUNC_1 (struct chp_id) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct subchannel* FUNC_6 (int ) ;

u8 *FUNC_7(struct ccw_device *VAR_1, int VAR_2)
{
 struct subchannel *VAR_3 = FUNC_6(VAR_1->dev.parent);
 struct channel_path *VAR_4;
 struct chp_id VAR_5;
 u8 *VAR_6;

 FUNC_0(&VAR_5);
 VAR_5.id = VAR_3->schib.pmcw.chpid[VAR_2];
 VAR_4 = FUNC_1(VAR_5);

 VAR_6 = FUNC_2(sizeof(VAR_4->desc_fmt3.util_str), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 FUNC_4(&VAR_4->lock);
 FUNC_3(VAR_6, VAR_4->desc_fmt3.util_str, sizeof(VAR_4->desc_fmt3.util_str));
 FUNC_5(&VAR_4->lock);

 return VAR_6;
}
