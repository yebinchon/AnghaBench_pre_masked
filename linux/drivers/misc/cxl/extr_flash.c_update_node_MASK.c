
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vd ;
typedef int u32 ;
struct update_props_workarea {int nprops; int phandle; } ;
struct device_node {int dummy; } ;
typedef int s32 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 struct device_node* FUNC_3 (int) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int,char*,int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (struct device_node*,char*,int,char*) ;

__attribute__((used)) static int FUNC_10(__be32 VAR_6, s32 VAR_7)
{
 struct update_props_workarea *VAR_8;
 struct device_node *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 char *VAR_13;
 char *VAR_14;
 int VAR_15;
 u32 VAR_16;
 u32 VAR_17;

 VAR_15 = FUNC_7("ibm,update-properties");
 if (VAR_15 == VAR_5)
  return -VAR_0;

 VAR_14 = FUNC_2(VAR_4, VAR_3);
 if (!VAR_14)
  return -VAR_2;

 VAR_9 = FUNC_3(FUNC_0(VAR_6));
 if (!VAR_9) {
  FUNC_1(VAR_14);
  return -VAR_1;
 }

 VAR_8 = (struct update_props_workarea *)&VAR_14[0];
 VAR_8->phandle = VAR_6;
 do {
  VAR_11 = FUNC_6(VAR_15, VAR_14, VAR_7);
  if (VAR_11 < 0)
   break;

  VAR_13 = VAR_14 + sizeof(*VAR_8);
  VAR_16 = FUNC_0(VAR_8->nprops);

  if (*VAR_13 == 0) {
   VAR_13++;
   VAR_17 = FUNC_0(*(__be32 *)VAR_13);
   VAR_13 += VAR_17 + sizeof(VAR_17);
   VAR_16--;
  }

  for (VAR_10 = 0; VAR_10 < VAR_16; VAR_10++) {
   char *VAR_18;

   VAR_18 = VAR_13;
   VAR_13 += FUNC_8(VAR_18) + 1;
   VAR_17 = FUNC_0(*(__be32 *)VAR_13);
   VAR_13 += sizeof(VAR_17);

   if ((VAR_17 != 0x00000000) && (VAR_17 != 0x80000000)) {
    VAR_12 = FUNC_9(VAR_9, VAR_18, VAR_17,
      VAR_13);
    if (VAR_12)
     FUNC_5("cxl: Could not update property %s - %i\n",
            VAR_18, VAR_12);

    VAR_13 += VAR_17;
   }
  }
 } while (VAR_11 == 1);

 FUNC_4(VAR_9);
 FUNC_1(VAR_14);
 return VAR_11;
}
