
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int release; int * parent; } ;
struct rio_net {TYPE_1__ dev; int id; struct rio_mport* hport; int release; struct rio_id_table* enum_data; } ;
struct rio_mport {int dev; int id; int sys_size; } ;
struct rio_id_table {int lock; int max; int start; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 struct rio_id_table* FUNC_3 (size_t,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct rio_net*) ;
 struct rio_net* FUNC_6 (struct rio_mport*) ;
 int FUNC_7 (struct rio_net*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct rio_net *FUNC_9(struct rio_mport *VAR_3,
       int VAR_4, u16 VAR_5)
{
 struct rio_net *VAR_6;

 VAR_6 = FUNC_6(VAR_3);

 if (VAR_6 && VAR_4) {
  struct rio_id_table *VAR_7;
  size_t VAR_8;

  VAR_8 = sizeof(struct rio_id_table) +
    FUNC_0(
     FUNC_1(VAR_3->sys_size)
     ) * sizeof(long);

  VAR_7 = FUNC_3(VAR_8, VAR_0);

  if (VAR_7 == ((void*)0)) {
   FUNC_4("RIO: failed to allocate destID table\n");
   FUNC_7(VAR_6);
   VAR_6 = ((void*)0);
  } else {
   VAR_6->enum_data = VAR_7;
   VAR_6->release = VAR_2;
   VAR_7->start = VAR_5;
   VAR_7->max = FUNC_1(VAR_3->sys_size);
   FUNC_8(&VAR_7->lock);
  }
 }

 if (VAR_6) {
  VAR_6->id = VAR_3->id;
  VAR_6->hport = VAR_3;
  FUNC_2(&VAR_6->dev, "rnet_%d", VAR_6->id);
  VAR_6->dev.parent = &VAR_3->dev;
  VAR_6->dev.release = VAR_1;
  FUNC_5(VAR_6);
 }

 return VAR_6;
}
