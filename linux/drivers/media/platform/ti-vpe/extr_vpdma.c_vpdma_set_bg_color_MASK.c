
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vpdma_data_format {scalar_t__ type; } ;
struct vpdma_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct vpdma_data*,int ,int ) ;

void FUNC_1(struct vpdma_data *VAR_4,
  struct vpdma_data_format *VAR_5, u32 VAR_6)
{
 if (VAR_5->type == VAR_2)
  FUNC_0(VAR_4, VAR_0, VAR_6);
 else if (VAR_5->type == VAR_3)
  FUNC_0(VAR_4, VAR_1, VAR_6);
}
