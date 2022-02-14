
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct device* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int cgrid; } ;
struct TYPE_4__ {TYPE_3__ cgr; } ;
struct dpaa_priv {TYPE_1__ cgr_data; TYPE_3__ ingress_cgr; int dpaa_fq_list; } ;
struct device {int dummy; } ;


 struct net_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct dpaa_priv*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int *) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 struct dpaa_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_0)
{
 struct net_device *VAR_1;
 struct dpaa_priv *VAR_2;
 struct device *VAR_3;
 int VAR_4;

 VAR_3 = VAR_0->dev.parent;
 VAR_1 = FUNC_0(VAR_3);

 VAR_2 = FUNC_7(VAR_1);

 FUNC_3(VAR_3);

 FUNC_1(VAR_3, ((void*)0));
 FUNC_10(VAR_1);

 VAR_4 = FUNC_4(VAR_3, &VAR_2->dpaa_fq_list);

 FUNC_8(&VAR_2->ingress_cgr);
 FUNC_9(VAR_2->ingress_cgr.cgrid);
 FUNC_8(&VAR_2->cgr_data.cgr);
 FUNC_9(VAR_2->cgr_data.cgr.cgrid);

 FUNC_5(VAR_1);

 FUNC_2(VAR_2);

 FUNC_6(VAR_1);

 return VAR_4;
}
