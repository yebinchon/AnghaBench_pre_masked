
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {int dummy; } ;
struct channel_info {struct dvb_frontend* frontend; } ;
struct c8sectpfei {int tsin_count; int dev; struct channel_info** channel_data; } ;
struct c8sectpfe {int adapter; } ;


 int VAR_0 ;
 struct c8sectpfe* FUNC_0 (struct c8sectpfei*,void*,void*) ;
 int FUNC_1 (struct dvb_frontend**,struct c8sectpfe*,struct channel_info*,int) ;
 int FUNC_2 (struct c8sectpfe*,struct c8sectpfei*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *,struct dvb_frontend*) ;

int FUNC_5(struct c8sectpfe **VAR_1,
    struct c8sectpfei *VAR_2,
    void *VAR_3,
    void *VAR_4)
{
 struct channel_info *VAR_5;
 struct dvb_frontend *VAR_6;
 int VAR_7, VAR_8;

 *VAR_1 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (!*VAR_1)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_2->tsin_count; VAR_7++) {
  VAR_5 = VAR_2->channel_data[VAR_7];

  VAR_8 = FUNC_1(&VAR_6, *VAR_1, VAR_5, VAR_7);
  if (VAR_8)
   goto err;

  VAR_8 = FUNC_4(&VAR_1[0]->adapter, VAR_6);
  if (VAR_8 < 0) {
   FUNC_3(VAR_2->dev, "dvb_register_frontend failed (%d)\n",
    VAR_8);
   goto err;
  }

  VAR_5->frontend = VAR_6;
 }

 return 0;

err:
 FUNC_2(*VAR_1, VAR_2);
 return VAR_8;
}
