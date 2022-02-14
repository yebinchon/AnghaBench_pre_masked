
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct apr_device_id {scalar_t__ svc_id; int domain_id; int name; int svc_version; } ;
struct TYPE_5__ {int * driver; int release; struct device_node* of_node; struct device* parent; int * bus; } ;
struct apr_device {TYPE_1__ dev; int name; int version; int domain_id; scalar_t__ svc_id; int lock; } ;
struct apr {int svcs_lock; int svcs_idr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct apr* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int ,int ,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,struct apr_device*,scalar_t__,scalar_t__,int ) ;
 struct apr_device* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int ,char*,struct device_node*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct device *VAR_6, struct device_node *VAR_7,
     const struct apr_device_id *VAR_8)
{
 struct apr *VAR_9 = FUNC_1(VAR_6);
 struct apr_device *VAR_10 = ((void*)0);
 int VAR_11;

 VAR_10 = FUNC_7(sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_1;

 FUNC_11(&VAR_10->lock);

 VAR_10->svc_id = VAR_8->svc_id;
 VAR_10->domain_id = VAR_8->domain_id;
 VAR_10->version = VAR_8->svc_version;
 if (VAR_7)
  FUNC_9(VAR_10->name, VAR_0, "%pOFn", VAR_7);
 else
  FUNC_13(VAR_10->name, VAR_8->name, VAR_0);

 FUNC_4(&VAR_10->dev, "aprsvc:%s:%x:%x", VAR_10->name,
       VAR_8->domain_id, VAR_8->svc_id);

 VAR_10->dev.bus = &VAR_5;
 VAR_10->dev.parent = VAR_6;
 VAR_10->dev.of_node = VAR_7;
 VAR_10->dev.release = VAR_4;
 VAR_10->dev.driver = ((void*)0);

 FUNC_10(&VAR_9->svcs_lock);
 FUNC_6(&VAR_9->svcs_idr, VAR_10, VAR_8->svc_id,
    VAR_8->svc_id + 1, VAR_2);
 FUNC_12(&VAR_9->svcs_lock);

 FUNC_2(VAR_6, "Adding APR dev: %s\n", FUNC_3(&VAR_10->dev));

 VAR_11 = FUNC_5(&VAR_10->dev);
 if (VAR_11) {
  FUNC_0(VAR_6, "device_register failed: %d\n", VAR_11);
  FUNC_8(&VAR_10->dev);
 }

 return VAR_11;
}
