
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct htc_target {int dummy; } ;
struct htc_record_hdr {int len; int rec_id; } ;
struct htc_credit_report {int dummy; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int FUNC_2 (struct htc_target*,struct htc_credit_report*,int,int) ;

__attribute__((used)) static int FUNC_3(struct htc_target *VAR_2, u8 *VAR_3,
          int VAR_4, enum htc_endpoint_id VAR_5)
{
 struct htc_credit_report *VAR_6;
 struct htc_record_hdr *VAR_7;
 u8 *VAR_8;
 int VAR_9 = 0;

 while (VAR_4 > 0) {
  if (VAR_4 < sizeof(struct htc_record_hdr)) {
   VAR_9 = -VAR_1;
   break;
  }


  VAR_7 = (struct htc_record_hdr *) VAR_3;
  VAR_4 -= sizeof(struct htc_record_hdr);
  VAR_3 += sizeof(struct htc_record_hdr);

  if (VAR_7->len > VAR_4) {

   FUNC_1(VAR_0,
       "invalid length: %d (id:%d) buffer has: %d bytes left\n",
       VAR_7->len, VAR_7->rec_id, VAR_4);
   VAR_9 = -VAR_1;
   break;
  }


  VAR_8 = VAR_3;

  switch (VAR_7->rec_id) {
  case 128:
   if (VAR_7->len < sizeof(struct htc_credit_report)) {
    FUNC_0(1);
    return -VAR_1;
   }

   VAR_6 = (struct htc_credit_report *) VAR_8;
   FUNC_2(VAR_2, VAR_6,
        VAR_7->len / sizeof(*VAR_6),
        VAR_5);
   break;
  default:
   FUNC_1(VAR_0,
       "unhandled record: id:%d length:%d\n",
       VAR_7->rec_id, VAR_7->len);
   break;
  }


  VAR_3 += VAR_7->len;
  VAR_4 -= VAR_7->len;
 }

 return VAR_9;
}
