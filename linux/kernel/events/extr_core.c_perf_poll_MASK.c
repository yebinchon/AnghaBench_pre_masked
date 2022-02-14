
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int poll; } ;
struct perf_event {int mmap_mutex; struct ring_buffer* rb; int waitq; } ;
struct file {struct perf_event* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_5(struct file *VAR_1, poll_table *VAR_2)
{
 struct perf_event *VAR_3 = VAR_1->private_data;
 struct ring_buffer *VAR_4;
 __poll_t VAR_5 = VAR_0;

 FUNC_4(VAR_1, &VAR_3->waitq, VAR_2);

 if (FUNC_1(VAR_3))
  return VAR_5;





 FUNC_2(&VAR_3->mmap_mutex);
 VAR_4 = VAR_3->rb;
 if (VAR_4)
  VAR_5 = FUNC_0(&VAR_4->poll, 0);
 FUNC_3(&VAR_3->mmap_mutex);
 return VAR_5;
}
