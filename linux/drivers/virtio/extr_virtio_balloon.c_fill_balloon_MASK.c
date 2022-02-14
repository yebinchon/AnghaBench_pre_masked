
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_balloon {unsigned int num_pfns; int balloon_lock; int inflate_vq; TYPE_1__* vdev; int num_pages; scalar_t__ pfns; int vb_dev_info; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct page*,int) ;
 struct page* FUNC_3 () ;
 int FUNC_4 (int *,struct page*) ;
 struct page* FUNC_5 (int *) ;
 int FUNC_6 (int *,struct page*) ;
 int FUNC_7 (int *,char*,scalar_t__) ;
 size_t FUNC_8 (size_t,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_2 ;
 int FUNC_12 (struct virtio_balloon*,scalar_t__,struct page*) ;
 int FUNC_13 (struct virtio_balloon*,int ) ;
 int FUNC_14 (TYPE_1__*,int ) ;

__attribute__((used)) static unsigned FUNC_15(struct virtio_balloon *VAR_3, size_t VAR_4)
{
 unsigned VAR_5;
 unsigned VAR_6;
 struct page *VAR_7;
 FUNC_1(VAR_2);


 VAR_4 = FUNC_8(VAR_4, FUNC_0(VAR_3->pfns));

 for (VAR_6 = 0; VAR_6 < VAR_4;
      VAR_6 += VAR_1) {
  struct page *VAR_8 = FUNC_3();

  if (!VAR_8) {
   FUNC_7(&VAR_3->vdev->dev,
          "Out of puff! Can't get %u pages\n",
          VAR_1);

   FUNC_9(200);
   break;
  }

  FUNC_6(&VAR_2, VAR_8);
 }

 FUNC_10(&VAR_3->balloon_lock);

 VAR_3->num_pfns = 0;

 while ((VAR_7 = FUNC_5(&VAR_2))) {
  FUNC_4(&VAR_3->vb_dev_info, VAR_7);

  FUNC_12(VAR_3, VAR_3->pfns + VAR_3->num_pfns, VAR_7);
  VAR_3->num_pages += VAR_1;
  if (!FUNC_14(VAR_3->vdev,
     VAR_0))
   FUNC_2(VAR_7, -1);
  VAR_3->num_pfns += VAR_1;
 }

 VAR_5 = VAR_3->num_pfns;

 if (VAR_3->num_pfns != 0)
  FUNC_13(VAR_3, VAR_3->inflate_vq);
 FUNC_11(&VAR_3->balloon_lock);

 return VAR_5;
}
