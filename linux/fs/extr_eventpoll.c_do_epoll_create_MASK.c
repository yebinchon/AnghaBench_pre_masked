
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct eventpoll {struct file* file; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct file*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct file*) ;
 struct file* FUNC_3 (char*,int *,struct eventpoll*,int) ;
 int FUNC_4 (struct eventpoll**) ;
 int FUNC_5 (struct eventpoll*) ;
 int VAR_4 ;
 int FUNC_6 (int,struct file*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(int VAR_5)
{
 int VAR_6, VAR_7;
 struct eventpoll *VAR_8 = ((void*)0);
 struct file *VAR_9;


 FUNC_0(VAR_1 != VAR_2);

 if (VAR_5 & ~VAR_1)
  return -VAR_0;



 VAR_6 = FUNC_4(&VAR_8);
 if (VAR_6 < 0)
  return VAR_6;




 VAR_7 = FUNC_7(VAR_3 | (VAR_5 & VAR_2));
 if (VAR_7 < 0) {
  VAR_6 = VAR_7;
  goto out_free_ep;
 }
 VAR_9 = FUNC_3("[eventpoll]", &VAR_4, VAR_8,
     VAR_3 | (VAR_5 & VAR_2));
 if (FUNC_1(VAR_9)) {
  VAR_6 = FUNC_2(VAR_9);
  goto out_free_fd;
 }
 VAR_8->file = VAR_9;
 FUNC_6(VAR_7, VAR_9);
 return VAR_7;

out_free_fd:
 FUNC_8(VAR_7);
out_free_ep:
 FUNC_5(VAR_8);
 return VAR_6;
}
