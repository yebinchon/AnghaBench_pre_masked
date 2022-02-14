
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int function; } ;
struct pp_ctx {TYPE_1__ timer; int lock; int count; struct ntb_dev* ntb; } ;
struct ntb_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pp_ctx* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 struct pp_ctx* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct pp_ctx *FUNC_5(struct ntb_dev *VAR_5)
{
 struct pp_ctx *VAR_6;

 VAR_6 = FUNC_2(&VAR_5->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_6->ntb = VAR_5;
 FUNC_1(&VAR_6->count, 0);
 FUNC_4(&VAR_6->lock);
 FUNC_3(&VAR_6->timer, VAR_0, VAR_3);
 VAR_6->timer.function = VAR_4;

 return VAR_6;
}
