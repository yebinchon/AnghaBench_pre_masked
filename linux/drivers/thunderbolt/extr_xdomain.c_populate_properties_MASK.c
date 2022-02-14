
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_xdomain {int * vendor_name; int * device_name; int vendor; int device; } ;
struct tb_property_dir {int dummy; } ;
struct TYPE_2__ {int text; int immediate; } ;
struct tb_property {TYPE_1__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ,int ) ;
 struct tb_property* FUNC_2 (struct tb_property_dir*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct tb_xdomain *VAR_4,
          struct tb_property_dir *VAR_5)
{
 const struct tb_property *VAR_6;


 VAR_6 = FUNC_2(VAR_5, "deviceid", VAR_3);
 if (!VAR_6)
  return -VAR_0;
 VAR_4->device = VAR_6->value.immediate;

 VAR_6 = FUNC_2(VAR_5, "vendorid", VAR_3);
 if (!VAR_6)
  return -VAR_0;
 VAR_4->vendor = VAR_6->value.immediate;

 FUNC_0(VAR_4->device_name);
 VAR_4->device_name = ((void*)0);
 FUNC_0(VAR_4->vendor_name);
 VAR_4->vendor_name = ((void*)0);


 VAR_6 = FUNC_2(VAR_5, "deviceid", VAR_2);
 if (VAR_6)
  VAR_4->device_name = FUNC_1(VAR_6->value.text, VAR_1);
 VAR_6 = FUNC_2(VAR_5, "vendorid", VAR_2);
 if (VAR_6)
  VAR_4->vendor_name = FUNC_1(VAR_6->value.text, VAR_1);

 return 0;
}
