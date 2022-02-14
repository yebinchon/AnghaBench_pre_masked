
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ushc_data {int last_status; int int_urb; int flags; int mmc; TYPE_1__* int_data; } ;
struct urb {scalar_t__ status; struct ushc_data* context; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct urb *VAR_5)
{
 struct ushc_data *VAR_6 = VAR_5->context;
 u8 VAR_7, VAR_8;

 if (VAR_5->status < 0)
  return;

 VAR_7 = VAR_6->int_data->status;
 VAR_8 = VAR_6->last_status;
 VAR_6->last_status = VAR_7;
 if (!FUNC_4(VAR_1, &VAR_6->flags)
     && FUNC_5(VAR_2, &VAR_6->flags)
     && VAR_7 & VAR_4) {
  FUNC_1(VAR_6->mmc);
 }

 if ((VAR_7 ^ VAR_8) & VAR_3)
  FUNC_0(VAR_6->mmc, FUNC_2(100));

 if (!FUNC_5(VAR_2, &VAR_6->flags))
  FUNC_3(VAR_1, &VAR_6->flags);
 FUNC_6(VAR_6->int_urb, VAR_0);
}
