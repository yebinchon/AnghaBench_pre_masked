
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtproc_info {int last_sbuf; int num_bufs; int buf_size; int tx_lock; int svq; void* sbufs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ,unsigned int*) ;

__attribute__((used)) static void *FUNC_3(struct virtproc_info *VAR_0)
{
 unsigned int VAR_1;
 void *VAR_2;


 FUNC_0(&VAR_0->tx_lock);





 if (VAR_0->last_sbuf < VAR_0->num_bufs / 2)
  VAR_2 = VAR_0->sbufs + VAR_0->buf_size * VAR_0->last_sbuf++;

 else
  VAR_2 = FUNC_2(VAR_0->svq, &VAR_1);

 FUNC_1(&VAR_0->tx_lock);

 return VAR_2;
}
