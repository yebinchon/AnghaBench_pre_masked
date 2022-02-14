
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kirin_pcie {TYPE_1__* pci; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct kirin_pcie*,int ) ;
 int FUNC_2 (struct kirin_pcie*,int,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct kirin_pcie *VAR_12)
{
 struct device *VAR_13 = VAR_12->pci->dev;
 u32 VAR_14;

 VAR_14 = FUNC_1(VAR_12, VAR_2);
 VAR_14 &= ~VAR_5;
 FUNC_2(VAR_12, VAR_14, VAR_2);

 VAR_14 = FUNC_1(VAR_12, VAR_1);
 VAR_14 &= ~VAR_4;
 FUNC_2(VAR_12, VAR_14, VAR_1);
 FUNC_3(VAR_11, VAR_10);

 VAR_14 = FUNC_1(VAR_12, VAR_2);
 VAR_14 &= ~VAR_6;
 FUNC_2(VAR_12, VAR_14, VAR_2);

 FUNC_3(VAR_9, VAR_8);
 VAR_14 = FUNC_1(VAR_12, VAR_3);
 if (VAR_14 & VAR_7) {
  FUNC_0(VAR_13, "PIPE clk is not stable\n");
  return -VAR_0;
 }

 return 0;
}
