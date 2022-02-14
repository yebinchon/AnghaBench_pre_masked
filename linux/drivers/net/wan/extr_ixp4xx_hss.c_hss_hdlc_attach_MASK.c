
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int hdlc_cfg; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;


 int VAR_2 ;
 struct port* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3, unsigned short VAR_4,
      unsigned short VAR_5)
{
 struct port *VAR_6 = FUNC_0(VAR_3);

 if (VAR_4 != VAR_1)
  return -VAR_0;

 switch(VAR_5) {
 case 129:
  VAR_6->hdlc_cfg = 0;
  return 0;

 case 128:
  VAR_6->hdlc_cfg = VAR_2;
  return 0;

 default:
  return -VAR_0;
 }
}
