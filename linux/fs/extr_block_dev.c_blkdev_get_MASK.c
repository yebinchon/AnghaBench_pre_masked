
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int flags; } ;
struct block_device {int bd_write_holder; int bd_mutex; struct gendisk* bd_disk; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct block_device*) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct block_device*,int,int ) ;
 int FUNC_4 (struct block_device*,struct block_device*,void*) ;
 int FUNC_5 (struct block_device*,struct block_device*,void*) ;
 struct block_device* FUNC_6 (struct block_device*,void*) ;
 int FUNC_7 (struct block_device*) ;
 int FUNC_8 (struct gendisk*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct block_device *VAR_3, fmode_t VAR_4, void *VAR_5)
{
 struct block_device *VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_2((VAR_4 & VAR_0) && !VAR_5);

 if ((VAR_4 & VAR_0) && VAR_5) {
  VAR_6 = FUNC_6(VAR_3, VAR_5);
  if (FUNC_0(VAR_6)) {
   FUNC_7(VAR_3);
   return FUNC_1(VAR_6);
  }
 }

 VAR_7 = FUNC_3(VAR_3, VAR_4, 0);

 if (VAR_6) {
  struct gendisk *VAR_8 = VAR_6->bd_disk;


  FUNC_9(&VAR_3->bd_mutex);
  if (!VAR_7)
   FUNC_5(VAR_3, VAR_6, VAR_5);
  else
   FUNC_4(VAR_3, VAR_6, VAR_5);







  if (!VAR_7 && (VAR_4 & VAR_1) && !VAR_3->bd_write_holder &&
      (VAR_8->flags & VAR_2)) {
   VAR_3->bd_write_holder = 1;
   FUNC_8(VAR_8);
  }

  FUNC_10(&VAR_3->bd_mutex);
  FUNC_7(VAR_6);
 }

 return VAR_7;
}
