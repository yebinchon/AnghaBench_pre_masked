
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct journal_head {char* b_committed_data; } ;
struct buffer_head {int b_size; int b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {int b_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct journal_head*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct journal_head*,int) ;
 char* FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int ) ;
 struct journal_head* FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct journal_head*) ;
 scalar_t__ FUNC_6 (int *,struct buffer_head*,int) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 TYPE_1__* FUNC_9 (struct journal_head*) ;
 int FUNC_10 (char*,int ,int ) ;
 scalar_t__ FUNC_11 (char*) ;

int FUNC_12(handle_t *VAR_2, struct buffer_head *VAR_3)
{
 int VAR_4;
 struct journal_head *VAR_5;
 char *VAR_6 = ((void*)0);

 if (FUNC_6(VAR_2, VAR_3, 1))
  return 0;

 VAR_5 = FUNC_4(VAR_3);
 FUNC_0(VAR_5, "entry");






 VAR_4 = FUNC_1(VAR_2, VAR_5, 1);
 if (VAR_4)
  goto out;

repeat:
 if (!VAR_5->b_committed_data)
  VAR_6 = FUNC_2(FUNC_9(VAR_5)->b_size,
         VAR_0|VAR_1);

 FUNC_7(VAR_3);
 if (!VAR_5->b_committed_data) {


  FUNC_0(VAR_5, "generate b_committed data");
  if (!VAR_6) {
   FUNC_8(VAR_3);
   goto repeat;
  }

  VAR_5->b_committed_data = VAR_6;
  VAR_6 = ((void*)0);
  FUNC_10(VAR_5->b_committed_data, VAR_3->b_data, VAR_3->b_size);
 }
 FUNC_8(VAR_3);
out:
 FUNC_5(VAR_5);
 if (FUNC_11(VAR_6))
  FUNC_3(VAR_6, VAR_3->b_size);
 return VAR_4;
}
