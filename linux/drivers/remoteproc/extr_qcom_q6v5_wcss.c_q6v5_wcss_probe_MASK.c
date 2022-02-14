
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {struct q6v5_wcss* priv; } ;
struct q6v5_wcss {int q6v5; int * dev; } ;
struct platform_device {int dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct platform_device*,struct rproc*) ;
 int FUNC_2 (struct q6v5_wcss*) ;
 int FUNC_3 (struct q6v5_wcss*,struct platform_device*) ;
 int FUNC_4 (struct q6v5_wcss*) ;
 int VAR_2 ;
 int FUNC_5 (int *,struct platform_device*,struct rproc*,int ,int *) ;
 int FUNC_6 (struct rproc*) ;
 struct rproc* FUNC_7 (int *,int ,int *,char*,int) ;
 int FUNC_8 (struct rproc*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 struct q6v5_wcss *VAR_4;
 struct rproc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_7(&VAR_3->dev, VAR_3->name, &VAR_2,
       "IPQ8074/q6_fw.mdt", sizeof(*VAR_4));
 if (!VAR_5) {
  FUNC_0(&VAR_3->dev, "failed to allocate rproc\n");
  return -VAR_0;
 }

 VAR_4 = VAR_5->priv;
 VAR_4->dev = &VAR_3->dev;

 VAR_6 = FUNC_3(VAR_4, VAR_3);
 if (VAR_6)
  goto free_rproc;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  goto free_rproc;

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  goto free_rproc;

 VAR_6 = FUNC_5(&VAR_4->q6v5, VAR_3, VAR_5, VAR_1, ((void*)0));
 if (VAR_6)
  goto free_rproc;

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6)
  goto free_rproc;

 FUNC_1(VAR_3, VAR_5);

 return 0;

free_rproc:
 FUNC_8(VAR_5);

 return VAR_6;
}
