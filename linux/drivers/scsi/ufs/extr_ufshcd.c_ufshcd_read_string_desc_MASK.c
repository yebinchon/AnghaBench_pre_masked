
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct ufs_hba {int dev; } ;
struct uc_string_id {int len; int uc; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct uc_string_id*) ;
 char* FUNC_3 (struct uc_string_id*,int,int ) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ufs_hba*,int ,char,struct uc_string_id*,int) ;
 char FUNC_6 (char) ;
 int FUNC_7 (int ,int,int ,char*,int) ;

int FUNC_8(struct ufs_hba *VAR_8, u8 VAR_9,
       u8 **VAR_10, bool VAR_11)
{
 struct uc_string_id *VAR_12;
 u8 *VAR_13;
 int VAR_14;

 if (!VAR_10)
  return -VAR_0;

 VAR_12 = FUNC_4(VAR_5, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_14 = FUNC_5(VAR_8, VAR_4,
          VAR_9, VAR_12,
          VAR_5);
 if (VAR_14 < 0) {
  FUNC_1(VAR_8->dev, "Reading String Desc failed after %d retries. err = %d\n",
   VAR_6, VAR_14);
  VAR_13 = ((void*)0);
  goto out;
 }

 if (VAR_12->len <= VAR_3) {
  FUNC_0(VAR_8->dev, "String Desc is of zero length\n");
  VAR_13 = ((void*)0);
  VAR_14 = 0;
  goto out;
 }

 if (VAR_11) {
  ssize_t VAR_15;
  int VAR_16;

  VAR_15 = (VAR_12->len - VAR_3) / 2 + 1;
  VAR_13 = FUNC_4(VAR_15, VAR_2);
  if (!VAR_13) {
   VAR_14 = -VAR_1;
   goto out;
  }





  VAR_14 = FUNC_7(VAR_12->uc,
          VAR_12->len - VAR_3,
          VAR_7, VAR_13, VAR_15);


  for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++)
   VAR_13[VAR_16] = FUNC_6(VAR_13[VAR_16]);

  VAR_13[VAR_14++] = '\0';

 } else {
  VAR_13 = FUNC_3(VAR_12, VAR_12->len, VAR_2);
  if (!VAR_13) {
   VAR_14 = -VAR_1;
   goto out;
  }
  VAR_14 = VAR_12->len;
 }
out:
 *VAR_10 = VAR_13;
 FUNC_2(VAR_12);
 return VAR_14;
}
