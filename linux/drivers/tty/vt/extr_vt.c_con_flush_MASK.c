
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vc_data {int vc_y; TYPE_1__* vc_sw; } ;
struct TYPE_2__ {int (* con_putcs ) (struct vc_data*,int *,int,int ,int) ;} ;


 int FUNC_0 (struct vc_data*,int *,int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_0, unsigned long VAR_1,
  unsigned long VAR_2, int *VAR_3)
{
 if (*VAR_3 < 0)
  return;

 VAR_0->vc_sw->con_putcs(VAR_0, (u16 *)VAR_1,
   (u16 *)VAR_2 - (u16 *)VAR_1, VAR_0->vc_y, *VAR_3);
 *VAR_3 = -1;
}
