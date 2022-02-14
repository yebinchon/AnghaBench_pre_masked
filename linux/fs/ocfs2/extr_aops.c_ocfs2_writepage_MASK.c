
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {int index; TYPE_1__* mapping; } ;
struct TYPE_4__ {scalar_t__ ip_blkno; } ;
struct TYPE_3__ {int host; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (struct page*,int ,struct writeback_control*) ;
 int VAR_0 ;
 int FUNC_2 (unsigned long long,int ) ;

__attribute__((used)) static int FUNC_3(struct page *VAR_1, struct writeback_control *VAR_2)
{
 FUNC_2(
  (unsigned long long)FUNC_0(VAR_1->mapping->host)->ip_blkno,
  VAR_1->index);

 return FUNC_1(VAR_1, VAR_0, VAR_2);
}
