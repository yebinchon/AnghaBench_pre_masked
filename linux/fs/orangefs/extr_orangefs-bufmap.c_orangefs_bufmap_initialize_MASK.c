
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_bufmap {int readdir_index_array; int buffer_index_array; int desc_count; } ;
struct ORANGEFS_dev_map_desc {int size; int count; unsigned long total_size; scalar_t__ ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (unsigned long) ;
 int VAR_4 ;
 struct orangefs_bufmap* VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,int ,int ) ;
 struct orangefs_bufmap* FUNC_4 (struct ORANGEFS_dev_map_desc*) ;
 int FUNC_5 (struct orangefs_bufmap*) ;
 int VAR_6 ;
 int FUNC_6 (struct orangefs_bufmap*,struct ORANGEFS_dev_map_desc*) ;
 int FUNC_7 (struct orangefs_bufmap*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct ORANGEFS_dev_map_desc *VAR_9)
{
 struct orangefs_bufmap *VAR_10;
 int VAR_11 = -VAR_0;

 FUNC_1(VAR_2,
       "orangefs_bufmap_initialize: called (ptr ("
       "%p) sz (%d) cnt(%d).\n",
       VAR_9->ptr,
       VAR_9->size,
       VAR_9->count);

 if (VAR_9->total_size < 0 ||
     VAR_9->size < 0 ||
     VAR_9->count < 0)
  goto out;





 if (FUNC_0((unsigned long)VAR_9->ptr) !=
     (unsigned long)VAR_9->ptr) {
  FUNC_2("orangefs error: memory alignment (front). %p\n",
      VAR_9->ptr);
  goto out;
 }

 if (FUNC_0(((unsigned long)VAR_9->ptr + VAR_9->total_size))
     != (unsigned long)(VAR_9->ptr + VAR_9->total_size)) {
  FUNC_2("orangefs error: memory alignment (back).(%p + %d)\n",
      VAR_9->ptr,
      VAR_9->total_size);
  goto out;
 }

 if (VAR_9->total_size != (VAR_9->size * VAR_9->count)) {
  FUNC_2("orangefs error: user provided an oddly sized buffer: (%d, %d, %d)\n",
      VAR_9->total_size,
      VAR_9->size,
      VAR_9->count);
  goto out;
 }

 if ((VAR_9->size % VAR_4) != 0) {
  FUNC_2("orangefs error: bufmap size not page size divisible (%d).\n",
      VAR_9->size);
  goto out;
 }

 VAR_11 = -VAR_1;
 VAR_10 = FUNC_4(VAR_9);
 if (!VAR_10)
  goto out;

 VAR_11 = FUNC_6(VAR_10, VAR_9);
 if (VAR_11)
  goto out_free_bufmap;


 FUNC_8(&VAR_6);
 if (VAR_5) {
  FUNC_9(&VAR_6);
  FUNC_2("orangefs: error: bufmap already initialized.\n");
  VAR_11 = -VAR_0;
  goto out_unmap_bufmap;
 }
 VAR_5 = VAR_10;
 FUNC_3(&VAR_8,
  VAR_10->desc_count,
  VAR_10->buffer_index_array);
 FUNC_3(&VAR_7,
  VAR_3,
  VAR_10->readdir_index_array);
 FUNC_9(&VAR_6);

 FUNC_1(VAR_2,
       "orangefs_bufmap_initialize: exiting normally\n");
 return 0;

out_unmap_bufmap:
 FUNC_7(VAR_10);
out_free_bufmap:
 FUNC_5(VAR_10);
out:
 return VAR_11;
}
