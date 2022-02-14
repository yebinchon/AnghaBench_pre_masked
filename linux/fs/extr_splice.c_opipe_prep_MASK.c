
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
 int FUNC_1 (struct pipe_inode_info*) ;
 int FUNC_2 (struct pipe_inode_info*) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct pipe_inode_info *VAR_6, unsigned int VAR_7)
{
 int VAR_8;





 if (VAR_6->nrbufs < VAR_6->buffers)
  return 0;

 VAR_8 = 0;
 FUNC_0(VAR_6);

 while (VAR_6->nrbufs >= VAR_6->buffers) {
  if (!VAR_6->readers) {
   FUNC_3(VAR_3, VAR_5, 0);
   VAR_8 = -VAR_1;
   break;
  }
  if (VAR_7 & VAR_4) {
   VAR_8 = -VAR_0;
   break;
  }
  if (FUNC_4(VAR_5)) {
   VAR_8 = -VAR_2;
   break;
  }
  VAR_6->waiting_writers++;
  FUNC_2(VAR_6);
  VAR_6->waiting_writers--;
 }

 FUNC_1(VAR_6);
 return VAR_8;
}
