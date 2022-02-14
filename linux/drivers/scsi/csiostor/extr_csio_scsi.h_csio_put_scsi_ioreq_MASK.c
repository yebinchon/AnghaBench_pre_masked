
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csio_scsim {int ioreq_freelist; } ;
struct TYPE_2__ {int sm_list; } ;
struct csio_ioreq {TYPE_1__ sm; } ;


 int FUNC_0 (struct csio_scsim*,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_2(struct csio_scsim *VAR_1, struct csio_ioreq *VAR_2)
{
 FUNC_1(&VAR_2->sm.sm_list, &VAR_1->ioreq_freelist);
 FUNC_0(VAR_1, VAR_0);
}
