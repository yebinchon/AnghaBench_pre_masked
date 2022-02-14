
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* write ) (TYPE_2__*,int *,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int *,int) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;

void FUNC_3(u8 *VAR_2, int VAR_3)
{
 FUNC_0(&VAR_1);

 if ((VAR_2 != ((void*)0)) && (VAR_3 > 0) && (VAR_0 != ((void*)0)))
  VAR_0->ops->write(VAR_0, VAR_2, VAR_3);

 FUNC_1(&VAR_1);
}
