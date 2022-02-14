
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct nvmet_req {TYPE_1__* ns; } ;
struct TYPE_2__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;

u16 FUNC_1(struct nvmet_req *VAR_3)
{
 if (FUNC_0(VAR_3->ns->bdev, VAR_0, ((void*)0)))
  return VAR_2 | VAR_1;
 return 0;
}
