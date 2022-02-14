
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ashmem_area {unsigned long prot_mask; } ;
struct TYPE_2__ {int personality; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ashmem_area *VAR_6, unsigned long VAR_7)
{
 int VAR_8 = 0;

 FUNC_0(&VAR_4);


 if ((VAR_6->prot_mask & VAR_7) != VAR_7) {
  VAR_8 = -VAR_0;
  goto out;
 }


 if ((VAR_7 & VAR_2) && (VAR_5->personality & VAR_3))
  VAR_7 |= VAR_1;

 VAR_6->prot_mask = VAR_7;

out:
 FUNC_1(&VAR_4);
 return VAR_8;
}
