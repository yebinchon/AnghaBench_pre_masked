
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union gru_mesqhead {int val; } ;
struct gru_message_queue_desc {int qlines; int mq_gpa; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (void*,int ,int ,int ,int ,unsigned long,int ) ;
 int FUNC_3 (void*,int ,int ,int ,int ) ;
 unsigned long FUNC_4 (void*) ;
 unsigned int FUNC_5 (void*) ;
 unsigned int FUNC_6 (void*) ;
 union gru_mesqhead FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (void*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_9 (void*,struct gru_message_queue_desc*,void*) ;

__attribute__((used)) static int FUNC_10(void *VAR_13, struct gru_message_queue_desc *VAR_14,
    void *VAR_15, int VAR_16)
{
 union gru_mesqhead VAR_17;
 unsigned int VAR_18, VAR_19;
 unsigned long VAR_20;
 int VAR_21, VAR_22;


 VAR_20 = FUNC_4(VAR_13);
 VAR_19 = FUNC_5(VAR_13);
 VAR_18 = FUNC_6(VAR_13);

 VAR_22 = VAR_14->qlines;
 VAR_21 = (VAR_18 != VAR_22);

 if (VAR_21)
  VAR_17 = FUNC_7(VAR_22 / 2 + 1, VAR_22);
 else
  VAR_17 = FUNC_7(2, VAR_22 / 2 + 1);


 FUNC_3(VAR_13, VAR_2, FUNC_0(VAR_14->mq_gpa, VAR_21), VAR_8, VAR_4);
 if (FUNC_8(VAR_13) != VAR_0)
  goto cberr;
 if (!FUNC_4(VAR_13)) {
  FUNC_1(VAR_9);
  return VAR_5;
 }


 if (VAR_19 != VAR_18) {
  if (FUNC_9(VAR_13, VAR_14, VAR_15)) {
   FUNC_3(VAR_13, VAR_3, FUNC_0(VAR_14->mq_gpa, VAR_21),
     VAR_8, VAR_4);
   if (FUNC_8(VAR_13) != VAR_0)
    goto cberr;
   FUNC_1(VAR_10);
   return VAR_7;
  }
  VAR_20++;
 }


 FUNC_2(VAR_13, VAR_1, VAR_14->mq_gpa, VAR_8, VAR_17.val, VAR_20,
       VAR_4);
 if (FUNC_8(VAR_13) != VAR_0)
  goto cberr;


 if (FUNC_4(VAR_13) != VAR_20) {
  FUNC_1(VAR_11);
  FUNC_3(VAR_13, VAR_3, FUNC_0(VAR_14->mq_gpa, VAR_21), VAR_8,
       VAR_4);
  if (FUNC_8(VAR_13) != VAR_0)
   goto cberr;
 }
 return VAR_7;
cberr:
 FUNC_1(VAR_12);
 return VAR_6;
}
