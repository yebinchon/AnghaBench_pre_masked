
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct update_nodes_workarea {int unit_address; } ;
struct cxl {TYPE_1__* guest; } ;
typedef int s32 ;
typedef int __be32 ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int,char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct cxl *VAR_7, s32 VAR_8)
{
 struct update_nodes_workarea *VAR_9;
 u32 VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;
 __be32 *VAR_15, VAR_16, VAR_17;
 char *VAR_18;

 VAR_12 = FUNC_6("ibm,update-nodes");
 if (VAR_12 == VAR_6)
  return -VAR_0;

 VAR_18 = FUNC_3(VAR_5, VAR_2);
 if (!VAR_18)
  return -VAR_1;

 VAR_9 = (struct update_nodes_workarea *)&VAR_18[0];
 VAR_9->unit_address = FUNC_1(VAR_7->guest->handle);
 do {
  VAR_13 = FUNC_5(VAR_12, VAR_18, VAR_8);
  if (VAR_13 && VAR_13 != 1)
   break;

  VAR_15 = (__be32 *)VAR_18 + 4;
  while (FUNC_0(*VAR_15) & VAR_3) {
   VAR_10 = FUNC_0(*VAR_15) & VAR_3;
   VAR_11 = FUNC_0(*VAR_15) & VAR_4;
   FUNC_4("device reconfiguration - action: %#x, nodes: %#x\n",
     VAR_10, VAR_11);
   VAR_15++;

   for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
    VAR_17 = *VAR_15++;

    switch (VAR_10) {
    case 129:

     break;
    case 128:
     FUNC_7(VAR_17, VAR_8);
     break;
    case 130:

     VAR_16 = *VAR_15++;
     break;
    }
   }
  }
 } while (VAR_13 == 1);

 FUNC_2(VAR_18);
 return 0;
}
