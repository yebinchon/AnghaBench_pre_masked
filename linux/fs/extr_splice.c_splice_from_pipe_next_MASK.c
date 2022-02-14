
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct splice_desc {int flags; int need_wakeup; scalar_t__ num_spliced; } ;
struct pipe_inode_info {int waiting_writers; int writers; int nrbufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pipe_inode_info*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pipe_inode_info*) ;

__attribute__((used)) static int FUNC_3(struct pipe_inode_info *VAR_4, struct splice_desc *VAR_5)
{




 if (FUNC_1(VAR_3))
  return -VAR_1;

 while (!VAR_4->nrbufs) {
  if (!VAR_4->writers)
   return 0;

  if (!VAR_4->waiting_writers && VAR_5->num_spliced)
   return 0;

  if (VAR_5->flags & VAR_2)
   return -VAR_0;

  if (FUNC_1(VAR_3))
   return -VAR_1;

  if (VAR_5->need_wakeup) {
   FUNC_2(VAR_4);
   VAR_5->need_wakeup = 0;
  }

  FUNC_0(VAR_4);
 }

 return 1;
}
