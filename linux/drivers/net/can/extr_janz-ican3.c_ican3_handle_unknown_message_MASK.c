
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ican3_msg {int len; int spec; } ;
struct ican3_dev {int ndev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ican3_dev *VAR_0,
     struct ican3_msg *VAR_1)
{
 FUNC_1(VAR_0->ndev, "received unknown message: spec 0x%.2x length %d\n",
      VAR_1->spec, FUNC_0(VAR_1->len));
}
