
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct typec_altmode_desc {scalar_t__ svid; } ;
struct device_connection {int fwnode; int id; int * endpoint; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 struct device* FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,scalar_t__*,int) ;
 scalar_t__* FUNC_5 (int,int,int ) ;
 int FUNC_6 (scalar_t__*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_7 (struct device*) ;
 int VAR_5 ;

__attribute__((used)) static void *FUNC_8(struct device_connection *VAR_6, int VAR_7, void *VAR_8)
{
 const struct typec_altmode_desc *VAR_9 = VAR_8;
 struct device *VAR_10;
 bool VAR_11;
 int VAR_12;
 u16 *VAR_13;
 int VAR_14;

 if (!VAR_6->fwnode) {
  VAR_10 = FUNC_1(&VAR_5, ((void*)0),
     VAR_6->endpoint[VAR_7], VAR_4);

  return VAR_10 ? FUNC_7(VAR_10) : FUNC_0(-VAR_1);
 }





 VAR_11 = !VAR_6->id;
 if (VAR_11)
  goto find_mux;


 if (!VAR_9) {
  VAR_11 = FUNC_3(VAR_6->fwnode, "accessory");
  if (VAR_11)
   goto find_mux;
  return ((void*)0);
 }


 VAR_12 = FUNC_2(VAR_6->fwnode, "svid");
 if (VAR_12 <= 0)
  return ((void*)0);

 VAR_13 = FUNC_5(VAR_12, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return FUNC_0(-VAR_0);

 VAR_12 = FUNC_4(VAR_6->fwnode, "svid", VAR_13, VAR_12);
 if (VAR_12 < 0) {
  FUNC_6(VAR_13);
  return FUNC_0(VAR_12);
 }

 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  VAR_11 = VAR_13[VAR_14] == VAR_9->svid;
  if (VAR_11) {
   FUNC_6(VAR_13);
   goto find_mux;
  }
 }
 FUNC_6(VAR_13);
 return ((void*)0);

find_mux:
 VAR_10 = FUNC_1(&VAR_5, ((void*)0), VAR_6->fwnode,
    VAR_3);

 return VAR_10 ? FUNC_7(VAR_10) : FUNC_0(-VAR_1);
}
