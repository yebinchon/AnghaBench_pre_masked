
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_channel {int ccwdev; } ;
struct lcs_buffer {int dummy; } ;


 int FUNC_0 (int,int ,char*) ;
 struct lcs_buffer* FUNC_1 (struct lcs_channel*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static struct lcs_buffer *
FUNC_5(struct lcs_channel *VAR_1)
{
 struct lcs_buffer *VAR_2;
 unsigned long VAR_3;

 FUNC_0(5, VAR_0, "getbuff");
 FUNC_3(FUNC_2(VAR_1->ccwdev), VAR_3);
 VAR_2 = FUNC_1(VAR_1);
 FUNC_4(FUNC_2(VAR_1->ccwdev), VAR_3);
 return VAR_2;
}
