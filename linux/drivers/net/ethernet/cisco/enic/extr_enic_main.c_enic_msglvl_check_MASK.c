
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct enic {scalar_t__ msg_enable; int netdev; int vdev; } ;


 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct enic *VAR_0)
{
 u32 VAR_1 = FUNC_1(VAR_0->vdev);

 if (VAR_1 != VAR_0->msg_enable) {
  FUNC_0(VAR_0->netdev, "msg lvl changed from 0x%x to 0x%x\n",
   VAR_0->msg_enable, VAR_1);
  VAR_0->msg_enable = VAR_1;
 }
}
