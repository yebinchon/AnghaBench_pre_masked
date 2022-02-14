
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {unsigned int buffers; unsigned int nrbufs; unsigned int curbuf; int user; struct pipe_buffer* bufs; } ;
struct pipe_buffer {int dummy; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned long FUNC_0 (int ,unsigned int,unsigned int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 struct pipe_buffer* FUNC_3 (unsigned int,int,int) ;
 int FUNC_4 (struct pipe_buffer*) ;
 int FUNC_5 (struct pipe_buffer*,struct pipe_buffer*,unsigned int) ;
 unsigned int VAR_9 ;
 unsigned int FUNC_6 (unsigned long) ;
 scalar_t__ FUNC_7 (unsigned long) ;
 scalar_t__ FUNC_8 (unsigned long) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static long FUNC_10(struct pipe_inode_info *VAR_10, unsigned long VAR_11)
{
 struct pipe_buffer *VAR_12;
 unsigned int VAR_13, VAR_14;
 unsigned long VAR_15;
 long VAR_16 = 0;

 VAR_13 = FUNC_6(VAR_11);
 VAR_14 = VAR_13 >> VAR_6;

 if (!VAR_14)
  return -VAR_2;
 if (VAR_14 > VAR_10->buffers &&
   VAR_13 > VAR_9 && !FUNC_1(VAR_0))
  return -VAR_4;

 VAR_15 = FUNC_0(VAR_10->user, VAR_10->buffers, VAR_14);

 if (VAR_14 > VAR_10->buffers &&
   (FUNC_7(VAR_15) ||
    FUNC_8(VAR_15)) &&
   FUNC_2()) {
  VAR_16 = -VAR_4;
  goto out_revert_acct;
 }







 if (VAR_14 < VAR_10->nrbufs) {
  VAR_16 = -VAR_1;
  goto out_revert_acct;
 }

 VAR_12 = FUNC_3(VAR_14, sizeof(*VAR_12),
         VAR_5 | VAR_8);
 if (FUNC_9(!VAR_12)) {
  VAR_16 = -VAR_3;
  goto out_revert_acct;
 }





 if (VAR_10->nrbufs) {
  unsigned int VAR_17;
  unsigned int VAR_18;

  VAR_17 = VAR_10->curbuf + VAR_10->nrbufs;
  if (VAR_17 < VAR_10->buffers)
   VAR_17 = 0;
  else
   VAR_17 &= (VAR_10->buffers - 1);

  VAR_18 = VAR_10->nrbufs - VAR_17;
  if (VAR_18)
   FUNC_5(VAR_12, VAR_10->bufs + VAR_10->curbuf, VAR_18 * sizeof(struct pipe_buffer));
  if (VAR_17)
   FUNC_5(VAR_12 + VAR_18, VAR_10->bufs, VAR_17 * sizeof(struct pipe_buffer));
 }

 VAR_10->curbuf = 0;
 FUNC_4(VAR_10->bufs);
 VAR_10->bufs = VAR_12;
 VAR_10->buffers = VAR_14;
 return VAR_14 * VAR_7;

out_revert_acct:
 (void) FUNC_0(VAR_10->user, VAR_14, VAR_10->buffers);
 return VAR_16;
}
