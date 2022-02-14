
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hva_dev {scalar_t__ regs; int protect_mutex; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;

 unsigned long VAR_4 ;
 int FUNC_0 (struct device*,char*,int ,unsigned long) ;
 int FUNC_1 (struct device*,char*,int ,...) ;
 struct device* FUNC_2 (struct hva_dev*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 unsigned long FUNC_6 (scalar_t__) ;

__attribute__((used)) static unsigned long int FUNC_7(struct hva_dev *VAR_5)
{
 struct device *VAR_6 = FUNC_2(VAR_5);
 unsigned long int VAR_7;

 if (FUNC_4(VAR_6) < 0) {
  FUNC_1(VAR_6, "%s     failed to get pm_runtime\n", VAR_2);
  FUNC_3(&VAR_5->protect_mutex);
  return -VAR_0;
 }

 VAR_7 = FUNC_6(VAR_5->regs + VAR_1) &
    VAR_4;

 FUNC_5(VAR_6);

 switch (VAR_7) {
 case 128:
  FUNC_0(VAR_6, "%s     IP hardware version 0x%lx\n",
   VAR_2, VAR_7);
  break;
 default:
  FUNC_1(VAR_6, "%s     unknown IP hardware version 0x%lx\n",
   VAR_2, VAR_7);
  VAR_7 = VAR_3;
  break;
 }

 return VAR_7;
}
