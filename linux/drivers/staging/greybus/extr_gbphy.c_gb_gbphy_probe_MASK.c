
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct greybus_bundle_id {int dummy; } ;
struct gbphy_host {int devices; struct gb_bundle* bundle; } ;
struct gbphy_device {int list; } ;
struct gb_bundle {int num_cports; int * cport_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct gbphy_device*) ;
 int FUNC_2 (struct gbphy_device*) ;
 struct gbphy_device* FUNC_3 (struct gb_bundle*,int *) ;
 int FUNC_4 (struct gb_bundle*) ;
 int FUNC_5 (struct gb_bundle*) ;
 int FUNC_6 (struct gb_bundle*,struct gbphy_host*) ;
 struct gbphy_host* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(struct gb_bundle *VAR_3,
     const struct greybus_bundle_id *VAR_4)
{
 struct gbphy_host *VAR_5;
 struct gbphy_device *VAR_6;
 int VAR_7;

 if (VAR_3->num_cports == 0)
  return -VAR_0;

 VAR_5 = FUNC_7(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->bundle = VAR_3;
 FUNC_0(&VAR_5->devices);
 FUNC_6(VAR_3, VAR_5);





 for (VAR_7 = 0; VAR_7 < VAR_3->num_cports; ++VAR_7) {
  VAR_6 = FUNC_3(VAR_3, &VAR_3->cport_desc[VAR_7]);
  if (FUNC_1(VAR_6)) {
   FUNC_4(VAR_3);
   return FUNC_2(VAR_6);
  }
  FUNC_8(&VAR_6->list, &VAR_5->devices);
 }

 FUNC_5(VAR_3);

 return 0;
}
