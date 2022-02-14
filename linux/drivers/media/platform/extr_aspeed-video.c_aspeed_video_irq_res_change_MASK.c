
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct aspeed_video {int res_work; int flags; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aspeed_video*,int ) ;
 int FUNC_1 (struct aspeed_video*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct aspeed_video *VAR_3, ulong VAR_4)
{
 FUNC_3(VAR_3->dev, "Resolution changed; resetting\n");

 FUNC_5(VAR_2, &VAR_3->flags);
 FUNC_2(VAR_1, &VAR_3->flags);

 FUNC_1(VAR_3);
 FUNC_0(VAR_3, VAR_0);

 FUNC_4(&VAR_3->res_work, VAR_4);
}
