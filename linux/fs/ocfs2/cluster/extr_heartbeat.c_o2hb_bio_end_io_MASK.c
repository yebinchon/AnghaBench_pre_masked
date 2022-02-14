
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_bio_wait_ctxt {int wc_error; } ;
struct bio {scalar_t__ bi_status; struct o2hb_bio_wait_ctxt* bi_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (struct o2hb_bio_wait_ctxt*,int) ;

__attribute__((used)) static void FUNC_4(struct bio *VAR_1)
{
 struct o2hb_bio_wait_ctxt *VAR_2 = VAR_1->bi_private;

 if (VAR_1->bi_status) {
  FUNC_2(VAR_0, "IO Error %d\n", VAR_1->bi_status);
  VAR_2->wc_error = FUNC_1(VAR_1->bi_status);
 }

 FUNC_3(VAR_2, 1);
 FUNC_0(VAR_1);
}
