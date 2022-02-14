
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcssblk_dev_info {int end; int start; } ;
typedef long resource_size_t ;
typedef unsigned long pgoff_t ;
typedef int pfn_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static long
FUNC_2(struct dcssblk_dev_info *VAR_3, pgoff_t VAR_4,
  long VAR_5, void **VAR_6, pfn_t *VAR_7)
{
 resource_size_t VAR_8 = VAR_4 * VAR_0;
 unsigned long VAR_9;

 VAR_9 = VAR_3->end - VAR_3->start + 1;
 if (VAR_6)
  *VAR_6 = (void *) VAR_3->start + VAR_8;
 if (VAR_7)
  *VAR_7 = FUNC_1(FUNC_0(VAR_3->start + VAR_8),
    VAR_1|VAR_2);

 return (VAR_9 - VAR_8) / VAR_0;
}
