
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phylink {int sfp_bus; } ;
struct fwnode_reference_args {int fwnode; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fwnode_handle*,char*,int *,int ,int ,struct fwnode_reference_args*) ;
 int FUNC_1 (struct phylink*,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct phylink*,int *) ;

__attribute__((used)) static int FUNC_3(struct phylink *VAR_3,
    struct fwnode_handle *VAR_4)
{
 struct fwnode_reference_args VAR_5;
 int VAR_6;

 if (!VAR_4)
  return 0;

 VAR_6 = FUNC_0(VAR_4, "sfp", ((void*)0),
       0, 0, &VAR_5);
 if (VAR_6 < 0) {
  if (VAR_6 == -VAR_0)
   return 0;

  FUNC_1(VAR_3, "unable to parse \"sfp\" node: %d\n",
       VAR_6);
  return VAR_6;
 }

 VAR_3->sfp_bus = FUNC_2(VAR_5.fwnode, VAR_3, &VAR_2);
 if (!VAR_3->sfp_bus)
  return -VAR_1;

 return 0;
}
