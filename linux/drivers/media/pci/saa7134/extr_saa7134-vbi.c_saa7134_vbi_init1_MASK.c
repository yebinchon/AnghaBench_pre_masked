
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct saa7134_dev* dev; int timeout; int queue; } ;
struct saa7134_dev {TYPE_1__ vbi_q; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_2 ;

int FUNC_2(struct saa7134_dev *VAR_3)
{
 FUNC_0(&VAR_3->vbi_q.queue);
 FUNC_1(&VAR_3->vbi_q.timeout, VAR_1, 0);
 VAR_3->vbi_q.dev = VAR_3;

 if (VAR_2 < 2)
  VAR_2 = 2;
 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;
 return 0;
}
