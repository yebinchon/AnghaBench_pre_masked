
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_ftl {int cache_zone; int cache_block; int mutex; } ;
struct mtd_blktrans_dev {struct sm_ftl* priv; } ;
struct ftl_zone {int* lba_to_phys_table; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ftl_zone*) ;
 int FUNC_1 (struct ftl_zone*) ;
 int VAR_1 ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sm_ftl*,unsigned long,int*,int*,int*) ;
 int FUNC_6 (struct sm_ftl*,char*,int) ;
 int FUNC_7 (struct sm_ftl*,char*,int) ;
 struct ftl_zone* FUNC_8 (struct sm_ftl*,int) ;
 scalar_t__ FUNC_9 (struct sm_ftl*,int,int,int,char*,int *) ;

__attribute__((used)) static int FUNC_10(struct mtd_blktrans_dev *VAR_2,
     unsigned long VAR_3, char *VAR_4)
{
 struct sm_ftl *VAR_5 = VAR_2->priv;
 struct ftl_zone *VAR_6;
 int VAR_7 = 0, VAR_8 = 0;
 int VAR_9, VAR_10, VAR_11;

 FUNC_5(VAR_5, VAR_3 << 9, &VAR_9, &VAR_10, &VAR_11);
 FUNC_3(&VAR_5->mutex);


 VAR_6 = FUNC_8(VAR_5, VAR_9);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  goto unlock;
 }


 if (VAR_5->cache_zone == VAR_9 && VAR_5->cache_block == VAR_10) {
  VAR_8 = 1;
  if (!FUNC_6(VAR_5, VAR_4, VAR_11))
   goto unlock;
 }


 VAR_10 = VAR_6->lba_to_phys_table[VAR_10];

 if (VAR_10 == -1) {
  FUNC_2(VAR_4, 0xFF, VAR_1);
  goto unlock;
 }

 if (FUNC_9(VAR_5, VAR_9, VAR_10, VAR_11, VAR_4, ((void*)0))) {
  VAR_7 = -VAR_0;
  goto unlock;
 }

 if (VAR_8)
  FUNC_7(VAR_5, VAR_4, VAR_11);
unlock:
 FUNC_4(&VAR_5->mutex);
 return VAR_7;
}
