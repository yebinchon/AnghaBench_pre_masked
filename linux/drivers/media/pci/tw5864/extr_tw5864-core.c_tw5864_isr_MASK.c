
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tw5864_dev {TYPE_1__* pci; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct tw5864_dev*) ;
 int FUNC_2 (struct tw5864_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_8, void *VAR_9)
{
 struct tw5864_dev *VAR_10 = VAR_9;
 u32 VAR_11;

 VAR_11 = FUNC_3(VAR_5) |
  FUNC_3(VAR_4) << 16;
 if (!VAR_11)
  return VAR_1;

 FUNC_4(VAR_3, 0xffff);
 FUNC_4(VAR_2, 0xffff);

 if (VAR_11 & VAR_7)
  FUNC_1(VAR_10);

 if (VAR_11 & VAR_6)
  FUNC_2(VAR_10);

 if (!(VAR_11 & (VAR_6 | VAR_7))) {
  FUNC_0(&VAR_10->pci->dev, "Unknown interrupt, status 0x%08X\n",
   VAR_11);
 }

 return VAR_0;
}
