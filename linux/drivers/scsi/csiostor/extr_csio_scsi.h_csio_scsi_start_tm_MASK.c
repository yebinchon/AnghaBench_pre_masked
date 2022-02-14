
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_ioreq {int drv_status; int sm; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct csio_ioreq *VAR_1)
{
 FUNC_0(&VAR_1->sm, VAR_0);
 return VAR_1->drv_status;
}
