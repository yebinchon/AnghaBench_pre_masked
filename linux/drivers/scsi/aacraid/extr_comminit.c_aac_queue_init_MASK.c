
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {void** consumer; void** producer; } ;
struct aac_queue {int entries; TYPE_1__ headers; int lockdata; int * lock; int qfull; int cmdq; int cmdready; struct aac_dev* dev; int numpending; } ;
struct aac_dev {int dummy; } ;
typedef void* __le32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct aac_dev * VAR_0, struct aac_queue * VAR_1, u32 *VAR_2, int VAR_3)
{
 FUNC_1(&VAR_1->numpending, 0);
 VAR_1->dev = VAR_0;
 FUNC_3(&VAR_1->cmdready);
 FUNC_0(&VAR_1->cmdq);
 FUNC_3(&VAR_1->qfull);
 FUNC_4(&VAR_1->lockdata);
 VAR_1->lock = &VAR_1->lockdata;
 VAR_1->headers.producer = (__le32 *)VAR_2;
 VAR_1->headers.consumer = (__le32 *)(VAR_2+1);
 *(VAR_1->headers.producer) = FUNC_2(VAR_3);
 *(VAR_1->headers.consumer) = FUNC_2(VAR_3);
 VAR_1->entries = VAR_3;
}
