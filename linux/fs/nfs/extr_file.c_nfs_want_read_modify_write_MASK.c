
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct file {int f_mode; TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*,int ,unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct file *VAR_1, struct page *VAR_2,
   loff_t VAR_3, unsigned int VAR_4)
{




 if (FUNC_1(VAR_2) || FUNC_0(VAR_2) ||
     FUNC_2(VAR_2, VAR_3, VAR_4))
  return 0;

 if (FUNC_3(VAR_1->f_mapping->host))
  return 1;

 if (VAR_1->f_mode & VAR_0)
  return 1;
 return 0;
}
