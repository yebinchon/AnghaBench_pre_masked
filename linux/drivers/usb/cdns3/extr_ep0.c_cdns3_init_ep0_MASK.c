
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type_control; int dir_in; int dir_out; } ;
struct TYPE_6__ {int maxburst; int * desc; int name; TYPE_1__ caps; scalar_t__ address; int * ops; } ;
struct cdns3_endpoint {int type; TYPE_3__ endpoint; int name; } ;
struct TYPE_5__ {TYPE_3__* ep0; } ;
struct cdns3_device {TYPE_2__ gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cdns3_endpoint*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_3__*,int ) ;

int FUNC_3(struct cdns3_device *VAR_4,
     struct cdns3_endpoint *VAR_5)
{
 FUNC_1(VAR_5->name, "ep0");


 VAR_5->endpoint.ops = &VAR_3;
 VAR_5->endpoint.maxburst = 1;
 FUNC_2(&VAR_5->endpoint,
       VAR_0);
 VAR_5->endpoint.address = 0;
 VAR_5->endpoint.caps.type_control = 1;
 VAR_5->endpoint.caps.dir_in = 1;
 VAR_5->endpoint.caps.dir_out = 1;
 VAR_5->endpoint.name = VAR_5->name;
 VAR_5->endpoint.desc = &VAR_2;
 VAR_4->gadget.ep0 = &VAR_5->endpoint;
 VAR_5->type = VAR_1;

 return FUNC_0(VAR_5);
}
