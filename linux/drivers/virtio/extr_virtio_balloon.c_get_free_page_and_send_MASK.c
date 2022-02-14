
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int num_free; } ;
struct virtio_balloon {int free_page_list_lock; int num_free_page_blocks; int free_page_list; struct virtqueue* free_page_vq; } ;
struct scatterlist {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct page* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct page*) ;
 int FUNC_2 (unsigned long,int ) ;
 void* FUNC_3 (struct page*) ;
 int FUNC_4 (struct scatterlist*,void*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct virtqueue*,struct scatterlist*,int,void*,int ) ;
 scalar_t__ FUNC_9 (struct virtqueue*,int*) ;
 int FUNC_10 (struct virtqueue*) ;

__attribute__((used)) static int FUNC_11(struct virtio_balloon *VAR_5)
{
 struct virtqueue *VAR_6 = VAR_5->free_page_vq;
 struct page *VAR_7;
 struct scatterlist VAR_8;
 int VAR_9, VAR_10;
 void *VAR_11;


 while (FUNC_9(VAR_6, &VAR_10))
  ;

 VAR_7 = FUNC_0(VAR_2,
      VAR_3);




 if (!VAR_7)
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_7);
 FUNC_4(&VAR_8, VAR_11, VAR_4);

 if (VAR_6->num_free > 1) {
  VAR_9 = FUNC_8(VAR_6, &VAR_8, 1, VAR_11, VAR_1);
  if (FUNC_7(VAR_9)) {
   FUNC_2((unsigned long)VAR_11,
       VAR_3);
   return VAR_9;
  }
  FUNC_10(VAR_6);
  FUNC_5(&VAR_5->free_page_list_lock);
  FUNC_1(&VAR_5->free_page_list, VAR_7);
  VAR_5->num_free_page_blocks++;
  FUNC_6(&VAR_5->free_page_list_lock);
 } else {




  FUNC_2((unsigned long)VAR_11, VAR_3);
 }

 return 0;
}
