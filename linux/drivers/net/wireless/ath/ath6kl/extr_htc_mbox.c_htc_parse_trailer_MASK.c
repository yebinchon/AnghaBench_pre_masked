
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct htc_target {int dummy; } ;
struct htc_record_hdr {int rec_id; int len; } ;
struct htc_lookahead_report {int pre_valid; int post_valid; int lk_ahd; } ;
struct htc_credit_report {int dummy; } ;
struct htc_bundle_lkahd_rpt {int lk_ahd; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*,char*,int *,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (struct htc_target*,struct htc_credit_report*,int,int) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static int FUNC_6(struct htc_target *VAR_3,
        struct htc_record_hdr *VAR_4,
        u8 *VAR_5, u32 *VAR_6,
        enum htc_endpoint_id VAR_7,
        int *VAR_8)
{
 struct htc_bundle_lkahd_rpt *VAR_9;
 struct htc_lookahead_report *VAR_10;
 int VAR_11;

 switch (VAR_4->rec_id) {
 case 130:
  VAR_11 = VAR_4->len / sizeof(struct htc_credit_report);
  if (!VAR_11) {
   FUNC_0(1);
   return -VAR_1;
  }

  FUNC_4(VAR_3,
      (struct htc_credit_report *) VAR_5,
      VAR_11, VAR_7);
  break;
 case 129:
  VAR_11 = VAR_4->len / sizeof(*VAR_10);
  if (!VAR_11) {
   FUNC_0(1);
   return -VAR_1;
  }

  VAR_10 = (struct htc_lookahead_report *) VAR_5;
  if ((VAR_10->pre_valid == ((~VAR_10->post_valid) & 0xFF)) &&
      VAR_6) {
   FUNC_1(VAR_0,
       "htc rx lk_ahd found pre_valid 0x%x post_valid 0x%x\n",
       VAR_10->pre_valid, VAR_10->post_valid);


   FUNC_5((u8 *)&VAR_6[0], VAR_10->lk_ahd, 4);

   FUNC_2(VAR_0,
     "htc rx next look ahead",
     "", VAR_6, 4);

   *VAR_8 = 1;
  }
  break;
 case 128:
  VAR_11 = VAR_4->len / sizeof(*VAR_9);
  if (!VAR_11 || (VAR_11 > VAR_2)) {
   FUNC_0(1);
   return -VAR_1;
  }

  if (VAR_6) {
   int VAR_12;

   VAR_9 =
    (struct htc_bundle_lkahd_rpt *) VAR_5;

   FUNC_2(VAR_0, "htc rx bundle lk_ahd",
     "", VAR_5, VAR_4->len);

   for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
    FUNC_5((u8 *)&VAR_6[VAR_12],
           VAR_9->lk_ahd, 4);
    VAR_9++;
   }

   *VAR_8 = VAR_12;
  }
  break;
 default:
  FUNC_3("unhandled record: id:%d len:%d\n",
      VAR_4->rec_id, VAR_4->len);
  break;
 }

 return 0;
}
