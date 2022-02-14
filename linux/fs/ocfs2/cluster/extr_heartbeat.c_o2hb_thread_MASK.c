
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {int hr_node_deleted; int hr_last_hb_status; unsigned int hr_timeout_ms; int hr_blocks; int hr_aborted_start; int hr_unclean_stop; int * hr_slots; } ;
struct o2hb_bio_wait_ctxt {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (struct o2hb_region*) ;
 int FUNC_7 (struct o2hb_region*) ;
 int FUNC_8 (struct o2hb_region*,struct o2hb_bio_wait_ctxt*) ;
 int FUNC_9 (struct o2hb_region*,int ) ;
 int FUNC_10 (int *) ;
 int VAR_5 ;
 int FUNC_11 (struct o2hb_bio_wait_ctxt*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(void *VAR_6)
{
 int VAR_7, VAR_8;
 struct o2hb_region *VAR_9 = VAR_6;
 struct o2hb_bio_wait_ctxt VAR_10;
 ktime_t VAR_11, VAR_12;
 unsigned int VAR_13;

 FUNC_3(VAR_2|VAR_3, "hb thread running\n");

 FUNC_14(VAR_4, VAR_0);


 VAR_8 = FUNC_12();
 if (VAR_8) {
  FUNC_3(VAR_1, "Node has been deleted, ret = %d\n", VAR_8);
  VAR_9->hr_node_deleted = 1;
  FUNC_15(&VAR_5);
  return 0;
 }

 while (!FUNC_0() &&
        !VAR_9->hr_unclean_stop && !VAR_9->hr_aborted_start) {





  VAR_11 = FUNC_1();

  VAR_8 = FUNC_7(VAR_9);
  VAR_9->hr_last_hb_status = VAR_8;

  VAR_12 = FUNC_1();

  VAR_13 = (unsigned int)
    FUNC_2(VAR_12, VAR_11);

  FUNC_3(VAR_2,
       "start = %lld, end = %lld, msec = %u, ret = %d\n",
       VAR_11, VAR_12, VAR_13, VAR_8);

  if (!FUNC_0() &&
      VAR_13 < VAR_9->hr_timeout_ms) {


   FUNC_5(VAR_9->hr_timeout_ms - VAR_13);
  }
 }

 FUNC_6(VAR_9);


 for(VAR_7 = 0; !VAR_9->hr_unclean_stop && VAR_7 < VAR_9->hr_blocks; VAR_7++)
  FUNC_10(&VAR_9->hr_slots[VAR_7]);






 if (!VAR_9->hr_unclean_stop && !VAR_9->hr_aborted_start) {
  FUNC_9(VAR_9, 0);
  VAR_8 = FUNC_8(VAR_9, &VAR_10);
  if (VAR_8 == 0)
   FUNC_11(&VAR_10);
  else
   FUNC_4(VAR_8);
 }


 FUNC_13();

 FUNC_3(VAR_2|VAR_3, "o2hb thread exiting\n");

 return 0;
}
