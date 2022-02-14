
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bnad_iocmd_comp {scalar_t__ comp_status; int comp; struct bnad* bnad; } ;
struct bnad_drvinfo {scalar_t__ flash_status; int flash_attr; scalar_t__ cee_status; int cee_attr; int ioc_attr; } ;
struct TYPE_3__ {int ioc; } ;
struct TYPE_4__ {int flash; int cee; TYPE_1__ ioceth; } ;
struct bnad {int bna_lock; TYPE_2__ bna; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,struct bnad_iocmd_comp*) ;
 int FUNC_1 (int *,int *,int ,struct bnad_iocmd_comp*) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct bnad *VAR_3, void *VAR_4, u32 VAR_5)
{
 struct bnad_drvinfo *VAR_6 = (struct bnad_drvinfo *) VAR_4;
 struct bnad_iocmd_comp VAR_7;
 unsigned long VAR_8 = 0;
 int VAR_9 = VAR_0;


 FUNC_5(&VAR_3->bna_lock, VAR_8);
 FUNC_2(&VAR_3->bna.ioceth.ioc, &VAR_6->ioc_attr);
 FUNC_6(&VAR_3->bna_lock, VAR_8);


 VAR_7.bnad = VAR_3;
 VAR_7.comp_status = 0;
 FUNC_3(&VAR_7.comp);
 FUNC_5(&VAR_3->bna_lock, VAR_8);
 VAR_9 = FUNC_0(&VAR_3->bna.cee, &VAR_6->cee_attr,
    VAR_2, &VAR_7);
 if (VAR_9 != VAR_1) {
  FUNC_6(&VAR_3->bna_lock, VAR_8);
  goto out;
 }
 FUNC_6(&VAR_3->bna_lock, VAR_8);
 FUNC_7(&VAR_7.comp);
 VAR_6->cee_status = VAR_7.comp_status;


 VAR_7.comp_status = 0;
 FUNC_4(&VAR_7.comp);
 FUNC_5(&VAR_3->bna_lock, VAR_8);
 VAR_9 = FUNC_1(&VAR_3->bna.flash, &VAR_6->flash_attr,
    VAR_2, &VAR_7);
 if (VAR_9 != VAR_1) {
  FUNC_6(&VAR_3->bna_lock, VAR_8);
  goto out;
 }
 FUNC_6(&VAR_3->bna_lock, VAR_8);
 FUNC_7(&VAR_7.comp);
 VAR_6->flash_status = VAR_7.comp_status;
out:
 return VAR_9;
}
