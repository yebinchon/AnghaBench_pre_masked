
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uuid_t ;
typedef int u32 ;
struct TYPE_5__ {int * bus; } ;
struct TYPE_4__ {int uuid; } ;
struct tee_client_device {TYPE_2__ dev; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct tee_client_device*) ;
 struct tee_client_device* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int) ;
 int VAR_2 ;
 int FUNC_5 (int *,int const*) ;

__attribute__((used)) static int FUNC_6(const uuid_t *VAR_3, u32 VAR_4)
{
 struct tee_client_device *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dev.bus = &VAR_2;
 FUNC_0(&VAR_5->dev, "optee-clnt%u", VAR_4);
 FUNC_5(&VAR_5->id.uuid, VAR_3);

 VAR_6 = FUNC_1(&VAR_5->dev);
 if (VAR_6) {
  FUNC_4("device registration failed, err: %d\n", VAR_6);
  FUNC_2(VAR_5);
 }

 return VAR_6;
}
