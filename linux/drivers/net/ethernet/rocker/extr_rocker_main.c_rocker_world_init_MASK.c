
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rocker_world_ops {int (* init ) (struct rocker*) ;int priv_size; } ;
struct rocker {int wpriv; struct rocker_world_ops* wops; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct rocker_world_ops* FUNC_3 (int ) ;
 int FUNC_4 (struct rocker*) ;

__attribute__((used)) static int FUNC_5(struct rocker *VAR_3, u8 VAR_4)
{
 struct rocker_world_ops *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_4);
 if (!VAR_5) {
  FUNC_0(&VAR_3->pdev->dev, "port mode \"%d\" is not supported\n",
   VAR_4);
  return -VAR_0;
 }
 VAR_3->wops = VAR_5;
 VAR_3->wpriv = FUNC_2(VAR_5->priv_size, VAR_2);
 if (!VAR_3->wpriv)
  return -VAR_1;
 if (!VAR_5->init)
  return 0;
 VAR_6 = VAR_5->init(VAR_3);
 if (VAR_6)
  FUNC_1(VAR_3->wpriv);
 return VAR_6;
}
