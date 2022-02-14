
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_tlv_parsed_buf {int data; int p_val; } ;
struct qed_mfw_tlv_time {int month; int day; int hour; int min; int msec; int usec; int b_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int,char*,int,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct qed_mfw_tlv_time *VAR_2,
      struct qed_tlv_parsed_buf *VAR_3)
{
 if (!VAR_2->b_set)
  return -1;


 if (VAR_2->month > 12)
  VAR_2->month = 0;
 if (VAR_2->day > 31)
  VAR_2->day = 0;
 if (VAR_2->hour > 23)
  VAR_2->hour = 0;
 if (VAR_2->min > 59)
  VAR_2->hour = 0;
 if (VAR_2->msec > 999)
  VAR_2->msec = 0;
 if (VAR_2->usec > 999)
  VAR_2->usec = 0;

 FUNC_0(VAR_3->data, 0, sizeof(u8) * VAR_1);
 FUNC_1(VAR_3->data, 14, "%d%d%d%d%d%d",
   VAR_2->month, VAR_2->day,
   VAR_2->hour, VAR_2->min, VAR_2->msec, VAR_2->usec);

 VAR_3->p_val = VAR_3->data;

 return VAR_0;
}
