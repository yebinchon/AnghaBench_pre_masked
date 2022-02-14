
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TCP_Server_Info {int in_flight; int max_in_flight; unsigned int reconnect_instance; scalar_t__ tcpStatus; int req_lock; int hostname; int CurrentMid; int request_q; TYPE_1__* ops; } ;
struct TYPE_2__ {int* (* get_credits_field ) (struct TCP_Server_Info*,int) ;} ;


 int const VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 long VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct TCP_Server_Info*) ;
 int FUNC_1 (struct TCP_Server_Info*) ;
 int FUNC_2 (int ,char*,int const) ;
 int FUNC_3 (struct TCP_Server_Info*,int*,int const) ;
 long FUNC_4 (int const) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int* FUNC_7 (struct TCP_Server_Info*,int) ;
 int FUNC_8 (int ,int ,int const) ;
 int FUNC_9 (int ,int ,long) ;

__attribute__((used)) static int
FUNC_10(struct TCP_Server_Info *VAR_13, const int VAR_14,
        const int VAR_15, const int VAR_16,
        unsigned int *VAR_17)
{
 int VAR_18;
 int *VAR_19;
 int VAR_20;
 long int VAR_21;

 if (VAR_15 < 0)
  VAR_21 = VAR_11;
 else
  VAR_21 = FUNC_4(VAR_15);

 VAR_20 = VAR_16 & VAR_3;

 *VAR_17 = 0;

 VAR_19 = VAR_13->ops->get_credits_field(VAR_13, VAR_20);

 if (*VAR_19 <= 0 && VAR_20 == VAR_1)
  return -VAR_6;

 FUNC_5(&VAR_13->req_lock);
 if ((VAR_16 & VAR_4) == VAR_2) {

  VAR_13->in_flight++;
  if (VAR_13->in_flight > VAR_13->max_in_flight)
   VAR_13->max_in_flight = VAR_13->in_flight;
  *VAR_19 -= 1;
  *VAR_17 = VAR_13->reconnect_instance;
  FUNC_6(&VAR_13->req_lock);
  return 0;
 }

 while (1) {
  if (*VAR_19 < VAR_14) {
   FUNC_6(&VAR_13->req_lock);
   FUNC_1(VAR_13);
   VAR_18 = FUNC_9(VAR_13->request_q,
    FUNC_3(VAR_13, VAR_19, VAR_14), VAR_21);
   FUNC_0(VAR_13);
   if (!VAR_18) {
    FUNC_8(VAR_13->CurrentMid,
     VAR_13->hostname, VAR_14);
    FUNC_2(VAR_12, "wait timed out after %d ms\n",
      VAR_15);
    return -VAR_8;
   }
   if (VAR_18 == -VAR_9)
    return -VAR_9;
   FUNC_5(&VAR_13->req_lock);
  } else {
   if (VAR_13->tcpStatus == VAR_5) {
    FUNC_6(&VAR_13->req_lock);
    return -VAR_7;
   }
   if (!VAR_20 && VAR_14 == 1 &&
       VAR_13->in_flight > 2 * VAR_10 &&
       *VAR_19 <= VAR_10) {
    FUNC_6(&VAR_13->req_lock);
    FUNC_1(VAR_13);
    VAR_18 = FUNC_9(
     VAR_13->request_q,
     FUNC_3(VAR_13, VAR_19,
          VAR_10 + 1),
     VAR_21);
    FUNC_0(VAR_13);
    if (!VAR_18) {
     FUNC_8(
      VAR_13->CurrentMid,
      VAR_13->hostname, VAR_14);
     FUNC_2(VAR_12, "wait timed out after %d ms\n",
       VAR_15);
     return -VAR_8;
    }
    if (VAR_18 == -VAR_9)
     return -VAR_9;
    FUNC_5(&VAR_13->req_lock);
    continue;
   }







   if ((VAR_16 & VAR_4) != VAR_0) {
    *VAR_19 -= VAR_14;
    VAR_13->in_flight += VAR_14;
    if (VAR_13->in_flight > VAR_13->max_in_flight)
     VAR_13->max_in_flight = VAR_13->in_flight;
    *VAR_17 = VAR_13->reconnect_instance;
   }
   FUNC_6(&VAR_13->req_lock);
   break;
  }
 }
 return 0;
}
