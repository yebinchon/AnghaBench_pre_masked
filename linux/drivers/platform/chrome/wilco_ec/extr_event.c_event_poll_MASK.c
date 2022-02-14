
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct event_device_data* private_data; } ;
struct event_device_data {int events; int exist; int wq; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_4, poll_table *VAR_5)
{
 struct event_device_data *VAR_6 = VAR_4->private_data;
 __poll_t VAR_7 = 0;

 FUNC_1(VAR_4, &VAR_6->wq, VAR_5);
 if (!VAR_6->exist)
  return VAR_0;
 if (!FUNC_0(VAR_6->events))
  VAR_7 |= VAR_1 | VAR_3 | VAR_2;
 return VAR_7;
}
