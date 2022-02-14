
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbcir_data {scalar_t__ rxstate; scalar_t__ sbase; scalar_t__ carrier_report_enabled; } ;
struct rc_dev {struct wbcir_data* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct wbcir_data*) ;

__attribute__((used)) static void
FUNC_2(struct rc_dev *VAR_4, bool VAR_5)
{
 struct wbcir_data *VAR_6 = VAR_4->priv;

 if (!VAR_5 && VAR_6->rxstate == VAR_2)
  VAR_6->rxstate = VAR_1;

 if (VAR_5 && VAR_6->rxstate != VAR_2) {
  VAR_6->rxstate = VAR_2;

  if (VAR_6->carrier_report_enabled)
   FUNC_1(VAR_6);


  FUNC_0(VAR_3, VAR_6->sbase + VAR_0);
 }
}
