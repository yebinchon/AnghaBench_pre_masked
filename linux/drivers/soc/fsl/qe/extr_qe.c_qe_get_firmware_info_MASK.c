
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct qe_firmware_info {int * vtraps; int extended_modes; int id; } ;
struct property {int length; int * value; } ;
struct device_node {int dummy; } ;


 unsigned int FUNC_0 (int *) ;
 struct property* FUNC_1 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_2 (struct device_node*,char*) ;
 char* FUNC_3 (struct device_node*,char*,int *) ;
 int FUNC_4 (struct device_node*) ;
 struct qe_firmware_info VAR_0 ;
 int VAR_1 ;
 struct device_node* FUNC_5 () ;
 int FUNC_6 (int ,char const*,int) ;

struct qe_firmware_info *FUNC_7(void)
{
 static int VAR_2;
 struct property *VAR_3;
 struct device_node *VAR_4;
 struct device_node *VAR_5 = ((void*)0);
 const char *VAR_6;
 unsigned int VAR_7;





 if (VAR_1)
  return &VAR_0;

 if (VAR_2)
  return ((void*)0);

 VAR_2 = 1;

 VAR_4 = FUNC_5();
 if (!VAR_4)
  return ((void*)0);


 VAR_5 = FUNC_2(VAR_4, "firmware");
 FUNC_4(VAR_4);


 if (!VAR_5)
  return ((void*)0);

 VAR_1 = 1;


 VAR_6 = FUNC_3(VAR_5, "id", ((void*)0));
 if (VAR_6)
  FUNC_6(VAR_0.id, VAR_6,
   sizeof(VAR_0.id));

 VAR_3 = FUNC_1(VAR_5, "extended-modes", ((void*)0));
 if (VAR_3 && (VAR_3->length == sizeof(u64))) {
  const u64 *VAR_8 = VAR_3->value;

  VAR_0.extended_modes = *VAR_8;
 }

 VAR_3 = FUNC_1(VAR_5, "virtual-traps", ((void*)0));
 if (VAR_3 && (VAR_3->length == 32)) {
  const u32 *VAR_9 = VAR_3->value;

  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0.vtraps); VAR_7++)
   VAR_0.vtraps[VAR_7] = VAR_9[VAR_7];
 }

 FUNC_4(VAR_5);

 return &VAR_0;
}
