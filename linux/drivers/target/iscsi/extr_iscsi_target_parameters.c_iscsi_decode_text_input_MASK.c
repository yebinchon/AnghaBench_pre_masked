
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iscsi_param_list {int dummy; } ;
struct iscsi_param {int dummy; } ;
struct iscsi_conn {struct iscsi_param_list* param_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct iscsi_param*) ;
 int VAR_2 ;
 int FUNC_1 (struct iscsi_param*) ;
 int FUNC_2 (struct iscsi_param*) ;
 scalar_t__ FUNC_3 (char*,char*,struct iscsi_param_list*) ;
 scalar_t__ FUNC_4 (struct iscsi_param*,char*,struct iscsi_conn*) ;
 scalar_t__ FUNC_5 (char*) ;
 struct iscsi_param* FUNC_6 (char*,int,int,struct iscsi_param_list*) ;
 scalar_t__ FUNC_7 (struct iscsi_param*,char*) ;
 scalar_t__ FUNC_8 (struct iscsi_param*,char*) ;
 scalar_t__ FUNC_9 (char*,char**,char**) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (int,int ) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (char*,char*,char*) ;
 int FUNC_14 (char*,int) ;
 scalar_t__ FUNC_15 (char*) ;

int FUNC_16(
 u8 VAR_3,
 u8 VAR_4,
 char *VAR_5,
 u32 VAR_6,
 struct iscsi_conn *VAR_7)
{
 struct iscsi_param_list *VAR_8 = VAR_7->param_list;
 char *VAR_9, *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);

 VAR_9 = FUNC_11(VAR_6 + 1, VAR_1);
 if (!VAR_9) {
  FUNC_14("Unable to allocate %u + 1 bytes for tmpbuf.\n", VAR_6);
  return -VAR_0;
 }

 FUNC_12(VAR_9, VAR_5, VAR_6);
 VAR_9[VAR_6] = '\0';
 VAR_10 = VAR_9;
 VAR_11 = (VAR_10 + VAR_6);

 while (VAR_10 < VAR_11) {
  char *VAR_12, *VAR_13;
  struct iscsi_param *VAR_14;

  if (FUNC_9(VAR_10, &VAR_12, &VAR_13) < 0)
   goto free_buffer;

  FUNC_13("Got key: %s=%s\n", VAR_12, VAR_13);

  if (VAR_3 & VAR_2) {
   if (FUNC_5(VAR_12) > 0) {
    FUNC_10(VAR_9);
    return 1;
   }
  }

  VAR_14 = FUNC_6(VAR_12, VAR_3, VAR_4, VAR_8);
  if (!VAR_14) {
   if (FUNC_3(VAR_12, VAR_13,
            VAR_8) < 0)
    goto free_buffer;

   VAR_10 += FUNC_15(VAR_12) + FUNC_15(VAR_13) + 2;
   continue;
  }
  if (FUNC_8(VAR_14, VAR_13) < 0)
   goto free_buffer;

  VAR_10 += FUNC_15(VAR_12) + FUNC_15(VAR_13) + 2;

  if (FUNC_0(VAR_14)) {
   if (FUNC_7(VAR_14, VAR_13) < 0)
    goto free_buffer;

   FUNC_2(VAR_14);
  } else {
   if (FUNC_4(VAR_14, VAR_13, VAR_7) < 0)
    goto free_buffer;

   FUNC_1(VAR_14);
  }
 }

 FUNC_10(VAR_9);
 return 0;

free_buffer:
 FUNC_10(VAR_9);
 return -1;
}
