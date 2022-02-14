
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orc_host {int allocation_lock; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct orc_host*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct orc_host*) ;

__attribute__((used)) static int FUNC_5(struct orc_host * VAR_4)
{
 unsigned long VAR_5;

 FUNC_2(&VAR_4->allocation_lock, VAR_5);

 FUNC_0(VAR_4);

 FUNC_1(VAR_2, VAR_4->base + VAR_1);


 if (FUNC_4(VAR_4) == 0) {
  FUNC_3(&VAR_4->allocation_lock, VAR_5);
  return VAR_0;
 } else {
  FUNC_3(&VAR_4->allocation_lock, VAR_5);
  return VAR_3;
 }
}
