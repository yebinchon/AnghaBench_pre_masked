
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pmc_dev {int init; } ;


 int VAR_0 ;
 struct pmc_dev VAR_1 ;
 int FUNC_0 (struct pmc_dev*,int,int ) ;

int FUNC_1(int VAR_2, u32 VAR_3)
{
 struct pmc_dev *VAR_4 = &VAR_1;

 if (!VAR_4->init)
  return -VAR_0;

 FUNC_0(VAR_4, VAR_2, VAR_3);
 return 0;
}
