
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct file {struct dvb_device* private_data; } ;
struct dvb_device {struct ddb_output* priv; } ;
struct ddb_output {TYPE_2__* dma; TYPE_3__* port; } ;
struct ddb_input {TYPE_1__* dma; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_6__ {struct ddb_input** input; } ;
struct TYPE_5__ {int wq; } ;
struct TYPE_4__ {int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ddb_input*) ;
 int FUNC_1 (struct ddb_output*) ;
 int FUNC_2 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_4, poll_table *VAR_5)
{
 struct dvb_device *VAR_6 = VAR_4->private_data;
 struct ddb_output *VAR_7 = VAR_6->priv;
 struct ddb_input *VAR_8 = VAR_7->port->input[0];

 __poll_t VAR_9 = 0;

 FUNC_2(VAR_4, &VAR_8->dma->wq, VAR_5);
 FUNC_2(VAR_4, &VAR_7->dma->wq, VAR_5);
 if (FUNC_0(VAR_8) >= 188)
  VAR_9 |= VAR_0 | VAR_2;
 if (FUNC_1(VAR_7) >= 188)
  VAR_9 |= VAR_1 | VAR_3;
 return VAR_9;
}
