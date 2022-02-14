
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int (* b_end_io ) (struct buffer_head*,int) ;int b_state; } ;
struct bio {int bi_status; struct buffer_head* bi_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct buffer_head*,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct bio *VAR_2)
{
 struct buffer_head *VAR_3 = VAR_2->bi_private;

 if (FUNC_4(FUNC_0(VAR_2, VAR_1)))
  FUNC_2(VAR_0, &VAR_3->b_state);

 VAR_3->b_end_io(VAR_3, !VAR_2->bi_status);
 FUNC_1(VAR_2);
}
