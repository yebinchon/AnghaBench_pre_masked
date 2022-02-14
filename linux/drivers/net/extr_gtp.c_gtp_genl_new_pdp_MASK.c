
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int sk; } ;
struct gtp_dev {struct sock* sk1u; struct sock* sk0; } ;
struct genl_info {int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;


 struct gtp_dev* FUNC_0 (int ,int *) ;
 int FUNC_1 (struct gtp_dev*,struct sock*,struct genl_info*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_10, struct genl_info *VAR_11)
{
 unsigned int VAR_12;
 struct gtp_dev *VAR_13;
 struct sock *VAR_14;
 int VAR_15;

 if (!VAR_11->attrs[VAR_9] ||
     !VAR_11->attrs[VAR_4] ||
     !VAR_11->attrs[VAR_7] ||
     !VAR_11->attrs[VAR_5])
  return -VAR_0;

 VAR_12 = FUNC_2(VAR_11->attrs[VAR_9]);

 switch (VAR_12) {
 case 129:
  if (!VAR_11->attrs[VAR_8] ||
      !VAR_11->attrs[VAR_2])
   return -VAR_0;
  break;
 case 128:
  if (!VAR_11->attrs[VAR_3] ||
      !VAR_11->attrs[VAR_6])
   return -VAR_0;
  break;

 default:
  return -VAR_0;
 }

 FUNC_5();
 FUNC_3();

 VAR_13 = FUNC_0(FUNC_7(VAR_10->sk), VAR_11->attrs);
 if (!VAR_13) {
  VAR_15 = -VAR_1;
  goto out_unlock;
 }

 if (VAR_12 == 129)
  VAR_14 = VAR_13->sk0;
 else if (VAR_12 == 128)
  VAR_14 = VAR_13->sk1u;
 else
  VAR_14 = ((void*)0);

 if (!VAR_14) {
  VAR_15 = -VAR_1;
  goto out_unlock;
 }

 VAR_15 = FUNC_1(VAR_13, VAR_14, VAR_11);

out_unlock:
 FUNC_4();
 FUNC_6();
 return VAR_15;
}
