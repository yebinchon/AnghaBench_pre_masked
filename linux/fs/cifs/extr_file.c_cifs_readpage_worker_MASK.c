
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct file {int dummy; } ;
typedef int loff_t ;
struct TYPE_5__ {void* i_atime; void* i_mtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct file*,char*,int,int *) ;
 int FUNC_3 (TYPE_1__*,struct page*) ;
 int FUNC_4 (TYPE_1__*,struct page*) ;
 void* FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (struct file*) ;
 int FUNC_7 (struct page*) ;
 char* FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (char*,int ,int) ;
 scalar_t__ FUNC_11 (void**,void**) ;
 int FUNC_12 (struct page*) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_2, struct page *VAR_3,
 loff_t *VAR_4)
{
 char *VAR_5;
 int VAR_6;


 VAR_6 = FUNC_3(FUNC_6(VAR_2), VAR_3);
 if (VAR_6 == 0)
  goto read_complete;

 VAR_5 = FUNC_8(VAR_3);


 VAR_6 = FUNC_2(VAR_2, VAR_5, VAR_1, VAR_4);

 if (VAR_6 < 0)
  goto io_error;
 else
  FUNC_1(VAR_0, "Bytes read %d\n", VAR_6);


 FUNC_6(VAR_2)->i_atime = FUNC_5(FUNC_6(VAR_2));
 if (FUNC_11(&(FUNC_6(VAR_2)->i_atime), &(FUNC_6(VAR_2)->i_mtime)))
  FUNC_6(VAR_2)->i_atime = FUNC_6(VAR_2)->i_mtime;
 else
  FUNC_6(VAR_2)->i_atime = FUNC_5(FUNC_6(VAR_2));

 if (VAR_1 > VAR_6)
  FUNC_10(VAR_5 + VAR_6, 0, VAR_1 - VAR_6);

 FUNC_7(VAR_3);
 FUNC_0(VAR_3);


 FUNC_4(FUNC_6(VAR_2), VAR_3);

 VAR_6 = 0;

io_error:
 FUNC_9(VAR_3);
 FUNC_12(VAR_3);

read_complete:
 return VAR_6;
}
