
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union bfa_port_stats_u {int dummy; } bfa_port_stats_u ;
struct TYPE_3__ {int port; } ;
struct TYPE_4__ {TYPE_1__ modules; } ;
struct bfad_s {int bfad_lock; TYPE_2__ bfa; } ;
struct bfad_hal_comp {scalar_t__ status; int comp; } ;
struct bfa_bsg_port_stats_s {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,void*,int ,struct bfad_hal_comp*) ;
 int FUNC_1 (struct bfad_s*,scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned int,int,int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct bfad_s *VAR_3, void *VAR_4,
   unsigned int VAR_5)
{
 struct bfa_bsg_port_stats_s *VAR_6 = (struct bfa_bsg_port_stats_s *)VAR_4;
 struct bfad_hal_comp VAR_7;
 void *VAR_8;
 unsigned long VAR_9;

 if (FUNC_2(VAR_5,
   sizeof(struct bfa_bsg_port_stats_s),
   sizeof(union bfa_port_stats_u)) != VAR_0) {
  VAR_6->status = VAR_1;
  return 0;
 }

 VAR_8 = (char *)VAR_6 + sizeof(struct bfa_bsg_port_stats_s);

 FUNC_3(&VAR_7.comp);
 FUNC_4(&VAR_3->bfad_lock, VAR_9);
 VAR_6->status = FUNC_0(&VAR_3->bfa.modules.port,
    VAR_8, VAR_2, &VAR_7);
 FUNC_5(&VAR_3->bfad_lock, VAR_9);
 if (VAR_6->status != VAR_0) {
  FUNC_1(VAR_3, VAR_6->status);
  goto out;
 }

 FUNC_6(&VAR_7.comp);
 VAR_6->status = VAR_7.status;
out:
 return 0;
}
