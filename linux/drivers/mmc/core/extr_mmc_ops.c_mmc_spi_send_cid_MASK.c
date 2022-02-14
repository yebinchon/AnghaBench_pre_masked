
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct mmc_host*,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_3, u32 *VAR_4)
{
 int VAR_5, VAR_6;
 __be32 *VAR_7;

 VAR_7 = FUNC_2(16, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_5 = FUNC_3(((void*)0), VAR_3, VAR_2, VAR_7, 16);
 if (VAR_5)
  goto err;

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
  VAR_4[VAR_6] = FUNC_0(VAR_7[VAR_6]);

err:
 FUNC_1(VAR_7);
 return VAR_5;
}
