
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef scalar_t__ uint ;
struct page {int dummy; } ;
struct gasket_page_table_entry {scalar_t__ status; int offset; struct page* page; struct gasket_page_table_entry* sublevel; } ;
struct gasket_page_table {scalar_t__ num_simple_entries; scalar_t__ num_extended_entries; int mutex; struct gasket_page_table_entry* entries; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct gasket_page_table*,int ) ;
 scalar_t__ FUNC_1 (struct gasket_page_table*,int ) ;
 scalar_t__ FUNC_2 (struct gasket_page_table*,int ) ;
 scalar_t__ FUNC_3 (struct gasket_page_table*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct gasket_page_table *VAR_2,
      ulong VAR_3, struct page **VAR_4,
      ulong *VAR_5)
{
 uint VAR_6;
 struct gasket_page_table_entry *VAR_7;

 FUNC_4(&VAR_2->mutex);
 if (FUNC_0(VAR_2, VAR_3)) {
  VAR_6 = FUNC_3(VAR_2, VAR_3);
  if (VAR_6 >= VAR_2->num_simple_entries)
   goto fail;

  VAR_7 = VAR_2->entries + VAR_6;
  if (VAR_7->status != VAR_1)
   goto fail;
 } else {

  VAR_6 = FUNC_1(VAR_2, VAR_3);
  if (VAR_6 >= VAR_2->num_extended_entries)
   goto fail;

  VAR_7 = VAR_2->entries + VAR_2->num_simple_entries + VAR_6;
  if (VAR_7->status != VAR_1)
   goto fail;


  VAR_6 = FUNC_2(VAR_2, VAR_3);
  VAR_7 = VAR_7->sublevel + VAR_6;
  if (VAR_7->status != VAR_1)
   goto fail;
 }

 *VAR_4 = VAR_7->page;
 *VAR_5 = VAR_7->offset;
 FUNC_5(&VAR_2->mutex);
 return 0;

fail:
 *VAR_4 = ((void*)0);
 *VAR_5 = 0;
 FUNC_5(&VAR_2->mutex);
 return -VAR_0;
}
