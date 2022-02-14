
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uas_dev_info {int data_urbs; int sense_urbs; int work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (struct uas_dev_info*) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(struct uas_dev_info *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 VAR_4 = VAR_2;
 do {
  FUNC_0(&VAR_3->work);

  VAR_5 = FUNC_3(&VAR_3->sense_urbs, 5000);
  if (VAR_5 == 0)
   return -VAR_0;

  VAR_5 = FUNC_3(&VAR_3->data_urbs, 500);
  if (VAR_5 == 0)
   return -VAR_0;

  if (FUNC_1(VAR_2, VAR_4 + 5 * VAR_1))
   return -VAR_0;
 } while (!FUNC_2(VAR_3));

 return 0;
}
