
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int * ops; } ;
struct hvc_struct {scalar_t__ vtermno; int data; int outbuf_size; char* outbuf; int index; int next; struct hv_ops const* ops; int lock; int tty_resize; TYPE_1__ port; } ;
struct hv_ops {int dummy; } ;


 size_t FUNC_0 (int,int) ;
 int VAR_0 ;
 struct hvc_struct* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 struct hv_ops const** VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct hvc_struct* FUNC_6 (int,int ) ;
 int VAR_9 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__* VAR_10 ;

struct hvc_struct *FUNC_12(uint32_t VAR_11, int VAR_12,
        const struct hv_ops *VAR_13,
        int VAR_14)
{
 struct hvc_struct *VAR_15;
 int VAR_16;


 if (FUNC_3(&VAR_4)) {
  int VAR_17 = FUNC_5();
  if (VAR_17)
   return FUNC_1(VAR_17);
 }

 VAR_15 = FUNC_6(FUNC_0(sizeof(*VAR_15), sizeof(long)) + VAR_14,
   VAR_1);
 if (!VAR_15)
  return FUNC_1(-VAR_0);

 VAR_15->vtermno = VAR_11;
 VAR_15->data = VAR_12;
 VAR_15->ops = VAR_13;
 VAR_15->outbuf_size = VAR_14;
 VAR_15->outbuf = &((char *)VAR_15)[FUNC_0(sizeof(*VAR_15), sizeof(long))];

 FUNC_11(&VAR_15->port);
 VAR_15->port.ops = &VAR_5;

 FUNC_2(&VAR_15->tty_resize, VAR_6);
 FUNC_10(&VAR_15->lock);
 FUNC_8(&VAR_8);





 for (VAR_16=0; VAR_16 < VAR_2; VAR_16++)
  if (VAR_10[VAR_16] == VAR_15->vtermno &&
      VAR_3[VAR_16] == VAR_15->ops)
   break;


 if (VAR_16 >= VAR_2)
  VAR_16 = ++VAR_9;

 VAR_15->index = VAR_16;
 VAR_3[VAR_16] = VAR_13;
 VAR_10[VAR_16] = VAR_11;

 FUNC_7(&(VAR_15->next), &VAR_7);
 FUNC_9(&VAR_8);


 FUNC_4(VAR_16);

 return VAR_15;
}
