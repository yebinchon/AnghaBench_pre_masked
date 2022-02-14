
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gb_operation {TYPE_3__* response; TYPE_1__* request; } ;
struct gb_connection {int name; TYPE_2__* hd; } ;
struct TYPE_6__ {size_t payload_size; void* payload; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {void* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int,int) ;
 struct gb_operation* FUNC_1 (struct gb_connection*,int,size_t,size_t,unsigned int,int ) ;
 int FUNC_2 (struct gb_operation*) ;
 int FUNC_3 (struct gb_operation*) ;
 int FUNC_4 (void*,void*,size_t) ;

__attribute__((used)) static int FUNC_5(struct gb_connection *VAR_2,
       int VAR_3, unsigned int VAR_4,
       void *VAR_5, size_t VAR_6,
       void *VAR_7, size_t *VAR_8)
{
 struct gb_operation *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_6,
           *VAR_8, VAR_4,
           VAR_1);
 if (!VAR_9)
  return -VAR_0;

 if (VAR_6)
  FUNC_4(VAR_9->request->payload, VAR_5, VAR_6);

 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10) {
  FUNC_0(&VAR_2->hd->dev,
   "%s: synchronous operation of type 0x%02x failed: %d\n",
   VAR_2->name, VAR_3, VAR_10);
 } else {
  *VAR_8 = VAR_9->response->payload_size;

  if (VAR_9->response->payload_size)
   FUNC_4(VAR_7, VAR_9->response->payload,
          VAR_9->response->payload_size);
 }

 FUNC_2(VAR_9);

 return VAR_10;
}
