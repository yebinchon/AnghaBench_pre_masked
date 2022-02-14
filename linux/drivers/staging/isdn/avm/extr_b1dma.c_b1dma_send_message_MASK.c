
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int data; } ;
struct capi_ctr {scalar_t__ driverdata; } ;
struct TYPE_4__ {int ncci_head; TYPE_2__* card; } ;
typedef TYPE_1__ avmctrl_info ;
struct TYPE_5__ {int lock; } ;
typedef TYPE_2__ avmcard ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_2__*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

u16 FUNC_8(struct capi_ctr *VAR_2, struct sk_buff *VAR_3)
{
 avmctrl_info *VAR_4 = (avmctrl_info *)(VAR_2->driverdata);
 avmcard *VAR_5 = VAR_4->card;
 u16 VAR_6 = VAR_1;

 if (FUNC_1(VAR_3->data) == VAR_0) {
  unsigned long VAR_7;
  FUNC_6(&VAR_5->lock, VAR_7);
  VAR_6 = FUNC_5(&VAR_4->ncci_head,
          FUNC_0(VAR_3->data),
          FUNC_3(VAR_3->data),
          FUNC_2(VAR_3->data));
  FUNC_7(&VAR_5->lock, VAR_7);
 }
 if (VAR_6 == VAR_1)
  FUNC_4(VAR_5, VAR_3);

 return VAR_6;
}
