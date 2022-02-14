
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int start; } ;
struct dio_dev {scalar_t__ scode; TYPE_2__ resource; } ;
struct TYPE_4__ {void* screen_base; int cmap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct dio_dev *VAR_3)
{
 FUNC_4(&VAR_1);
 if (VAR_3->scode >= VAR_0)
  FUNC_1((void *)VAR_2);
 FUNC_2(VAR_3->resource.start, FUNC_3(&VAR_3->resource));
 FUNC_0(&VAR_1.cmap);
 if (VAR_1.screen_base)
  FUNC_1(VAR_1.screen_base);
}
