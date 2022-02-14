
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct balloon_dev_info {int dummy; } ;
struct virtio_balloon {size_t num_pfns; int balloon_lock; int deflate_vq; scalar_t__ num_pages; scalar_t__ pfns; struct balloon_dev_info vb_dev_info; } ;
struct page {int lru; } ;


 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 struct page* FUNC_2 (struct balloon_dev_info*) ;
 int FUNC_3 (int *,int *) ;
 size_t FUNC_4 (size_t,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (struct virtio_balloon*,int *) ;
 int FUNC_8 (struct virtio_balloon*,scalar_t__,struct page*) ;
 int FUNC_9 (struct virtio_balloon*,int ) ;

__attribute__((used)) static unsigned FUNC_10(struct virtio_balloon *VAR_2, size_t VAR_3)
{
 unsigned VAR_4;
 struct page *VAR_5;
 struct balloon_dev_info *VAR_6 = &VAR_2->vb_dev_info;
 FUNC_1(VAR_1);


 VAR_3 = FUNC_4(VAR_3, FUNC_0(VAR_2->pfns));

 FUNC_5(&VAR_2->balloon_lock);

 VAR_3 = FUNC_4(VAR_3, (size_t)VAR_2->num_pages);
 for (VAR_2->num_pfns = 0; VAR_2->num_pfns < VAR_3;
      VAR_2->num_pfns += VAR_0) {
  VAR_5 = FUNC_2(VAR_6);
  if (!VAR_5)
   break;
  FUNC_8(VAR_2, VAR_2->pfns + VAR_2->num_pfns, VAR_5);
  FUNC_3(&VAR_5->lru, &VAR_1);
  VAR_2->num_pages -= VAR_0;
 }

 VAR_4 = VAR_2->num_pfns;





 if (VAR_2->num_pfns != 0)
  FUNC_9(VAR_2, VAR_2->deflate_vq);
 FUNC_7(VAR_2, &VAR_1);
 FUNC_6(&VAR_2->balloon_lock);
 return VAR_4;
}
