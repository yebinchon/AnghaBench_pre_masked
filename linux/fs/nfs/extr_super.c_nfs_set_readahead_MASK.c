
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backing_dev_info {unsigned long io_pages; int ra_pages; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct backing_dev_info *VAR_1,
         unsigned long VAR_2)
{
 VAR_1->ra_pages = VAR_0;
 VAR_1->io_pages = VAR_2;
}
