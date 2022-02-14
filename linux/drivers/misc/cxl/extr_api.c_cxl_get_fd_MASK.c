
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_operations {int dummy; } ;
struct file {int f_mapping; } ;
struct cxl_context {int pe; scalar_t__ mapping; } ;


 int VAR_0 ;
 struct file* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct file*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct cxl_context*,int ) ;
 struct file* FUNC_4 (char*,struct file_operations*,struct cxl_context*,int) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

struct file *FUNC_9(struct cxl_context *VAR_12, struct file_operations *VAR_13,
   int *VAR_14)
{
 struct file *VAR_15;
 int VAR_16, VAR_17, VAR_18;
 char *VAR_19 = ((void*)0);


 if (VAR_12->mapping)
  return FUNC_0(-VAR_0);

 VAR_17 = VAR_3 | VAR_2;


 VAR_16 = FUNC_5(VAR_17);
 if (VAR_16 < 0)
  return FUNC_0(VAR_16);
 VAR_18 = VAR_16;




 if (VAR_13) {
  FUNC_2(VAR_7);
  FUNC_2(VAR_8);
  FUNC_2(VAR_9);
  FUNC_2(VAR_10);
  FUNC_2(VAR_11);
  FUNC_2(VAR_5);
  FUNC_2(VAR_6);
 } else
  VAR_13 = (struct file_operations *)&VAR_4;

 VAR_19 = FUNC_6(VAR_1, "cxl:%d", VAR_12->pe);
 VAR_15 = FUNC_4(VAR_19, VAR_13, VAR_12, VAR_17);
 FUNC_7(VAR_19);
 if (FUNC_1(VAR_15))
  goto err_fd;

 FUNC_3(VAR_12, VAR_15->f_mapping);
 *VAR_14 = VAR_18;
 return VAR_15;

err_fd:
 FUNC_8(VAR_18);
 return ((void*)0);
}
