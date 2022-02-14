
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_lba_map {int dummy; } ;
struct se_device {int dummy; } ;
struct list_head {int dummy; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct list_head*) ;
 scalar_t__ FUNC_1 (struct t10_alua_lba_map*) ;
 int FUNC_2 (struct t10_alua_lba_map*) ;
 struct t10_alua_lba_map* FUNC_3 (struct list_head*,unsigned long,unsigned long) ;
 int FUNC_4 (struct t10_alua_lba_map*,int,int) ;
 int FUNC_5 (struct list_head*) ;
 int FUNC_6 (struct se_device*,struct list_head*,unsigned long,unsigned long) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char const*,int ) ;
 int FUNC_9 (char*,int,...) ;
 int FUNC_10 (char*,char*,...) ;
 char* FUNC_11 (char*,char) ;
 char* FUNC_12 (char**,char*) ;
 struct se_device* FUNC_13 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_14(struct config_item *VAR_7,
  const char *VAR_8, size_t VAR_9)
{
 struct se_device *VAR_10 = FUNC_13(VAR_7);
 struct t10_alua_lba_map *VAR_11 = ((void*)0);
 struct list_head VAR_12;
 char *VAR_13, *VAR_14, *VAR_15;
 char VAR_16;
 int VAR_17 = -1, VAR_18;
 int VAR_19 = 0, VAR_20 = 0, VAR_21, VAR_22;
 unsigned long VAR_23 = -1, VAR_24 = -1;
 unsigned long VAR_25 = -1, VAR_26 = -1;

 VAR_14 = VAR_13 = FUNC_8(VAR_8, VAR_6);
 if (!VAR_13)
  return -VAR_5;

 FUNC_0(&VAR_12);
 while ((VAR_15 = FUNC_12(&VAR_13, "\n")) != ((void*)0)) {
  if (!*VAR_15)
   continue;

  if (VAR_20 == 0) {
   if (FUNC_10(VAR_15, "%lu %lu\n",
       &VAR_25, &VAR_26) != 2) {
    FUNC_9("Invalid line %d\n", VAR_20);
    VAR_19 = -VAR_4;
    break;
   }
   VAR_20++;
   continue;
  }
  if (FUNC_10(VAR_15, "%lu %lu", &VAR_23, &VAR_24) != 2) {
   FUNC_9("Invalid line %d\n", VAR_20);
   VAR_19 = -VAR_4;
   break;
  }
  VAR_15 = FUNC_11(VAR_15, ' ');
  if (!VAR_15) {
   FUNC_9("Invalid line %d, missing end lba\n", VAR_20);
   VAR_19 = -VAR_4;
   break;
  }
  VAR_15++;
  VAR_15 = FUNC_11(VAR_15, ' ');
  if (!VAR_15) {
   FUNC_9("Invalid line %d, missing state definitions\n",
          VAR_20);
   VAR_19 = -VAR_4;
   break;
  }
  VAR_15++;
  VAR_11 = FUNC_3(&VAR_12,
           VAR_23, VAR_24);
  if (FUNC_1(VAR_11)) {
   VAR_19 = FUNC_2(VAR_11);
   break;
  }
  VAR_18 = 0;
  while (FUNC_10(VAR_15, "%d:%c", &VAR_21, &VAR_16) == 2) {
   switch (VAR_16) {
   case 'O':
    VAR_22 = VAR_1;
    break;
   case 'A':
    VAR_22 = VAR_0;
    break;
   case 'S':
    VAR_22 = VAR_2;
    break;
   case 'U':
    VAR_22 = VAR_3;
    break;
   default:
    FUNC_9("Invalid ALUA state '%c'\n", VAR_16);
    VAR_19 = -VAR_4;
    goto out;
   }

   VAR_19 = FUNC_4(VAR_11,
            VAR_21, VAR_22);
   if (VAR_19) {
    FUNC_9("Invalid target descriptor %d:%c "
           "at line %d\n",
           VAR_21, VAR_16, VAR_20);
    break;
   }
   VAR_18++;
   VAR_15 = FUNC_11(VAR_15, ' ');
   if (VAR_15)
    VAR_15++;
   else
    break;
  }
  if (VAR_17 == -1)
      VAR_17 = VAR_18;
  else if (VAR_18 != VAR_17) {
   FUNC_9("Only %d from %d port groups definitions "
          "at line %d\n", VAR_18, VAR_17, VAR_20);
   VAR_19 = -VAR_4;
   break;
  }
  VAR_20++;
 }
out:
 if (VAR_19) {
  FUNC_5(&VAR_12);
  VAR_9 = VAR_19;
 } else
  FUNC_6(VAR_10, &VAR_12,
          VAR_25, VAR_26);
 FUNC_7(VAR_14);
 return VAR_9;
}
