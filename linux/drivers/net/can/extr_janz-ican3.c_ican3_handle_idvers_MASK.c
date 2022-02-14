
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ican3_msg {int data; } ;
struct ican3_dev {int ndev; } ;


 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct ican3_dev *VAR_0, struct ican3_msg *VAR_1)
{
 FUNC_0(VAR_0->ndev, "IDVERS response: %s\n", VAR_1->data);
}
