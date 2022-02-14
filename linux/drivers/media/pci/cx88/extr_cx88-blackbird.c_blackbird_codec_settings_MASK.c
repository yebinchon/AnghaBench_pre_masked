
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cx88_core {int tvnorm; int height; int width; } ;
struct TYPE_3__ {int height; int width; } ;
struct cx8802_dev {TYPE_1__ cxhdl; struct cx88_core* core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx8802_dev*,int ,int,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct cx8802_dev *VAR_2)
{
 struct cx88_core *VAR_3 = VAR_2->core;


 FUNC_0(VAR_2, VAR_0, 2, 0,
     VAR_3->height, VAR_3->width);

 VAR_2->cxhdl.width = VAR_3->width;
 VAR_2->cxhdl.height = VAR_3->height;
 FUNC_1(&VAR_2->cxhdl,
     VAR_2->core->tvnorm & VAR_1);
 FUNC_2(&VAR_2->cxhdl);
}
