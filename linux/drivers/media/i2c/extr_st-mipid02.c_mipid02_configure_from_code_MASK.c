
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__ data_id_rreg; int data_selection_ctrl; } ;
struct TYPE_3__ {scalar_t__ code; } ;
struct mipid02_dev {TYPE_2__ r; TYPE_1__ fmt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct mipid02_dev *VAR_3)
{
 u8 VAR_4;

 VAR_3->r.data_id_rreg = 0;

 if (VAR_3->fmt.code != VAR_1) {
  VAR_3->r.data_selection_ctrl |= VAR_2;

  VAR_4 = FUNC_0(VAR_3->fmt.code);
  if (!VAR_4)
   return -VAR_0;
  VAR_3->r.data_id_rreg = VAR_4;
 }

 return 0;
}
