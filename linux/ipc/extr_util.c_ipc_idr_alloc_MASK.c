
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {scalar_t__ seq; int id; } ;
struct ipc_ids {int next_id; int in_use; int last_idx; scalar_t__ seq; int ipcs_idr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct kern_ipc_perm*,int ,int ,int ) ;
 int FUNC_1 (int *,int *,int ,int,int ) ;
 int FUNC_2 (int *,struct kern_ipc_perm*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static inline int FUNC_9(struct ipc_ids *VAR_3, struct kern_ipc_perm *VAR_4)
{
 int VAR_5, VAR_6 = -1;
 if (VAR_6 < 0) {
  int VAR_7;

  VAR_7 = FUNC_7(VAR_3->in_use*3/2, VAR_1);
  VAR_7 = FUNC_8(VAR_7, VAR_2);


  VAR_5 = FUNC_1(&VAR_3->ipcs_idr, ((void*)0), 0, VAR_7,
     VAR_0);

  if (VAR_5 >= 0) {





   if (VAR_5 <= VAR_3->last_idx) {
    VAR_3->seq++;
    if (VAR_3->seq >= FUNC_3())
     VAR_3->seq = 0;
   }
   VAR_3->last_idx = VAR_5;

   VAR_4->seq = VAR_3->seq;




   FUNC_2(&VAR_3->ipcs_idr, VAR_4, VAR_5);
  }
 } else {
  VAR_4->seq = FUNC_5(VAR_6);
  VAR_5 = FUNC_0(&VAR_3->ipcs_idr, VAR_4, FUNC_4(VAR_6),
    0, VAR_0);
 }
 if (VAR_5 >= 0)
  VAR_4->id = (VAR_4->seq << FUNC_6()) + VAR_5;
 return VAR_5;
}
