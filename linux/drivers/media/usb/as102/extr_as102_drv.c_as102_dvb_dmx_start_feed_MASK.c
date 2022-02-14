
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux_feed {int pid; int index; struct dvb_demux* demux; } ;
struct dvb_demux {struct as102_dev_t* priv; } ;
struct as102_dev_t {int sem; int streaming; } ;


 int VAR_0 ;
 int FUNC_0 (struct as102_dev_t*) ;
 int FUNC_1 (struct as102_dev_t*,int ,int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_4(struct dvb_demux_feed *VAR_2)
{
 int VAR_3 = 0;
 struct dvb_demux *VAR_4 = VAR_2->demux;
 struct as102_dev_t *VAR_5 = VAR_4->priv;

 if (FUNC_2(&VAR_5->sem))
  return -VAR_0;

 if (VAR_1)
  FUNC_1(VAR_5, VAR_2->index,
     VAR_2->pid, 1);

 if (VAR_5->streaming++ == 0)
  VAR_3 = FUNC_0(VAR_5);

 FUNC_3(&VAR_5->sem);
 return VAR_3;
}
