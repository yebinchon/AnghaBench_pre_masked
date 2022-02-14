
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int nrbufs; int buffers; int curbuf; struct pipe_buffer* bufs; int readers; } ;
struct pipe_buffer {int len; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pipe_inode_info*,struct pipe_buffer*) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

ssize_t FUNC_3(struct pipe_inode_info *VAR_4, struct pipe_buffer *VAR_5)
{
 int VAR_6;

 if (FUNC_2(!VAR_4->readers)) {
  FUNC_1(VAR_2, VAR_3, 0);
  VAR_6 = -VAR_1;
 } else if (VAR_4->nrbufs == VAR_4->buffers) {
  VAR_6 = -VAR_0;
 } else {
  int VAR_7 = (VAR_4->curbuf + VAR_4->nrbufs) & (VAR_4->buffers - 1);
  VAR_4->bufs[VAR_7] = *VAR_5;
  VAR_4->nrbufs++;
  return VAR_5->len;
 }
 FUNC_0(VAR_4, VAR_5);
 return VAR_6;
}
