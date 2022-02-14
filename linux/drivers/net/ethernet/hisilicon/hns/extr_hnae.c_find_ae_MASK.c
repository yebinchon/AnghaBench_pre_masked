
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae_ae_dev {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct device* FUNC_1 (int ,int *,struct fwnode_handle const*,int ) ;
 struct hnae_ae_dev* FUNC_2 (struct device*) ;
 int VAR_1 ;

__attribute__((used)) static struct hnae_ae_dev *FUNC_3(const struct fwnode_handle *VAR_2)
{
 struct device *VAR_3;

 FUNC_0(!VAR_2);

 VAR_3 = FUNC_1(VAR_1, ((void*)0), VAR_2, VAR_0);

 return VAR_3 ? FUNC_2(VAR_3) : ((void*)0);
}
