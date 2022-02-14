
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {long timeout; unsigned int length; struct qeth_channel* channel; int ref_count; int list; int lock; int done; void* data; } ;
struct qeth_channel {int dummy; } ;
struct ccw1 {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 unsigned int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qeth_cmd_buffer*) ;
 void* FUNC_4 (unsigned int,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

struct qeth_cmd_buffer *FUNC_7(struct qeth_channel *VAR_3,
           unsigned int VAR_4, unsigned int VAR_5,
           long VAR_6)
{
 struct qeth_cmd_buffer *VAR_7;

 if (VAR_4 > VAR_2)
  return ((void*)0);

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->data = FUNC_4(FUNC_0(VAR_4, 8) + VAR_5 * sizeof(struct ccw1),
       VAR_1 | VAR_0);
 if (!VAR_7->data) {
  FUNC_3(VAR_7);
  return ((void*)0);
 }

 FUNC_2(&VAR_7->done);
 FUNC_6(&VAR_7->lock);
 FUNC_1(&VAR_7->list);
 FUNC_5(&VAR_7->ref_count, 1);
 VAR_7->channel = VAR_3;
 VAR_7->timeout = VAR_6;
 VAR_7->length = VAR_4;
 return VAR_7;
}
