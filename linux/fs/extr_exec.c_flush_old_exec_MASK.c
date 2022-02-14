
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct linux_binprm {int per_clear; int * mm; int file; } ;
struct TYPE_3__ {int flags; int files; int personality; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct linux_binprm*,int ) ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

int FUNC_7(struct linux_binprm * VAR_7)
{
 int VAR_8;





 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8)
  goto out;






 FUNC_6(VAR_7->mm, VAR_7->file);




 FUNC_0(VAR_7, 0);
 VAR_8 = FUNC_3(VAR_7->mm);
 if (VAR_8)
  goto out;







 VAR_7->mm = ((void*)0);

 FUNC_5(VAR_5);
 VAR_6->flags &= ~(VAR_4 | VAR_0 | VAR_1 |
     VAR_2 | VAR_3);
 FUNC_4();
 VAR_6->personality &= ~VAR_7->per_clear;







 FUNC_2(VAR_6->files);
 return 0;

out:
 return VAR_8;
}
