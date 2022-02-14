
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_device {int dummy; } ;
struct dvb_adapter {int dummy; } ;
struct dst_state {struct dvb_device* dst_ca; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*) ;
 scalar_t__ FUNC_1 (struct dvb_adapter*,struct dvb_device**,int *,struct dst_state*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

struct dvb_device *FUNC_2(struct dst_state *VAR_4, struct dvb_adapter *VAR_5)
{
 struct dvb_device *VAR_6;

 FUNC_0(VAR_3, VAR_0, 1, "registering DST-CA device");
 if (FUNC_1(VAR_5, &VAR_6, &VAR_2, VAR_4,
    VAR_1, 0) == 0) {
  VAR_4->dst_ca = VAR_6;
  return VAR_4->dst_ca;
 }

 return ((void*)0);
}
