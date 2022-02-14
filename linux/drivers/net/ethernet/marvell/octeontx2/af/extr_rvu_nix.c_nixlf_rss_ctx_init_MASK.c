
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rvu_pfvf {TYPE_1__* rss_ctx; } ;
struct rvu {int dev; } ;
struct TYPE_2__ {scalar_t__ iova; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,TYPE_1__**,int,int) ;
 int FUNC_6 (struct rvu*,int,int ,int) ;

__attribute__((used)) static int FUNC_7(struct rvu *VAR_1, int VAR_2,
         struct rvu_pfvf *VAR_3, int VAR_4,
         int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;


 if (!VAR_5)
  return 0;
 VAR_10 = VAR_5 * VAR_6;


 VAR_8 = FUNC_5(VAR_1->dev, &VAR_3->rss_ctx, VAR_10, VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_6(VAR_1, VAR_2, FUNC_1(VAR_4),
      (u64)VAR_3->rss_ctx->iova);


 FUNC_6(VAR_1, VAR_2, FUNC_2(VAR_4),
      FUNC_0(36) | FUNC_0(4) |
      FUNC_4(VAR_10 / VAR_0));

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  FUNC_6(VAR_1, VAR_2, FUNC_3(VAR_4, VAR_9),
       ((FUNC_4(VAR_5) - 1) << 16) | (VAR_5 * VAR_9));
 return 0;
}
