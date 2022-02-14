
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {int tv_nsec; int tv_sec; } ;
struct bfad_s {int bfad_flags; TYPE_1__* im; int inst_no; } ;
struct bfa_aen_entry_s {int aen_tv_usec; int seq_num; int aen_category; int aen_type; int bfad_num; int aen_tv_sec; } ;
typedef enum bfa_aen_category { ____Placeholder_bfa_aen_category } bfa_aen_category ;
struct TYPE_2__ {int aen_im_notify_work; int drv_workq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timespec64*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void FUNC_2(struct bfa_aen_entry_s *VAR_2,
          struct bfad_s *VAR_3, int VAR_4,
          enum bfa_aen_category VAR_5,
          int VAR_6)
{
 struct timespec64 VAR_7;

 FUNC_0(&VAR_7);





 VAR_2->aen_tv_sec = VAR_7.tv_sec;
 VAR_2->aen_tv_usec = VAR_7.tv_nsec / VAR_1;
 VAR_2->bfad_num = VAR_3->inst_no;
 VAR_2->seq_num = VAR_4;
 VAR_2->aen_category = VAR_5;
 VAR_2->aen_type = VAR_6;
 if (VAR_3->bfad_flags & VAR_0)
  FUNC_1(VAR_3->im->drv_workq, &VAR_3->im->aen_im_notify_work);
}
