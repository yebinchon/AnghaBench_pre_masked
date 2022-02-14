
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_dev {unsigned int card_idx; int * vf_jobtimeout_msec; int kill_timeout; int ddcb_software_timeout; int print_lock; int card_state; int file_list; int file_lock; int queue_waitq; int use_platform_recovery; int debugfs_genwqe; int class_genwqe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct genwqe_dev* FUNC_0 (int ) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 struct genwqe_dev** VAR_12 ;
 int FUNC_2 (int *) ;
 struct genwqe_dev* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct genwqe_dev *FUNC_5(void)
{
 unsigned int VAR_13 = 0, VAR_14;
 struct genwqe_dev *VAR_15;

 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  if (VAR_12[VAR_13] == ((void*)0))
   break;
 }
 if (VAR_13 >= VAR_3)
  return FUNC_0(-VAR_1);

 VAR_15 = FUNC_3(sizeof(struct genwqe_dev), VAR_9);
 if (!VAR_15)
  return FUNC_0(-VAR_2);

 VAR_15->card_idx = VAR_13;
 VAR_15->class_genwqe = VAR_10;
 VAR_15->debugfs_genwqe = VAR_11;





 VAR_15->use_platform_recovery = VAR_0;

 FUNC_2(&VAR_15->queue_waitq);

 FUNC_4(&VAR_15->file_lock);
 FUNC_1(&VAR_15->file_list);

 VAR_15->card_state = VAR_4;
 FUNC_4(&VAR_15->print_lock);

 VAR_15->ddcb_software_timeout = VAR_5;
 VAR_15->kill_timeout = VAR_6;

 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++)
  VAR_15->vf_jobtimeout_msec[VAR_14] = VAR_8;

 VAR_12[VAR_13] = VAR_15;
 return VAR_15;
}
