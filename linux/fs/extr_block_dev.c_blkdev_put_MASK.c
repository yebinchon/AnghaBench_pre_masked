
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct block_device {scalar_t__ bd_holders; int bd_write_holder; int bd_mutex; int bd_disk; TYPE_1__* bd_contains; int * bd_holder; } ;
typedef int fmode_t ;
struct TYPE_2__ {scalar_t__ bd_holders; int * bd_holder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct block_device*,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct block_device *VAR_3, fmode_t VAR_4)
{
 FUNC_4(&VAR_3->bd_mutex);

 if (VAR_4 & VAR_1) {
  bool VAR_5;






  FUNC_6(&VAR_2);

  FUNC_0(--VAR_3->bd_holders < 0);
  FUNC_0(--VAR_3->bd_contains->bd_holders < 0);


  if ((VAR_5 = !VAR_3->bd_holders))
   VAR_3->bd_holder = ((void*)0);
  if (!VAR_3->bd_contains->bd_holders)
   VAR_3->bd_contains->bd_holder = ((void*)0);

  FUNC_7(&VAR_2);





  if (VAR_5 && VAR_3->bd_write_holder) {
   FUNC_3(VAR_3->bd_disk);
   VAR_3->bd_write_holder = 0;
  }
 }






 FUNC_2(VAR_3->bd_disk, VAR_0);

 FUNC_5(&VAR_3->bd_mutex);

 FUNC_1(VAR_3, VAR_4, 0);
}
