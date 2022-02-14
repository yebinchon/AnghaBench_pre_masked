
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunqe_buffers {int dummy; } ;
struct sunqe {int buffers_dvma; int buffers; int qblock_dvma; int qe_block; int mregs; int qcregs; struct net_device* dev; } ;
struct platform_device {int dev; int * resource; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int ,int ) ;
 struct sunqe* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct sunqe *VAR_4 = FUNC_3(VAR_3);
 struct net_device *VAR_5 = VAR_4->dev;

 FUNC_4(VAR_5);

 FUNC_2(&VAR_3->resource[0], VAR_4->qcregs, VAR_0);
 FUNC_2(&VAR_3->resource[1], VAR_4->mregs, VAR_1);
 FUNC_0(&VAR_3->dev, VAR_2,
     VAR_4->qe_block, VAR_4->qblock_dvma);
 FUNC_0(&VAR_3->dev, sizeof(struct sunqe_buffers),
     VAR_4->buffers, VAR_4->buffers_dvma);

 FUNC_1(VAR_5);

 return 0;
}
