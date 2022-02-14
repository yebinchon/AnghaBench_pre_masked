
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct scm_request {int list; TYPE_1__* aob; scalar_t__* request; } ;
struct msb {int flags; scalar_t__ data_addr; } ;
struct TYPE_2__ {struct msb* msb; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct scm_request *VAR_6)
{
 unsigned long VAR_7;
 struct msb *VAR_8;
 u64 VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_5 && VAR_6->request[VAR_10]; VAR_10++) {
  VAR_8 = &VAR_6->aob->msb[VAR_10];
  VAR_9 = VAR_8->data_addr;

  if ((VAR_8->flags & VAR_0) && VAR_9 &&
      FUNC_0(VAR_9, VAR_1))
   FUNC_2(FUNC_5(VAR_9), VAR_2);
 }

 FUNC_3(&VAR_4, VAR_7);
 FUNC_1(&VAR_6->list, &VAR_3);
 FUNC_4(&VAR_4, VAR_7);
}
