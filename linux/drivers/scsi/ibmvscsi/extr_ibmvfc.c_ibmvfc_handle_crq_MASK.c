
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_host {int client_migrated; int dev; int pool; int logged_in; int state; } ;
struct ibmvfc_event {int (* done ) (struct ibmvfc_event*) ;int queue; int timer; int free; } ;
struct ibmvfc_crq {long ioba; int valid; long format; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long VAR_8 ;
 long VAR_9 ;
 long VAR_10 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,long) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ibmvfc_host*) ;
 int FUNC_6 (struct ibmvfc_host*,int ) ;
 int FUNC_7 (struct ibmvfc_host*,int ) ;
 long FUNC_8 (struct ibmvfc_host*) ;
 int FUNC_9 (struct ibmvfc_host*,int ) ;
 int FUNC_10 (struct ibmvfc_event*) ;
 int FUNC_11 (int *,struct ibmvfc_event*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct ibmvfc_event*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct ibmvfc_crq *VAR_11, struct ibmvfc_host *VAR_12)
{
 long VAR_13;
 struct ibmvfc_event *VAR_14 = (struct ibmvfc_event *)FUNC_1(VAR_11->ioba);

 switch (VAR_11->valid) {
 case 129:
  switch (VAR_11->format) {
  case 131:
   FUNC_4(VAR_12->dev, "Partner initialized\n");

   VAR_13 = FUNC_8(VAR_12);
   if (VAR_13 == 0)
    FUNC_5(VAR_12);
   else
    FUNC_3(VAR_12->dev, "Unable to send init rsp. rc=%ld\n", VAR_13);
   break;
  case 130:
   FUNC_4(VAR_12->dev, "Partner initialization complete\n");
   FUNC_5(VAR_12);
   break;
  default:
   FUNC_3(VAR_12->dev, "Unknown crq message type: %d\n", VAR_11->format);
  }
  return;
 case 128:
  VAR_12->state = VAR_7;
  VAR_12->logged_in = 0;
  FUNC_9(VAR_12, VAR_3);
  if (VAR_11->format == VAR_8) {

   FUNC_4(VAR_12->dev, "Partition migrated, Re-enabling adapter\n");
   VAR_12->client_migrated = 1;
   FUNC_7(VAR_12, VAR_1);
   FUNC_6(VAR_12, VAR_6);
   FUNC_9(VAR_12, VAR_4);
  } else if (VAR_11->format == VAR_10 || VAR_11->format == VAR_9) {
   FUNC_3(VAR_12->dev, "Host partner adapter deregistered or failed (rc=%d)\n", VAR_11->format);
   FUNC_7(VAR_12, VAR_0);
   FUNC_6(VAR_12, VAR_6);
   FUNC_9(VAR_12, VAR_5);
  } else {
   FUNC_3(VAR_12->dev, "Received unknown transport event from partner (rc=%d)\n", VAR_11->format);
  }
  return;
 case 132:
  break;
 default:
  FUNC_3(VAR_12->dev, "Got an invalid message type 0x%02x\n", VAR_11->valid);
  return;
 }

 if (VAR_11->format == VAR_2)
  return;





 if (FUNC_14(!FUNC_11(&VAR_12->pool, VAR_14))) {
  FUNC_3(VAR_12->dev, "Returned correlation_token 0x%08llx is invalid!\n",
   VAR_11->ioba);
  return;
 }

 if (FUNC_14(FUNC_0(&VAR_14->free))) {
  FUNC_3(VAR_12->dev, "Received duplicate correlation_token 0x%08llx!\n",
   VAR_11->ioba);
  return;
 }

 FUNC_2(&VAR_14->timer);
 FUNC_12(&VAR_14->queue);
 FUNC_10(VAR_14);
 VAR_14->done(VAR_14);
}
