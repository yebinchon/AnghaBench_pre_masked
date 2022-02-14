
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddb {size_t nr; int ddb_dev; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (struct ddb*) ;
 int FUNC_5 (struct ddb*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct ddb** VAR_7 ;
 int FUNC_6 (int ,char*,size_t) ;
 int FUNC_7 (int *,int ,int ,struct ddb*,char*,size_t) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct ddb *VAR_8)
{
 int VAR_9 = 0;

 if (VAR_6 == VAR_0)
  return -VAR_2;
 FUNC_9(&VAR_5);
 VAR_8->nr = VAR_6;
 VAR_7[VAR_8->nr] = VAR_8;
 VAR_8->ddb_dev = FUNC_7(&VAR_3, VAR_8->dev,
         FUNC_2(VAR_4, VAR_8->nr),
         VAR_8, "ddbridge%d", VAR_8->nr);
 if (FUNC_1(VAR_8->ddb_dev)) {
  VAR_9 = FUNC_3(VAR_8->ddb_dev);
  FUNC_6(VAR_8->dev, "Could not create ddbridge%d\n", VAR_8->nr);
  goto fail;
 }
 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9) {
  FUNC_5(VAR_8);
  FUNC_8(&VAR_3, FUNC_2(VAR_4, VAR_8->nr));
  VAR_7[VAR_8->nr] = ((void*)0);
  VAR_8->ddb_dev = FUNC_0(-VAR_1);
 } else {
  VAR_6++;
 }
fail:
 FUNC_10(&VAR_5);
 return VAR_9;
}
