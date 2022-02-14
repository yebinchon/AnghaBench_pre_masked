
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {int dummy; } ;
struct o2hb_bio_wait_ctxt {int wc_num_reqs; } ;
struct bio {int dummy; } ;


 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct o2hb_bio_wait_ctxt*) ;
 struct bio* FUNC_5 (struct o2hb_region*,struct o2hb_bio_wait_ctxt*,unsigned int*,unsigned int,int ,int ) ;
 unsigned int FUNC_6 () ;
 int FUNC_7 (struct bio*) ;

__attribute__((used)) static int FUNC_8(struct o2hb_region *VAR_2,
     struct o2hb_bio_wait_ctxt *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;
 struct bio *VAR_6;

 FUNC_4(VAR_3);

 VAR_5 = FUNC_6();

 VAR_6 = FUNC_5(VAR_2, VAR_3, &VAR_5, VAR_5+1, VAR_0,
     VAR_1);
 if (FUNC_0(VAR_6)) {
  VAR_4 = FUNC_1(VAR_6);
  FUNC_3(VAR_4);
  goto bail;
 }

 FUNC_2(&VAR_3->wc_num_reqs);
 FUNC_7(VAR_6);

 VAR_4 = 0;
bail:
 return VAR_4;
}
