
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef void* u32 ;
struct uic_command {void* argument3; int argument2; void* argument1; int command; int member_0; } ;
struct ufs_hba {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*,char const*,int ,void*,int) ;
 int FUNC_3 (int ,char*,char const*,int ,void*,int) ;
 int FUNC_4 (struct ufs_hba*,struct uic_command*) ;

int FUNC_5(struct ufs_hba *VAR_3, u32 VAR_4,
   u8 VAR_5, u32 VAR_6, u8 VAR_7)
{
 struct uic_command VAR_8 = {0};
 static const char *const VAR_9[] = {
  "dme-set",
  "dme-peer-set"
 };
 const char *VAR_10 = VAR_9[!!VAR_7];
 int VAR_11;
 int VAR_12 = VAR_0;

 VAR_8.command = VAR_7 ?
  VAR_1 : VAR_2;
 VAR_8.argument1 = VAR_4;
 VAR_8.argument2 = FUNC_0(VAR_5);
 VAR_8.argument3 = VAR_6;

 do {

  VAR_11 = FUNC_4(VAR_3, &VAR_8);
  if (VAR_11)
   FUNC_2(VAR_3->dev, "%s: attr-id 0x%x val 0x%x error code %d\n",
    VAR_10, FUNC_1(VAR_4), VAR_6, VAR_11);
 } while (VAR_11 && VAR_7 && --VAR_12);

 if (VAR_11)
  FUNC_3(VAR_3->dev, "%s: attr-id 0x%x val 0x%x failed %d retries\n",
   VAR_10, FUNC_1(VAR_4), VAR_6,
   VAR_0 - VAR_12);

 return VAR_11;
}
