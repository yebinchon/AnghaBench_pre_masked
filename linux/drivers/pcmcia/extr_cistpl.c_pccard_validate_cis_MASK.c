
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int TupleCode; int Attributes; int DesiredTuple; } ;
typedef TYPE_1__ tuple_t ;
struct pcmcia_socket {int state; int ops_mutex; int dev; scalar_t__ functions; } ;
typedef TYPE_1__ cisparse_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pcmcia_socket*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pcmcia_socket*,int ,TYPE_1__*) ;
 int FUNC_8 (struct pcmcia_socket*,int ,TYPE_1__*) ;
 int FUNC_9 (struct pcmcia_socket*,int ,int ,TYPE_1__*) ;

int FUNC_10(struct pcmcia_socket *VAR_17, unsigned int *VAR_18)
{
 tuple_t *VAR_19;
 cisparse_t *VAR_20;
 unsigned int VAR_21 = 0;
 int VAR_22, VAR_23, VAR_24 = 0, VAR_25 = 0;

 if (!VAR_17)
  return -VAR_8;

 if (VAR_17->functions || !(VAR_17->state & VAR_15)) {
  FUNC_0(1);
  return -VAR_8;
 }


 FUNC_5(&VAR_17->ops_mutex);
 FUNC_1(VAR_17);
 FUNC_6(&VAR_17->ops_mutex);

 VAR_19 = FUNC_4(sizeof(*VAR_19), VAR_12);
 if (VAR_19 == ((void*)0)) {
  FUNC_2(&VAR_17->dev, "no memory to validate CIS\n");
  return -VAR_10;
 }
 VAR_20 = FUNC_4(sizeof(*VAR_20), VAR_12);
 if (VAR_20 == ((void*)0)) {
  FUNC_3(VAR_19);
  FUNC_2(&VAR_17->dev, "no memory to validate CIS\n");
  return -VAR_10;
 }

 VAR_21 = VAR_23 = 0;
 VAR_19->DesiredTuple = VAR_14;
 VAR_19->Attributes = VAR_16;
 VAR_22 = FUNC_7(VAR_17, VAR_0, VAR_19);
 if (VAR_22 != 0)
  goto done;



 if ((VAR_19->TupleCode == VAR_3) ||
     (!FUNC_9(VAR_17, VAR_0, VAR_1, VAR_20)) ||
     (!FUNC_9(VAR_17, VAR_0, VAR_2, VAR_20)))
  VAR_24++;




 if ((FUNC_9(VAR_17, VAR_0, VAR_4, VAR_20) == 0) ||
     (FUNC_9(VAR_17, VAR_0, VAR_5, VAR_20) == 0) ||
     (FUNC_9(VAR_17, VAR_0, VAR_6, VAR_20) != -VAR_11))
  VAR_25++;

 if (!VAR_24 && !VAR_25)
  goto done;

 for (VAR_21 = 1; VAR_21 < VAR_13; VAR_21++) {
  VAR_22 = FUNC_8(VAR_17, VAR_0, VAR_19);
  if (VAR_22 != 0)
   break;
  if (((VAR_19->TupleCode > 0x23) && (VAR_19->TupleCode < 0x40)) ||
      ((VAR_19->TupleCode > 0x47) && (VAR_19->TupleCode < 0x80)) ||
      ((VAR_19->TupleCode > 0x90) && (VAR_19->TupleCode < 0xff)))
   VAR_23++;
 }
 if ((VAR_21 == VAR_13) || (VAR_23 > 5) ||
  ((!VAR_24 || !VAR_25) && (VAR_21 > 10)))
  VAR_21 = 0;

 VAR_22 = 0;

done:

 if (!VAR_24 || !VAR_25 || !VAR_21) {
  FUNC_5(&VAR_17->ops_mutex);
  FUNC_1(VAR_17);
  FUNC_6(&VAR_17->ops_mutex);



  if (!VAR_24 || !VAR_25)
   VAR_22 = -VAR_9;
  else
   VAR_22 = -VAR_7;
 }

 if (VAR_18)
  *VAR_18 = VAR_21;
 FUNC_3(VAR_19);
 FUNC_3(VAR_20);
 return VAR_22;
}
