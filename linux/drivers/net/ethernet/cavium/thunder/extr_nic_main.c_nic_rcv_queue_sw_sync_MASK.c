
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct nicpf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct nicpf*,int ) ;
 int FUNC_2 (struct nicpf*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct nicpf *VAR_2)
{
 u16 VAR_3 = ~0x00;

 FUNC_2(VAR_2, VAR_0, 0x01);

 while (VAR_3) {
  if (FUNC_1(VAR_2, VAR_1) & 0x1)
   break;
  VAR_3--;
 }
 FUNC_2(VAR_2, VAR_0, 0x00);
 if (!VAR_3) {
  FUNC_0(&VAR_2->pdev->dev, "Receive queue software sync failed");
  return 1;
 }
 return 0;
}
