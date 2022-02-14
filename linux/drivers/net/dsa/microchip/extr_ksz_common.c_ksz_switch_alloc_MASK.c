
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_device {void* priv; struct dsa_switch* ds; struct device* dev; } ;
struct dsa_switch {struct ksz_device* priv; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ksz_device* FUNC_0 (struct device*,int,int ) ;
 struct dsa_switch* FUNC_1 (struct device*,int ) ;

struct ksz_device *FUNC_2(struct device *VAR_2, void *VAR_3)
{
 struct dsa_switch *VAR_4;
 struct ksz_device *VAR_5;

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_2, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return ((void*)0);

 VAR_4->priv = VAR_5;
 VAR_5->dev = VAR_2;

 VAR_5->ds = VAR_4;
 VAR_5->priv = VAR_3;

 return VAR_5;
}
