
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media_request {scalar_t__ state; int debug_str; int lock; struct media_device* mdev; } ;
struct media_device {int dev; int req_queue_mutex; TYPE_1__* ops; } ;
typedef enum media_request_state { ____Placeholder_media_request_state } media_request_state ;
struct TYPE_2__ {int (* req_validate ) (struct media_request*) ;int (* req_queue ) (struct media_request*) ;} ;


 long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (struct media_request*) ;
 int FUNC_2 (struct media_request*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct media_request*) ;
 int FUNC_9 (struct media_request*) ;

__attribute__((used)) static long FUNC_10(struct media_request *VAR_4)
{
 struct media_device *VAR_5 = VAR_4->mdev;
 enum media_request_state VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 FUNC_0(VAR_5->dev, "request: queue %s\n", VAR_4->debug_str);







 FUNC_4(&VAR_5->req_queue_mutex);

 FUNC_1(VAR_4);

 FUNC_6(&VAR_4->lock, VAR_7);
 if (VAR_4->state == VAR_1)
  VAR_4->state = VAR_3;
 VAR_6 = VAR_4->state;
 FUNC_7(&VAR_4->lock, VAR_7);
 if (VAR_6 != VAR_3) {
  FUNC_0(VAR_5->dev,
   "request: unable to queue %s, request in state %s\n",
   VAR_4->debug_str, FUNC_3(VAR_6));
  FUNC_2(VAR_4);
  FUNC_5(&VAR_5->req_queue_mutex);
  return -VAR_0;
 }

 VAR_8 = VAR_5->ops->req_validate(VAR_4);
 FUNC_6(&VAR_4->lock, VAR_7);
 VAR_4->state = VAR_8 ? VAR_1
    : VAR_2;
 FUNC_7(&VAR_4->lock, VAR_7);

 if (!VAR_8)
  VAR_5->ops->req_queue(VAR_4);

 FUNC_5(&VAR_5->req_queue_mutex);

 if (VAR_8) {
  FUNC_0(VAR_5->dev, "request: can't queue %s (%d)\n",
   VAR_4->debug_str, VAR_8);
  FUNC_2(VAR_4);
 }

 return VAR_8;
}
