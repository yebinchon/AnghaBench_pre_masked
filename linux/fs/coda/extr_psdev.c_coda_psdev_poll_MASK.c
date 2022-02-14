
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_comm {int vc_mutex; int vc_pending; int vc_waitq; } ;
struct file {scalar_t__ private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_4, poll_table * VAR_5)
{
        struct venus_comm *VAR_6 = (struct venus_comm *) VAR_4->private_data;
 __poll_t VAR_7 = VAR_1 | VAR_3;

 FUNC_3(VAR_4, &VAR_6->vc_waitq, VAR_5);
 FUNC_1(&VAR_6->vc_mutex);
 if (!FUNC_0(&VAR_6->vc_pending))
                VAR_7 |= VAR_0 | VAR_2;
 FUNC_2(&VAR_6->vc_mutex);

 return VAR_7;
}
