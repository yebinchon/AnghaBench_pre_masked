
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enic {int netdev; int vdev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct enic *VAR_0)
{
 int VAR_1 = FUNC_4(VAR_0->vdev);
 int VAR_2 = FUNC_2(VAR_0->netdev);

 if (VAR_1 && !VAR_2) {
  FUNC_0(VAR_0->netdev, "Link UP\n");
  FUNC_3(VAR_0->netdev);
 } else if (!VAR_1 && VAR_2) {
  FUNC_0(VAR_0->netdev, "Link DOWN\n");
  FUNC_1(VAR_0->netdev);
 }
}
