
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qede_dev {TYPE_2__* arfs; TYPE_1__* ndev; } ;
struct TYPE_4__ {struct TYPE_4__* arfs_fltr_bmap; int arfs_list_lock; } ;
struct TYPE_3__ {int rx_cpu_rmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qede_dev*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct qede_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 void* FUNC_8 (int) ;

int FUNC_9(struct qede_dev *VAR_3)
{
 int VAR_4;

 VAR_3->arfs = FUNC_8(sizeof(*VAR_3->arfs));
 if (!VAR_3->arfs)
  return -VAR_0;

 FUNC_6(&VAR_3->arfs->arfs_list_lock);

 for (VAR_4 = 0; VAR_4 <= VAR_1; VAR_4++)
  FUNC_1(FUNC_2(VAR_3, VAR_4));

 VAR_3->arfs->arfs_fltr_bmap =
  FUNC_8(FUNC_5(sizeof(long),
       FUNC_0(VAR_2)));
 if (!VAR_3->arfs->arfs_fltr_bmap) {
  FUNC_7(VAR_3->arfs);
  VAR_3->arfs = ((void*)0);
  return -VAR_0;
 }
 return 0;
}
