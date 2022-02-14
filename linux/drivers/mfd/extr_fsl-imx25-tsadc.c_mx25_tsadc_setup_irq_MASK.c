
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct mx25_tsadc {int domain; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device_node*,int,int ,int *,struct mx25_tsadc*) ;
 int FUNC_2 (int,int ,struct mx25_tsadc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3,
    struct mx25_tsadc *VAR_4)
{
 struct device *VAR_5 = &VAR_3->dev;
 struct device_node *VAR_6 = VAR_5->of_node;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3, 0);
 if (VAR_7 <= 0)
  return VAR_7;

 VAR_4->domain = FUNC_1(VAR_6, 2, 0, &VAR_1,
           VAR_4);
 if (!VAR_4->domain) {
  FUNC_0(VAR_5, "Failed to add irq domain\n");
  return -VAR_0;
 }

 FUNC_2(VAR_7, VAR_2, VAR_4);

 return 0;
}
