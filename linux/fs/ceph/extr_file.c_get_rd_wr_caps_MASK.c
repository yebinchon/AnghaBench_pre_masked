
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct file*,int ,int ,int,int*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ,int,int*) ;
 int FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_5, int *VAR_6,
     struct file *VAR_7,
     loff_t VAR_8, int *VAR_9)
{
 int VAR_10 = 0;
 bool VAR_11 = 0;

retry_caps:
 VAR_10 = FUNC_0(VAR_7, VAR_3, VAR_0,
       VAR_8, VAR_9, ((void*)0));
 if (VAR_10 < 0)
  return VAR_10;






 VAR_10 = FUNC_3(FUNC_4(VAR_5),
    VAR_1, VAR_2,
    0, VAR_6);
 if (VAR_10 <= 0) {

  FUNC_2(FUNC_1(FUNC_4(VAR_7)), *VAR_9);
  if (VAR_11) {
   if (!VAR_10)

    VAR_10 = -VAR_4;
   return VAR_10;
  }
  VAR_10 = FUNC_0(VAR_5, VAR_1,
        VAR_2, -1, VAR_6, ((void*)0));
  if (VAR_10 < 0)
   return VAR_10;

  FUNC_2(FUNC_1(FUNC_4(VAR_5)), *VAR_6);
  VAR_11 = 1;
  goto retry_caps;
 }
 return VAR_10;
}
