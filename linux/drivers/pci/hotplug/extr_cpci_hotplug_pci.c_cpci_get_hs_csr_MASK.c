
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct slot {int devfn; int bus; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int,int*) ;

u16 FUNC_2(struct slot *VAR_1)
{
 int VAR_2;
 u16 VAR_3;

 VAR_2 = FUNC_0(VAR_1->bus,
      VAR_1->devfn,
      VAR_0);
 if (!VAR_2)
  return 0xFFFF;
 if (FUNC_1(VAR_1->bus,
         VAR_1->devfn,
         VAR_2 + 2,
         &VAR_3))
  return 0xFFFF;
 return VAR_3;
}
