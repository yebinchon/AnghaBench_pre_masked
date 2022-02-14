
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_ns {int * bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;

void FUNC_1(struct nvmet_ns *VAR_2)
{
 if (VAR_2->bdev) {
  FUNC_0(VAR_2->bdev, VAR_1 | VAR_0);
  VAR_2->bdev = ((void*)0);
 }
}
