
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct cx25821_dev {TYPE_2__* channels; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__* sram_channels; } ;
struct TYPE_3__ {int int_stat; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct cx25821_dev*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct cx25821_dev *VAR_4 = VAR_3;
 u32 VAR_5;
 u32 VAR_6;
 int VAR_7, VAR_8 = 0;
 u32 VAR_9[8] = { 1, 2, 4, 8, 16, 32, 64, 128 };

 VAR_5 = FUNC_2(VAR_0);

 if (VAR_5 == 0)
  goto out;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_5 & VAR_9[VAR_7]) {
   VAR_6 = FUNC_2(VAR_4->channels[VAR_7].
    sram_channels->int_stat);

   if (VAR_6)
    VAR_8 += FUNC_1(VAR_4, VAR_7,
      VAR_6);

   FUNC_3(VAR_0, VAR_9[VAR_7]);
  }
 }

out:
 return FUNC_0(VAR_8);
}
