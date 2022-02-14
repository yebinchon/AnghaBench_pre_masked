
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int TupleDataMax; scalar_t__ TupleOffset; int * TupleData; scalar_t__ Attributes; int DesiredTuple; } ;
typedef TYPE_1__ tuple_t ;
struct pcmcia_socket {int dev; } ;
typedef int cisdata_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (struct pcmcia_socket*,unsigned int,TYPE_1__*) ;
 int FUNC_4 (struct pcmcia_socket*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,void*) ;

int FUNC_6(struct pcmcia_socket *VAR_4, unsigned int VAR_5,
  cisdata_t VAR_6, void *VAR_7)
{
 tuple_t VAR_8;
 cisdata_t *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(256, VAR_2);
 if (VAR_9 == ((void*)0)) {
  FUNC_0(&VAR_4->dev, "no memory to read tuple\n");
  return -VAR_1;
 }
 VAR_8.DesiredTuple = VAR_6;
 VAR_8.Attributes = 0;
 if (VAR_5 == VAR_0)
  VAR_8.Attributes = VAR_3;
 VAR_10 = FUNC_3(VAR_4, VAR_5, &VAR_8);
 if (VAR_10 != 0)
  goto done;
 VAR_8.TupleData = VAR_9;
 VAR_8.TupleOffset = 0;
 VAR_8.TupleDataMax = 255;
 VAR_10 = FUNC_4(VAR_4, &VAR_8);
 if (VAR_10 != 0)
  goto done;
 VAR_10 = FUNC_5(&VAR_8, VAR_7);
done:
 FUNC_1(VAR_9);
 return VAR_10;
}
