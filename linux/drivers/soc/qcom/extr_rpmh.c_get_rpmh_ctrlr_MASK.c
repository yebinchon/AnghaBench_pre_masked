
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmh_ctrlr {int dummy; } ;
struct rsc_drv {struct rpmh_ctrlr client; } ;
struct device {int parent; } ;


 struct rsc_drv* FUNC_0 (int ) ;

__attribute__((used)) static struct rpmh_ctrlr *FUNC_1(const struct device *VAR_0)
{
 struct rsc_drv *VAR_1 = FUNC_0(VAR_0->parent);

 return &VAR_1->client;
}
