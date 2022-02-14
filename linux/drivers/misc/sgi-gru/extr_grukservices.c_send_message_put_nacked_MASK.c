
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_message_queue_desc {int mq_gpa; int interrupt_vector; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,unsigned long,int ,int ,int,int,int ) ;
 int FUNC_3 (void*,unsigned long,int ,int ,int,int,int ) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (void*,struct gru_message_queue_desc*,void*) ;

__attribute__((used)) static int FUNC_6(void *VAR_7, struct gru_message_queue_desc *VAR_8,
   void *VAR_9, int VAR_10)
{
 unsigned long VAR_11;
 int VAR_12, VAR_13 = 200;

 VAR_11 = VAR_8->mq_gpa + (FUNC_0(VAR_7) << 6);
 if (VAR_10 == 2) {
  FUNC_2(VAR_7, VAR_11, 0, VAR_6, VAR_10, 1, VAR_1);
  if (FUNC_4(VAR_7) != VAR_0)
   return VAR_4;
 }
 FUNC_3(VAR_7, VAR_11, FUNC_1(VAR_9), VAR_6, VAR_10, 1, VAR_1);
 if (FUNC_4(VAR_7) != VAR_0)
  return VAR_4;

 if (!VAR_8->interrupt_vector)
  return VAR_3;
 do {
  VAR_12 = FUNC_5(VAR_7, VAR_8, VAR_9);
 } while ((VAR_12 == VAR_5 || VAR_12 == VAR_2) && (VAR_13-- > 0));

 if (VAR_12 == VAR_5 || VAR_12 == VAR_2) {







  VAR_12 = VAR_3;
 }
 return VAR_12;
}
