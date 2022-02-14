
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux_feed {int pid; int index; struct dvb_demux* demux; } ;
struct dvb_demux {struct as102_dev_t* priv; } ;
struct as102_dev_t {scalar_t__ streaming; int sem; } ;


 int VAR_0 ;
 int FUNC_0 (struct as102_dev_t*) ;
 int FUNC_1 (struct as102_dev_t*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_4(struct dvb_demux_feed *VAR_2)
{
 struct dvb_demux *VAR_3 = VAR_2->demux;
 struct as102_dev_t *VAR_4 = VAR_3->priv;

 if (FUNC_2(&VAR_4->sem))
  return -VAR_0;

 if (--VAR_4->streaming == 0)
  FUNC_0(VAR_4);

 if (VAR_1)
  FUNC_1(VAR_4, VAR_2->index,
     VAR_2->pid, 0);

 FUNC_3(&VAR_4->sem);
 return 0;
}
