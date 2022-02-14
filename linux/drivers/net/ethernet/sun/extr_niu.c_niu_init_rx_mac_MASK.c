
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct niu {int flags; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct niu*) ;
 int FUNC_1 (struct niu*) ;
 int FUNC_2 (struct niu*,int ) ;

__attribute__((used)) static void FUNC_3(struct niu *VAR_1)
{
 FUNC_2(VAR_1, VAR_1->dev->dev_addr);

 if (VAR_1->flags & VAR_0)
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_1);
}
