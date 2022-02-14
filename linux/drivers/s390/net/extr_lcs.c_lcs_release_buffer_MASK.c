
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_channel {int ccwdev; } ;
struct lcs_buffer {scalar_t__ state; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct lcs_channel *VAR_4, struct lcs_buffer *VAR_5)
{
 unsigned long VAR_6;

 FUNC_1(5, VAR_3, "relbuff");
 FUNC_0(VAR_5->state != VAR_1 &&
        VAR_5->state != VAR_2);
 FUNC_3(FUNC_2(VAR_4->ccwdev), VAR_6);
 VAR_5->state = VAR_0;
 FUNC_4(FUNC_2(VAR_4->ccwdev), VAR_6);
}
