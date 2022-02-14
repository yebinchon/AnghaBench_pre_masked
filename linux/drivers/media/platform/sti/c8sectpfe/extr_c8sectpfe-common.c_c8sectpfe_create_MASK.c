
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct c8sectpfei {int tsin_count; int dev; } ;
struct TYPE_7__ {struct c8sectpfei* priv; } ;
struct c8sectpfe {int num_feeds; TYPE_3__ adapter; TYPE_1__* demux; int device; int lock; } ;
struct TYPE_6__ {int tsin_index; struct c8sectpfei* c8sectpfei; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (TYPE_3__*,char*,int ,int ,short*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct c8sectpfe*) ;
 struct c8sectpfe* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_3__*,void*,void*,struct c8sectpfei*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static struct c8sectpfe *FUNC_8(struct c8sectpfei *VAR_2,
    void *VAR_3,
    void *VAR_4)
{
 struct c8sectpfe *VAR_5;
 int VAR_6;
 int VAR_7, VAR_8;

 short int VAR_9[] = { -1 };

 VAR_5 = FUNC_4(sizeof(struct c8sectpfe), VAR_0);
 if (!VAR_5)
  goto err1;

 FUNC_5(&VAR_5->lock);

 VAR_5->device = VAR_2->dev;

 VAR_6 = FUNC_1(&VAR_5->adapter, "STi c8sectpfe",
     VAR_1, VAR_2->dev, VAR_9);
 if (VAR_6 < 0) {
  FUNC_0(VAR_2->dev, "dvb_register_adapter failed (errno = %d)\n",
   VAR_6);
  goto err2;
 }

 VAR_5->adapter.priv = VAR_2;

 for (VAR_7 = 0; VAR_7 < VAR_2->tsin_count; VAR_7++) {

  VAR_5->demux[VAR_7].tsin_index = VAR_7;
  VAR_5->demux[VAR_7].c8sectpfei = VAR_2;

  VAR_6 = FUNC_6(&VAR_5->demux[VAR_7], &VAR_5->adapter,
    VAR_3, VAR_4, VAR_2);
  if (VAR_6 < 0) {
   FUNC_0(VAR_2->dev,
    "register_dvb feed=%d failed (errno = %d)\n",
    VAR_6, VAR_7);


   for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
    FUNC_7(&VAR_5->demux[VAR_8]);
   goto err3;
  }
 }

 VAR_5->num_feeds = VAR_2->tsin_count;

 return VAR_5;
err3:
 FUNC_2(&VAR_5->adapter);
err2:
 FUNC_3(VAR_5);
err1:
 return ((void*)0);
}
