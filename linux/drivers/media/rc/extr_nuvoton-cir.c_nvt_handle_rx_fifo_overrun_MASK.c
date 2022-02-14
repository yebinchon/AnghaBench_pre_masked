
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvt_dev {int rdev; scalar_t__ pkts; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvt_dev*) ;
 int FUNC_3 (struct nvt_dev*) ;

__attribute__((used)) static void FUNC_4(struct nvt_dev *VAR_0)
{
 FUNC_0(FUNC_3(VAR_0), "RX FIFO overrun detected, flushing data!");

 VAR_0->pkts = 0;
 FUNC_2(VAR_0);
 FUNC_1(VAR_0->rdev);
}
