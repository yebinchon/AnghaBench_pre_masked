
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_processor {int lock; } ;
struct command {size_t buffer_size; int queue_node; int wait; int status; int * lock; int kref; int * buffer; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct command*) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (size_t,int ) ;

struct command *FUNC_8(struct service_processor *VAR_4, size_t VAR_5)
{
 struct command *VAR_6;

 if (VAR_5 > VAR_1)
  return ((void*)0);

 VAR_6 = FUNC_7(sizeof(struct command), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);


 VAR_6->buffer = FUNC_7(VAR_5, VAR_0);
 if (VAR_6->buffer == ((void*)0)) {
  FUNC_5(VAR_6);
  return ((void*)0);
 }
 VAR_6->buffer_size = VAR_5;

 FUNC_6(&VAR_6->kref);
 VAR_6->lock = &VAR_4->lock;

 VAR_6->status = VAR_2;
 FUNC_4(&VAR_6->wait);
 FUNC_0(&VAR_6->queue_node);

 FUNC_1(&VAR_3);
 FUNC_3("command count: %d\n", FUNC_2(&VAR_3));

 return VAR_6;
}
