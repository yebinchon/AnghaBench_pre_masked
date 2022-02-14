
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {int dummy; } ;
struct o2hb_bio_wait_ctxt {int wc_error; int wc_num_reqs; } ;
struct bio {int dummy; } ;


 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct o2hb_bio_wait_ctxt*) ;
 struct bio* FUNC_5 (struct o2hb_region*,struct o2hb_bio_wait_ctxt*,unsigned int*,unsigned int,int ,int ) ;
 int FUNC_6 (struct o2hb_bio_wait_ctxt*) ;
 int FUNC_7 (struct bio*) ;

__attribute__((used)) static int FUNC_8(struct o2hb_region *VAR_1,
      unsigned int VAR_2,
      unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_2;
 int VAR_5;
 struct o2hb_bio_wait_ctxt VAR_6;
 struct bio *VAR_7;

 FUNC_4(&VAR_6);

 while(VAR_4 < VAR_3) {
  VAR_7 = FUNC_5(VAR_1, &VAR_6, &VAR_4, VAR_3,
      VAR_0, 0);
  if (FUNC_0(VAR_7)) {
   VAR_5 = FUNC_1(VAR_7);
   FUNC_3(VAR_5);
   goto bail_and_wait;
  }

  FUNC_2(&VAR_6.wc_num_reqs);
  FUNC_7(VAR_7);
 }

 VAR_5 = 0;

bail_and_wait:
 FUNC_6(&VAR_6);
 if (VAR_6.wc_error && !VAR_5)
  VAR_5 = VAR_6.wc_error;

 return VAR_5;
}
