
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdpvr_fh {int legacy_mode; int fh; } ;
struct file {struct hdpvr_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hdpvr_fh* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2)
{
 struct hdpvr_fh *VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);

 if (VAR_3 == ((void*)0))
  return -VAR_0;
 VAR_3->legacy_mode = 1;
 FUNC_2(&VAR_3->fh, FUNC_3(VAR_2));
 FUNC_1(&VAR_3->fh);
 VAR_2->private_data = VAR_3;
 return 0;
}
