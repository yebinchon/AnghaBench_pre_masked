
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct xc4000_priv {int ignore_i2c_write_errors; TYPE_1__* firm; } ;
struct dvb_frontend {struct xc4000_priv* tuner_priv; } ;
struct TYPE_2__ {unsigned char* ptr; } ;


 int FUNC_0 (struct dvb_frontend*,unsigned int,int *) ;
 int FUNC_1 (struct dvb_frontend*,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, unsigned int VAR_1,
    v4l2_std_id *VAR_2)
{
 struct xc4000_priv *VAR_3 = VAR_0->tuner_priv;
 int VAR_4, VAR_5;
 unsigned char *VAR_6;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_6 = VAR_3->firm[VAR_4].ptr;


 VAR_3->ignore_i2c_write_errors = 1;

 VAR_5 = FUNC_1(VAR_0, VAR_6);

 VAR_3->ignore_i2c_write_errors = 0;

 return VAR_5;
}
