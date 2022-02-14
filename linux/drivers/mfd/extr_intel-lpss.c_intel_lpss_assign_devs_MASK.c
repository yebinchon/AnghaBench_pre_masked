
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfd_cell {int dummy; } ;
struct intel_lpss {unsigned int caps; unsigned int type; int cell; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,struct mfd_cell const*,int,int ) ;
 struct mfd_cell VAR_5 ;
 struct mfd_cell VAR_6 ;
 struct mfd_cell VAR_7 ;

__attribute__((used)) static int FUNC_1(struct intel_lpss *VAR_8)
{
 const struct mfd_cell *VAR_9;
 unsigned int VAR_10;

 VAR_10 = VAR_8->caps & VAR_3;
 VAR_10 >>= VAR_4;

 switch (VAR_10) {
 case 130:
  VAR_9 = &VAR_5;
  break;
 case 128:
  VAR_9 = &VAR_7;
  break;
 case 129:
  VAR_9 = &VAR_6;
  break;
 default:
  return -VAR_0;
 }

 VAR_8->cell = FUNC_0(VAR_8->dev, VAR_9, sizeof(*VAR_9), VAR_2);
 if (!VAR_8->cell)
  return -VAR_1;

 VAR_8->type = VAR_10;

 return 0;
}
