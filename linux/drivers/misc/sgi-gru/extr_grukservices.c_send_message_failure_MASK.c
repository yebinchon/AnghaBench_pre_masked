
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_message_queue_desc {int dummy; } ;


 int FUNC_0 () ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (void*,struct gru_message_queue_desc*,void*,int) ;
 int FUNC_4 (void*,struct gru_message_queue_desc*,void*,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_8, struct gru_message_queue_desc *VAR_9,
    void *VAR_10, int VAR_11)
{
 int VAR_12, VAR_13 = 0;

 VAR_12 = FUNC_2(VAR_8);
 switch (VAR_12) {
 case 131:
  FUNC_1(VAR_7);
  VAR_13 = VAR_1;
  break;
 case 132:
  FUNC_1(VAR_4);
  VAR_13 = VAR_0;
  break;
 case 128:
  FUNC_1(VAR_6);
  VAR_13 = FUNC_4(VAR_8, VAR_9, VAR_10, VAR_11);
  break;
 case 133:
  FUNC_1(VAR_3);
  VAR_13 = VAR_0;
  break;
 case 129:
  FUNC_1(VAR_5);
  VAR_13 = FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11);
  break;
 case 130:
  FUNC_1(VAR_2);

 default:
  FUNC_0();
 }
 return VAR_13;
}
