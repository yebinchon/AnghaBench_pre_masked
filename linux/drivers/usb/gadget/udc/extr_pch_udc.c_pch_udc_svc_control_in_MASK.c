
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pch_udc_ep {int epsts; TYPE_1__* td_data; } ;
struct pch_udc_dev {int stall; struct pch_udc_ep* ep; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct pch_udc_dev*,int ) ;
 int FUNC_1 (struct pch_udc_ep*) ;
 int FUNC_2 (struct pch_udc_ep*) ;
 int FUNC_3 (struct pch_udc_ep*) ;
 int FUNC_4 (struct pch_udc_dev*,int ) ;
 int FUNC_5 (struct pch_udc_ep*) ;

__attribute__((used)) static void FUNC_6(struct pch_udc_dev *VAR_12)
{
 u32 VAR_13;
 struct pch_udc_ep *VAR_14;
 struct pch_udc_ep *VAR_15;

 VAR_14 = &VAR_12->ep[VAR_3];
 VAR_15 = &VAR_12->ep[VAR_4];
 VAR_13 = VAR_14->epsts;
 VAR_14->epsts = 0;

 if (!(VAR_13 & (VAR_7 | VAR_5 | VAR_6 |
         VAR_9 | VAR_8 | VAR_10 |
         VAR_11)))
  return;
 if ((VAR_13 & VAR_5))
  return;
 if (VAR_13 & VAR_6)
  return;
 if ((VAR_13 & VAR_9) && (!VAR_12->stall)) {
  FUNC_1(VAR_14);
  FUNC_0(VAR_12, VAR_0);
  VAR_15->td_data->status = (VAR_15->td_data->status &
     ~VAR_2) |
     VAR_1;
  FUNC_2(VAR_15);
  FUNC_4(VAR_12, VAR_0);
  FUNC_3(VAR_15);
 }

 if ((VAR_13 & VAR_7) && !(VAR_13 & VAR_9) &&
      !(VAR_13 & VAR_10))
  FUNC_5(VAR_14);
}
