
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fwnode_endpoint {unsigned int nr_of_link_frequencies; scalar_t__* link_frequencies; int bus_type; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*) ;
 struct fwnode_handle* FUNC_2 (int ,int *) ;
 int FUNC_3 (struct fwnode_handle*) ;
 int FUNC_4 (struct fwnode_handle*,struct v4l2_fwnode_endpoint*) ;
 int FUNC_5 (struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3)
{
 struct fwnode_handle *VAR_4;
 struct v4l2_fwnode_endpoint VAR_5 = {
  .bus_type = VAR_2,
 };
 unsigned int VAR_6;
 int VAR_7;

 VAR_4 = FUNC_2(FUNC_1(VAR_3), ((void*)0));
 if (!VAR_4) {
  FUNC_0(VAR_3, "endpoint node not found\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_4(VAR_4, &VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_3, "parsing endpoint node failed\n");
  goto done;
 }

 for (VAR_6 = 0; VAR_6 < VAR_5.nr_of_link_frequencies; VAR_6++)
  if (VAR_5.link_frequencies[VAR_6] == VAR_1)
   break;

 if (VAR_6 == VAR_5.nr_of_link_frequencies) {
  FUNC_0(VAR_3, "link-frequencies %d not supported, Please review your DT\n",
   VAR_1);
  VAR_7 = -VAR_0;
  goto done;
 }

done:
 FUNC_5(&VAR_5);
 FUNC_3(VAR_4);
 return VAR_7;
}
