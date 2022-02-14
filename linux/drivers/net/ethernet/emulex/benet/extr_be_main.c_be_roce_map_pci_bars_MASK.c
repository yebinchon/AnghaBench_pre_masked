
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int total_size; int io_addr; } ;
struct be_adapter {int pdev; TYPE_1__ roce_db; } ;


 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_4(struct be_adapter *VAR_0)
{
 if (FUNC_3(VAR_0)) {
  VAR_0->roce_db.size = 4096;
  VAR_0->roce_db.io_addr = FUNC_2(VAR_0->pdev,
             FUNC_0(VAR_0));
  VAR_0->roce_db.total_size = FUNC_1(VAR_0->pdev,
              FUNC_0(VAR_0));
 }
 return 0;
}
