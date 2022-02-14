
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct file {struct eventfd_ctx* private_data; } ;
struct eventfd_ctx {int count; int wqh; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_4, poll_table *VAR_5)
{
 struct eventfd_ctx *VAR_6 = VAR_4->private_data;
 __poll_t VAR_7 = 0;
 u64 VAR_8;

 FUNC_1(VAR_4, &VAR_6->wqh, VAR_5);
 VAR_8 = FUNC_0(VAR_6->count);

 if (VAR_8 > 0)
  VAR_7 |= VAR_1;
 if (VAR_8 == VAR_3)
  VAR_7 |= VAR_0;
 if (VAR_3 - 1 > VAR_8)
  VAR_7 |= VAR_2;

 return VAR_7;
}
