
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u8 ;
typedef unsigned long long u64 ;
struct nicpf {TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long long VAR_3 ;
 int FUNC_0 (int *,char*,unsigned long long,...) ;
 int FUNC_1 (struct nicpf*,unsigned long long,int) ;
 int FUNC_2 (struct nicpf*,unsigned long long) ;
 unsigned long long FUNC_3 (struct nicpf*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct nicpf *VAR_6 = (struct nicpf *)VAR_5;
 int VAR_7;
 u64 VAR_8;
 u8 VAR_9;

 if (VAR_4 == FUNC_4(VAR_6->pdev, VAR_1))
  VAR_7 = 0;
 else
  VAR_7 = 1;

 VAR_8 = FUNC_3(VAR_6, VAR_2 + (VAR_7 << 3));
 FUNC_0(&VAR_6->pdev->dev, "PF interrupt Mbox%d 0x%llx\n", VAR_7, VAR_8);
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  if (VAR_8 & (1ULL << VAR_9)) {
   FUNC_0(&VAR_6->pdev->dev, "Intr from VF %d\n",
    VAR_9 + (VAR_7 * VAR_3));

   FUNC_2(VAR_6, VAR_9 +
         (VAR_7 * VAR_3));
   FUNC_1(VAR_6, VAR_9, VAR_7);
  }
 }
 return VAR_0;
}
