
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device_id {int dummy; } ;
struct xenbus_device {int nodename; } ;
struct xen_pcibk_device {int be_watching; int be_watch; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xen_pcibk_device* FUNC_0 (struct xenbus_device*) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (struct xenbus_device*,int,char*) ;
 int FUNC_3 (struct xenbus_device*,int ) ;
 int FUNC_4 (struct xenbus_device*,int ,int *,int (*) (int *,int *,int *)) ;

__attribute__((used)) static int FUNC_5(struct xenbus_device *VAR_2,
    const struct xenbus_device_id *VAR_3)
{
 int VAR_4 = 0;
 struct xen_pcibk_device *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5 == ((void*)0)) {
  VAR_4 = -VAR_0;
  FUNC_2(VAR_2, VAR_4,
     "Error allocating xen_pcibk_device struct");
  goto out;
 }


 VAR_4 = FUNC_3(VAR_2, VAR_1);
 if (VAR_4)
  goto out;


 VAR_4 = FUNC_4(VAR_2, VAR_2->nodename, &VAR_5->be_watch,
    FUNC_1);
 if (VAR_4)
  goto out;

 VAR_5->be_watching = 1;




 FUNC_1(&VAR_5->be_watch, ((void*)0), ((void*)0));

out:
 return VAR_4;
}
