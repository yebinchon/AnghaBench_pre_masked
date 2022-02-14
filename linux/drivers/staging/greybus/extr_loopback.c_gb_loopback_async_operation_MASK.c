
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_operation {TYPE_1__* request; } ;
struct gb_loopback_async_operation {int ts; void* completion; struct gb_operation* operation; struct gb_loopback* gb; } ;
struct gb_loopback {int outstanding_operations; int jiffy_timeout; int connection; } ;
struct TYPE_2__ {int payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 struct gb_operation* FUNC_2 (int ,int,int,int,int ) ;
 int FUNC_3 (struct gb_operation*) ;
 int FUNC_4 (struct gb_operation*,int ,int ,int ) ;
 int FUNC_5 (struct gb_operation*,struct gb_loopback_async_operation*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct gb_loopback_async_operation*) ;
 int FUNC_8 () ;
 struct gb_loopback_async_operation* FUNC_9 (int,int ) ;
 int FUNC_10 (int ,void*,int) ;

__attribute__((used)) static int FUNC_11(struct gb_loopback *VAR_3, int VAR_4,
           void *VAR_5, int VAR_6,
           int VAR_7,
           void *VAR_8)
{
 struct gb_loopback_async_operation *VAR_9;
 struct gb_operation *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_9(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_3->connection, VAR_4, VAR_6,
     VAR_7, VAR_1);
 if (!VAR_10) {
  FUNC_7(VAR_9);
  return -VAR_0;
 }

 if (VAR_6)
  FUNC_10(VAR_10->request->payload, VAR_5, VAR_6);

 FUNC_5(VAR_10, VAR_9);

 VAR_9->gb = VAR_3;
 VAR_9->operation = VAR_10;
 VAR_9->completion = VAR_8;

 VAR_9->ts = FUNC_8();

 FUNC_1(&VAR_3->outstanding_operations);
 VAR_11 = FUNC_4(VAR_10,
     VAR_2,
     FUNC_6(VAR_3->jiffy_timeout),
     VAR_1);
 if (VAR_11) {
  FUNC_0(&VAR_3->outstanding_operations);
  FUNC_3(VAR_10);
  FUNC_7(VAR_9);
 }
 return VAR_11;
}
