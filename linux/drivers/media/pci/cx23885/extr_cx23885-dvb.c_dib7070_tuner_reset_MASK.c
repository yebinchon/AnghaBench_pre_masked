
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib7000p_ops* sec_priv; } ;
struct dib7000p_ops {int (* set_gpio ) (struct dvb_frontend*,int,int ,int) ;} ;


 int FUNC_0 (struct dvb_frontend*,int,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct dib7000p_ops *VAR_2 = VAR_0->sec_priv;

 return VAR_2->set_gpio(VAR_0, 8, 0, !VAR_1);
}
