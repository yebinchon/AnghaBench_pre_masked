
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ range_end; scalar_t__ range_start; int nr_to_write; int sync_mode; } ;
struct page {TYPE_1__* mapping; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,struct page*) ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (struct page*,struct writeback_control*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;

__attribute__((used)) static int FUNC_5(struct page *VAR_3)
{
 int VAR_4 = 0;
 loff_t VAR_5 = FUNC_4(VAR_3);
 loff_t VAR_6 = VAR_5 + (loff_t)(VAR_1 - 1);
 struct writeback_control VAR_7 = {
  .sync_mode = VAR_2,
  .nr_to_write = 0,
  .range_start = VAR_5,
  .range_end = VAR_6,
 };

 FUNC_0(VAR_0, "Launder page: %p\n", VAR_3);

 if (FUNC_3(VAR_3))
  VAR_4 = FUNC_2(VAR_3, &VAR_7);

 FUNC_1(VAR_3, VAR_3->mapping->host);
 return VAR_4;
}
