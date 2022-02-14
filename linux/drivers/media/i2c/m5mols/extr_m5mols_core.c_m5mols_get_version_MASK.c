
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct m5mols_version {int project; int customer; int af; int awb; int param; int hw; int fw; int * str; } ;
struct m5mols_info {struct m5mols_version ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct m5mols_info*) ;
 scalar_t__ FUNC_1 (struct m5mols_info*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int *) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int *) ;
 struct m5mols_info* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*,char*,...) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_12)
{
 struct m5mols_info *VAR_13 = FUNC_4(VAR_12);
 struct m5mols_version *VAR_14 = &VAR_13->ver;
 u8 *VAR_15 = VAR_14->str;
 int VAR_16;
 int VAR_17;

 VAR_17 = FUNC_3(VAR_12, VAR_5, &VAR_14->customer);
 if (!VAR_17)
  VAR_17 = FUNC_3(VAR_12, VAR_9, &VAR_14->project);
 if (!VAR_17)
  VAR_17 = FUNC_2(VAR_12, VAR_6, &VAR_14->fw);
 if (!VAR_17)
  VAR_17 = FUNC_2(VAR_12, VAR_7, &VAR_14->hw);
 if (!VAR_17)
  VAR_17 = FUNC_2(VAR_12, VAR_8, &VAR_14->param);
 if (!VAR_17)
  VAR_17 = FUNC_2(VAR_12, VAR_4, &VAR_14->awb);
 if (!VAR_17)
  VAR_17 = FUNC_3(VAR_12, VAR_0, &VAR_14->af);
 if (VAR_17)
  return VAR_17;

 for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {
  VAR_17 = FUNC_3(VAR_12, VAR_10, &VAR_15[VAR_16]);
  if (VAR_17)
   return VAR_17;
 }

 FUNC_5(VAR_12, "Manufacturer\t[%s]\n",
   FUNC_1(VAR_13, VAR_1) ?
   "Samsung Electro-Mechanics" :
   FUNC_1(VAR_13, VAR_2) ?
   "Samsung Fiber-Optics" :
   FUNC_1(VAR_13, VAR_3) ?
   "Samsung Techwin" : "None");
 FUNC_5(VAR_12, "Customer/Project\t[0x%02x/0x%02x]\n",
   VAR_13->ver.customer, VAR_13->ver.project);

 if (!FUNC_0(VAR_13))
  FUNC_5(VAR_12, "No support Auto Focus on this firmware\n");

 return VAR_17;
}
