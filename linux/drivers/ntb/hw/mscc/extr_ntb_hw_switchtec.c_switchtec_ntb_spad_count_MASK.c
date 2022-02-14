
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchtec_ntb {TYPE_1__* self_shared; } ;
struct ntb_dev {int dummy; } ;
struct TYPE_2__ {int spad; } ;


 int FUNC_0 (int ) ;
 struct switchtec_ntb* FUNC_1 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_2(struct ntb_dev *VAR_0)
{
 struct switchtec_ntb *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->self_shared->spad);
}
