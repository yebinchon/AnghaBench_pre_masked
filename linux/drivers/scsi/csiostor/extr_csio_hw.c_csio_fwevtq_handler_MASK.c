
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {int fwevt_iq_idx; } ;


 int FUNC_0 (struct csio_hw*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct csio_hw*,int ) ;
 int FUNC_2 (struct csio_hw*,int ,int ,int *) ;
 int VAR_3 ;

int
FUNC_3(struct csio_hw *VAR_4)
{
 int VAR_5;

 if (FUNC_1(VAR_4, VAR_4->fwevt_iq_idx) == VAR_0) {
  FUNC_0(VAR_4, VAR_3);
  return -VAR_1;
 }

 VAR_5 = FUNC_2(VAR_4, VAR_4->fwevt_iq_idx,
      VAR_2, ((void*)0));
 return VAR_5;
}
