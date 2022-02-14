
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct orangefs_bufmap_desc {int dummy; } ;
struct orangefs_bufmap {int total_size; int desc_count; int page_count; struct orangefs_bufmap* buffer_index_array; struct orangefs_bufmap* desc_array; void* page_array; int desc_size; int desc_shift; } ;
struct ORANGEFS_dev_map_desc {int total_size; int count; int size; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct orangefs_bufmap*) ;
 void* FUNC_4 (int,int ) ;

__attribute__((used)) static struct orangefs_bufmap *
FUNC_5(struct ORANGEFS_dev_map_desc *VAR_3)
{
 struct orangefs_bufmap *VAR_4;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  goto out;

 VAR_4->total_size = VAR_3->total_size;
 VAR_4->desc_count = VAR_3->count;
 VAR_4->desc_size = VAR_3->size;
 VAR_4->desc_shift = FUNC_1(VAR_4->desc_size);

 VAR_4->buffer_index_array =
  FUNC_4(FUNC_0(VAR_4->desc_count, VAR_0), VAR_1);
 if (!VAR_4->buffer_index_array)
  goto out_free_bufmap;

 VAR_4->desc_array =
  FUNC_2(VAR_4->desc_count, sizeof(struct orangefs_bufmap_desc),
   VAR_1);
 if (!VAR_4->desc_array)
  goto out_free_index_array;

 VAR_4->page_count = VAR_4->total_size / VAR_2;


 VAR_4->page_array =
  FUNC_2(VAR_4->page_count, sizeof(struct page *), VAR_1);
 if (!VAR_4->page_array)
  goto out_free_desc_array;

 return VAR_4;

out_free_desc_array:
 FUNC_3(VAR_4->desc_array);
out_free_index_array:
 FUNC_3(VAR_4->buffer_index_array);
out_free_bufmap:
 FUNC_3(VAR_4);
out:
 return ((void*)0);
}
