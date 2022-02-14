
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rio_dev {int hopcount; int destid; TYPE_1__* net; } ;
struct TYPE_2__ {int hport; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct rio_dev *VAR_0)
{
 return FUNC_0(VAR_0->net->hport,
     VAR_0->destid, VAR_0->hopcount);
}
