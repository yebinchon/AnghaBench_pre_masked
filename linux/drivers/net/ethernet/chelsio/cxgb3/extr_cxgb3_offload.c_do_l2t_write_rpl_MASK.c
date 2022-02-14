
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cpl_l2t_write_rpl {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpl_l2t_write_rpl*) ;
 struct cpl_l2t_write_rpl* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct t3cdev *VAR_2, struct sk_buff *VAR_3)
{
 struct cpl_l2t_write_rpl *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->status != VAR_0)
  FUNC_2("Unexpected L2T_WRITE_RPL status %u for entry %u\n",
         VAR_4->status, FUNC_0(VAR_4));

 return VAR_1;
}
