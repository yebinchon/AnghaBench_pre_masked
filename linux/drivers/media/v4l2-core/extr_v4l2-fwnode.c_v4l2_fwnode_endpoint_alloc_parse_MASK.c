
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fwnode_endpoint {int nr_of_link_frequencies; int * link_frequencies; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fwnode_handle*,struct v4l2_fwnode_endpoint*) ;
 int FUNC_1 (struct fwnode_handle*,char*) ;
 int FUNC_2 (struct fwnode_handle*,char*,int *,int) ;
 int * FUNC_3 (int,int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,unsigned int,int ) ;
 int FUNC_6 (struct v4l2_fwnode_endpoint*) ;

int FUNC_7(struct fwnode_handle *VAR_2,
         struct v4l2_fwnode_endpoint *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_2, "link-frequencies");
 if (VAR_4 > 0) {
  unsigned int VAR_5;

  VAR_3->link_frequencies =
   FUNC_3(VAR_4, sizeof(*VAR_3->link_frequencies),
          VAR_1);
  if (!VAR_3->link_frequencies)
   return -VAR_0;

  VAR_3->nr_of_link_frequencies = VAR_4;

  VAR_4 = FUNC_2(VAR_2,
            "link-frequencies",
            VAR_3->link_frequencies,
            VAR_3->nr_of_link_frequencies);
  if (VAR_4 < 0) {
   FUNC_6(VAR_3);
   return VAR_4;
  }

  for (VAR_5 = 0; VAR_5 < VAR_3->nr_of_link_frequencies; VAR_5++)
   FUNC_5("link-frequencies %u value %llu\n", VAR_5,
    VAR_3->link_frequencies[VAR_5]);
 }

 FUNC_4("===== end V4L2 endpoint properties\n");

 return 0;
}
