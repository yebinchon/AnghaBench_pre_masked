
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct bnad_iocmd_comp {scalar_t__ comp_status; int comp; struct bnad* bnad; } ;
struct TYPE_3__ {int flash; } ;
struct bnad {int bna_lock; TYPE_1__ bna; } ;
struct bfa_flash_attr {scalar_t__ npart; TYPE_2__* part; } ;
struct TYPE_4__ {scalar_t__ part_off; scalar_t__ part_size; scalar_t__ part_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,struct bfa_flash_attr*,int ,struct bnad_iocmd_comp*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bfa_flash_attr*) ;
 struct bfa_flash_attr* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static u32
FUNC_7(struct bnad *VAR_3, u32 VAR_4,
    u32 *VAR_5)
{
 struct bfa_flash_attr *VAR_6;
 struct bnad_iocmd_comp VAR_7;
 u32 VAR_8, VAR_9 = 0, VAR_10;
 unsigned long VAR_11 = 0;

 VAR_6 = FUNC_3(sizeof(struct bfa_flash_attr), VAR_1);
 if (!VAR_6)
  return 0;

 VAR_7.bnad = VAR_3;
 VAR_7.comp_status = 0;

 FUNC_1(&VAR_7.comp);
 FUNC_4(&VAR_3->bna_lock, VAR_11);
 VAR_10 = FUNC_0(&VAR_3->bna.flash, VAR_6,
    VAR_2, &VAR_7);
 if (VAR_10 != VAR_0) {
  FUNC_5(&VAR_3->bna_lock, VAR_11);
  FUNC_2(VAR_6);
  return 0;
 }
 FUNC_5(&VAR_3->bna_lock, VAR_11);
 FUNC_6(&VAR_7.comp);
 VAR_10 = VAR_7.comp_status;


 if (VAR_10 == VAR_0) {
  for (VAR_8 = 0; VAR_8 < VAR_6->npart; VAR_8++) {
   if (VAR_4 >= VAR_6->part[VAR_8].part_off &&
       VAR_4 < (VAR_6->part[VAR_8].part_off +
          VAR_6->part[VAR_8].part_size)) {
    VAR_9 = VAR_6->part[VAR_8].part_type;
    *VAR_5 = VAR_6->part[VAR_8].part_off;
    break;
   }
  }
 }
 FUNC_2(VAR_6);
 return VAR_9;
}
