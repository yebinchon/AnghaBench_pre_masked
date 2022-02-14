
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_test_req {int dummy; } ;


 int VAR_0 ;
 struct mmc_test_req* FUNC_0 (int,int ) ;
 int FUNC_1 (struct mmc_test_req*) ;

__attribute__((used)) static struct mmc_test_req *FUNC_2(void)
{
 struct mmc_test_req *VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);

 if (VAR_1)
  FUNC_1(VAR_1);

 return VAR_1;
}
