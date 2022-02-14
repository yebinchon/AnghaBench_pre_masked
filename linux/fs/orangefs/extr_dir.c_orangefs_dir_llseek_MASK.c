
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_dir_part {struct orangefs_dir_part* next; } ;
struct orangefs_dir {int end; struct orangefs_dir_part* part; int token; } ;
struct file {struct orangefs_dir* private_data; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,int,int) ;
 int FUNC_1 (struct orangefs_dir_part*) ;

__attribute__((used)) static loff_t FUNC_2(struct file *VAR_2, loff_t VAR_3,
    int VAR_4)
{
 struct orangefs_dir *VAR_5 = VAR_2->private_data;




 if (!VAR_4 && VAR_3 < VAR_5->end) {
  struct orangefs_dir_part *VAR_6 = VAR_5->part;
  while (VAR_6) {
   struct orangefs_dir_part *VAR_7 = VAR_6->next;
   FUNC_1(VAR_6);
   VAR_6 = VAR_7;
  }
  VAR_5->token = VAR_0;
  VAR_5->part = ((void*)0);
  VAR_5->end = 1 << VAR_1;
 }
 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
