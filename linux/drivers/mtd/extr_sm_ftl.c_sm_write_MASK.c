
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_ftl {int cache_block; int cache_zone; int mutex; int timer; int readonly; } ;
struct mtd_blktrans_dev {struct sm_ftl* priv; } ;
struct ftl_zone {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ftl_zone*) ;
 int FUNC_2 (struct ftl_zone*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sm_ftl*,unsigned long,int*,int*,int*) ;
 int FUNC_9 (struct sm_ftl*) ;
 int FUNC_10 (struct sm_ftl*,char*,int) ;
 struct ftl_zone* FUNC_11 (struct sm_ftl*,int) ;

__attribute__((used)) static int FUNC_12(struct mtd_blktrans_dev *VAR_2,
    unsigned long VAR_3, char *VAR_4)
{
 struct sm_ftl *VAR_5 = VAR_2->priv;
 struct ftl_zone *VAR_6;
 int VAR_7 = 0, VAR_8, VAR_9, VAR_10;

 FUNC_0(VAR_5->readonly);
 FUNC_8(VAR_5, VAR_3 << 9, &VAR_8, &VAR_9, &VAR_10);


 FUNC_3(&VAR_5->timer);
 FUNC_6(&VAR_5->mutex);

 VAR_6 = FUNC_11(VAR_5, VAR_8);
 if (FUNC_1(VAR_6)) {
  VAR_7 = FUNC_2(VAR_6);
  goto unlock;
 }


 if (VAR_5->cache_block != VAR_9 || VAR_5->cache_zone != VAR_8) {

  VAR_7 = FUNC_9(VAR_5);
  if (VAR_7)
   goto unlock;

  VAR_5->cache_block = VAR_9;
  VAR_5->cache_zone = VAR_8;
 }

 FUNC_10(VAR_5, VAR_4, VAR_10);
unlock:
 FUNC_4(&VAR_5->timer, VAR_1 + FUNC_5(VAR_0));
 FUNC_7(&VAR_5->mutex);
 return VAR_7;
}
