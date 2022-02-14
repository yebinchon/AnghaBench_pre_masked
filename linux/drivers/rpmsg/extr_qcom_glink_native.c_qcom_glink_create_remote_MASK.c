
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_glink {int dummy; } ;
struct glink_channel {int refcount; int open_ack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct qcom_glink*,struct glink_channel*) ;
 int FUNC_2 (struct qcom_glink*,struct glink_channel*) ;
 int FUNC_3 (struct qcom_glink*,struct glink_channel*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(struct qcom_glink *VAR_3,
        struct glink_channel *VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_3, VAR_4);

 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (VAR_5)
  goto close_link;

 VAR_5 = FUNC_4(&VAR_4->open_ack, 5 * VAR_1);
 if (!VAR_5) {
  VAR_5 = -VAR_0;
  goto close_link;
 }

 return 0;

close_link:




 FUNC_1(VAR_3, VAR_4);


 FUNC_0(&VAR_4->refcount, VAR_2);

 return VAR_5;
}
