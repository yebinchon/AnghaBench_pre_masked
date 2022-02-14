
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int nrbufs; int buffers; int curbuf; scalar_t__ waiting_writers; struct pipe_buffer* bufs; int readers; } ;
struct pipe_buffer {size_t len; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pipe_inode_info*,struct pipe_buffer*) ;
 int FUNC_1 (struct pipe_buffer*) ;
 int FUNC_2 (struct pipe_inode_info*,struct pipe_inode_info*) ;
 int FUNC_3 (struct pipe_inode_info*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct pipe_inode_info*) ;

__attribute__((used)) static int FUNC_6(struct pipe_inode_info *VAR_7,
       struct pipe_inode_info *VAR_8,
       size_t VAR_9, unsigned int VAR_10)
{
 struct pipe_buffer *VAR_11, *VAR_12;
 int VAR_13 = 0, VAR_14 = 0, VAR_15;






 FUNC_2(VAR_7, VAR_8);

 do {
  if (!VAR_8->readers) {
   FUNC_4(VAR_4, VAR_6, 0);
   if (!VAR_13)
    VAR_13 = -VAR_2;
   break;
  }





  if (VAR_14 >= VAR_7->nrbufs || VAR_8->nrbufs >= VAR_8->buffers)
   break;

  VAR_11 = VAR_7->bufs + ((VAR_7->curbuf + VAR_14) & (VAR_7->buffers-1));
  VAR_15 = (VAR_8->curbuf + VAR_8->nrbufs) & (VAR_8->buffers - 1);





  if (!FUNC_0(VAR_7, VAR_11)) {
   if (VAR_13 == 0)
    VAR_13 = -VAR_1;
   break;
  }

  VAR_12 = VAR_8->bufs + VAR_15;
  *VAR_12 = *VAR_11;





  VAR_12->flags &= ~VAR_3;

  FUNC_1(VAR_12);

  if (VAR_12->len > VAR_9)
   VAR_12->len = VAR_9;

  VAR_8->nrbufs++;
  VAR_13 += VAR_12->len;
  VAR_9 -= VAR_12->len;
  VAR_14++;
 } while (VAR_9);





 if (!VAR_13 && VAR_7->waiting_writers && (VAR_10 & VAR_5))
  VAR_13 = -VAR_0;

 FUNC_3(VAR_7);
 FUNC_3(VAR_8);




 if (VAR_13 > 0)
  FUNC_5(VAR_8);

 return VAR_13;
}
