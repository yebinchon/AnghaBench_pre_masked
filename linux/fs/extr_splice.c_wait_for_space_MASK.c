
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {scalar_t__ nrbufs; scalar_t__ buffers; int waiting_writers; int readers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pipe_inode_info*) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct pipe_inode_info *VAR_6, unsigned VAR_7)
{
 for (;;) {
  if (FUNC_3(!VAR_6->readers)) {
   FUNC_1(VAR_3, VAR_5, 0);
   return -VAR_1;
  }
  if (VAR_6->nrbufs != VAR_6->buffers)
   return 0;
  if (VAR_7 & VAR_4)
   return -VAR_0;
  if (FUNC_2(VAR_5))
   return -VAR_2;
  VAR_6->waiting_writers++;
  FUNC_0(VAR_6);
  VAR_6->waiting_writers--;
 }
}
