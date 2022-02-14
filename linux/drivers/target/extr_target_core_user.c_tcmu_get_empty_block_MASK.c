
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_dev {int dbi_thresh; int dbi_max; int data_bitmap; int data_blocks; } ;
struct tcmu_cmd {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int VAR_1 ;
 int FUNC_5 (int *,int,struct page*) ;
 struct page* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (struct tcmu_cmd*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline bool FUNC_10(struct tcmu_dev *VAR_4,
     struct tcmu_cmd *VAR_5)
{
 struct page *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_4(VAR_4->data_bitmap, VAR_4->dbi_thresh);
 if (VAR_8 == VAR_4->dbi_thresh)
  return 0;

 VAR_6 = FUNC_6(&VAR_4->data_blocks, VAR_8);
 if (!VAR_6) {
  if (FUNC_2(1, &VAR_1) >
          VAR_2)
   FUNC_7(&VAR_3, 0);


  VAR_6 = FUNC_1(VAR_0);
  if (!VAR_6)
   goto err_alloc;

  VAR_7 = FUNC_5(&VAR_4->data_blocks, VAR_8, VAR_6);
  if (VAR_7)
   goto err_insert;
 }

 if (VAR_8 > VAR_4->dbi_max)
  VAR_4->dbi_max = VAR_8;

 FUNC_8(VAR_8, VAR_4->data_bitmap);
 FUNC_9(VAR_5, VAR_8);

 return 1;
err_insert:
 FUNC_0(VAR_6);
err_alloc:
 FUNC_3(&VAR_1);
 return 0;
}
