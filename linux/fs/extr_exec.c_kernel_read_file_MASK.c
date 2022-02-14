
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct file {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
typedef enum kernel_read_file_id { ____Placeholder_kernel_read_file_id } kernel_read_file_id ;
struct TYPE_3__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 TYPE_1__* FUNC_3 (struct file*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct file*,void*,scalar_t__,scalar_t__*) ;
 int FUNC_6 (struct file*,void*,scalar_t__,int) ;
 int FUNC_7 (struct file*,int) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (scalar_t__) ;

int FUNC_10(struct file *VAR_6, void **VAR_7, loff_t *VAR_8,
       loff_t VAR_9, enum kernel_read_file_id VAR_10)
{
 loff_t VAR_11, VAR_12;
 ssize_t VAR_13 = 0;
 int VAR_14;

 if (!FUNC_0(FUNC_3(VAR_6)->i_mode) || VAR_9 < 0)
  return -VAR_1;

 VAR_14 = FUNC_2(VAR_6);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_7(VAR_6, VAR_10);
 if (VAR_14)
  goto out;

 VAR_11 = FUNC_4(FUNC_3(VAR_6));
 if (VAR_11 <= 0) {
  VAR_14 = -VAR_1;
  goto out;
 }
 if (VAR_11 > VAR_5 || (VAR_9 > 0 && VAR_11 > VAR_9)) {
  VAR_14 = -VAR_0;
  goto out;
 }

 if (VAR_10 != VAR_4)
  *VAR_7 = FUNC_9(VAR_11);
 if (!*VAR_7) {
  VAR_14 = -VAR_3;
  goto out;
 }

 VAR_12 = 0;
 while (VAR_12 < VAR_11) {
  VAR_13 = FUNC_5(VAR_6, *VAR_7 + VAR_12, VAR_11 - VAR_12, &VAR_12);
  if (VAR_13 < 0) {
   VAR_14 = VAR_13;
   goto out_free;
  }

  if (VAR_13 == 0)
   break;
 }

 if (VAR_12 != VAR_11) {
  VAR_14 = -VAR_2;
  goto out_free;
 }

 VAR_14 = FUNC_6(VAR_6, *VAR_7, VAR_11, VAR_10);
 if (!VAR_14)
  *VAR_8 = VAR_12;

out_free:
 if (VAR_14 < 0) {
  if (VAR_10 != VAR_4) {
   FUNC_8(*VAR_7);
   *VAR_7 = ((void*)0);
  }
 }

out:
 FUNC_1(VAR_6);
 return VAR_14;
}
