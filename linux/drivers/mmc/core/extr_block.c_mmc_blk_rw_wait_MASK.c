
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct mmc_queue {int wait; } ;


 int FUNC_0 (struct mmc_queue*,struct request**) ;
 int FUNC_1 (struct mmc_queue*,int*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mmc_queue *VAR_0, struct request **VAR_1)
{
 int VAR_2 = 0;

 FUNC_2(VAR_0->wait, FUNC_1(VAR_0, &VAR_2));


 FUNC_0(VAR_0, VAR_1);

 return VAR_2;
}
