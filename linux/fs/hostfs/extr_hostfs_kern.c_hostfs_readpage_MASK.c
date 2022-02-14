
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct file {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 TYPE_1__* FUNC_2 (struct file*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 char* FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (char*,int ,scalar_t__) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (int ,int *,char*,scalar_t__) ;
 int FUNC_11 (struct page*) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_1, struct page *VAR_2)
{
 char *VAR_3;
 loff_t VAR_4 = FUNC_9(VAR_2);
 int VAR_5, VAR_6 = 0;

 VAR_3 = FUNC_6(VAR_2);
 VAR_5 = FUNC_10(FUNC_2(VAR_1)->fd, &VAR_4, VAR_3,
   VAR_0);
 if (VAR_5 < 0) {
  FUNC_1(VAR_2);
  FUNC_3(VAR_2);
  VAR_6 = VAR_5;
  goto out;
 }

 FUNC_8(VAR_3 + VAR_5, 0, VAR_0 - VAR_5);

 FUNC_0(VAR_2);
 FUNC_4(VAR_2);

 out:
 FUNC_5(VAR_2);
 FUNC_7(VAR_2);
 FUNC_11(VAR_2);
 return VAR_6;
}
