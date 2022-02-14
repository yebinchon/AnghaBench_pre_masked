
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef int u32 ;
struct gasket_dev {TYPE_1__* interrupt_data; } ;
struct TYPE_2__ {int num_configured; int interrupt_bar_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gasket_dev*,int ,scalar_t__) ;
 int FUNC_1 (struct gasket_dev*,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gasket_dev *VAR_3)
{
 int VAR_4;



 for (VAR_4 = 0; VAR_4 < VAR_3->interrupt_data->num_configured; VAR_4++) {

  ulong VAR_5 = 0x46800 +
     12 + VAR_4 * 16;
  u32 VAR_6 =
   FUNC_0(VAR_3,
        VAR_3->interrupt_data->interrupt_bar_index,
        VAR_5);
  if (!(VAR_6 & 1))
   continue;

  FUNC_1(VAR_3, 0,
        VAR_3->interrupt_data->interrupt_bar_index,
        VAR_5);
 }



}
