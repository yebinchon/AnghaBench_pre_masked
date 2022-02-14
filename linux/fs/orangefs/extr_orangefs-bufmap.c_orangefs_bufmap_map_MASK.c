
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct orangefs_bufmap {int desc_size; int page_count; int desc_count; TYPE_1__* desc_array; int * page_array; } ;
struct ORANGEFS_dev_map_desc {scalar_t__ ptr; } ;
struct TYPE_2__ {int array_count; scalar_t__ uaddr; int * page_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int,int ,int *) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct orangefs_bufmap *VAR_3,
  struct ORANGEFS_dev_map_desc *VAR_4)
{
 int VAR_5 = VAR_3->desc_size / VAR_2;
 int VAR_6 = 0, VAR_7, VAR_8;


 VAR_7 = FUNC_2((unsigned long)VAR_4->ptr,
        VAR_3->page_count, VAR_1, VAR_3->page_array);

 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_7 != VAR_3->page_count) {
  FUNC_3("orangefs error: asked for %d pages, only got %d.\n",
    VAR_3->page_count, VAR_7);

  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   FUNC_0(VAR_3->page_array[VAR_8]);
   FUNC_4(VAR_3->page_array[VAR_8]);
  }
  return -VAR_0;
 }







 for (VAR_8 = 0; VAR_8 < VAR_3->page_count; VAR_8++)
  FUNC_1(VAR_3->page_array[VAR_8]);


 for (VAR_6 = 0, VAR_8 = 0; VAR_8 < VAR_3->desc_count; VAR_8++) {
  VAR_3->desc_array[VAR_8].page_array = &VAR_3->page_array[VAR_6];
  VAR_3->desc_array[VAR_8].array_count = VAR_5;
  VAR_3->desc_array[VAR_8].uaddr =
      (VAR_4->ptr + (VAR_8 * VAR_5 * VAR_2));
  VAR_6 += VAR_5;
 }

 return 0;
}
