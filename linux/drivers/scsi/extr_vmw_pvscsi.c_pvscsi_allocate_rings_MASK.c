
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvscsi_adapter {int req_pages; int req_depth; int cmp_pages; int msg_pages; int msgRingPA; void* msg_ring; TYPE_1__* dev; int use_msg; int cmpRingPA; int reqRingPA; int ringStatePA; void* cmp_ring; void* req_ring; void* rings_state; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (int *,int,int *,int ) ;
 void* FUNC_3 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(struct pvscsi_adapter *VAR_9)
{
 VAR_9->rings_state = FUNC_2(&VAR_9->dev->dev, VAR_2,
   &VAR_9->ringStatePA, VAR_1);
 if (!VAR_9->rings_state)
  return -VAR_0;

 VAR_9->req_pages = FUNC_3(VAR_5,
     VAR_8);
 VAR_9->req_depth = VAR_9->req_pages
     * VAR_6;
 VAR_9->req_ring = FUNC_2(&VAR_9->dev->dev,
   VAR_9->req_pages * VAR_2, &VAR_9->reqRingPA,
   VAR_1);
 if (!VAR_9->req_ring)
  return -VAR_0;

 VAR_9->cmp_pages = FUNC_3(VAR_3,
     VAR_8);
 VAR_9->cmp_ring = FUNC_2(&VAR_9->dev->dev,
   VAR_9->cmp_pages * VAR_2, &VAR_9->cmpRingPA,
   VAR_1);
 if (!VAR_9->cmp_ring)
  return -VAR_0;

 FUNC_0(!FUNC_1(VAR_9->ringStatePA, VAR_2));
 FUNC_0(!FUNC_1(VAR_9->reqRingPA, VAR_2));
 FUNC_0(!FUNC_1(VAR_9->cmpRingPA, VAR_2));

 if (!VAR_9->use_msg)
  return 0;

 VAR_9->msg_pages = FUNC_3(VAR_4,
     VAR_7);
 VAR_9->msg_ring = FUNC_2(&VAR_9->dev->dev,
   VAR_9->msg_pages * VAR_2, &VAR_9->msgRingPA,
   VAR_1);
 if (!VAR_9->msg_ring)
  return -VAR_0;
 FUNC_0(!FUNC_1(VAR_9->msgRingPA, VAR_2));

 return 0;
}
