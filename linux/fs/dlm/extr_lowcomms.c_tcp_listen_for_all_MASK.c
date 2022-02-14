
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct socket*,struct connection*) ;
 int ** VAR_4 ;
 int FUNC_1 (char*) ;
 struct connection* FUNC_2 (int ,int ) ;
 struct socket* FUNC_3 (struct connection*,int *) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct socket *VAR_5 = ((void*)0);
 struct connection *VAR_6 = FUNC_2(0, VAR_3);
 int VAR_7 = -VAR_1;

 if (!VAR_6)
  return -VAR_2;


 if (VAR_4[1] != ((void*)0)) {
  FUNC_1("TCP protocol can't handle multi-homed hosts, "
     "try SCTP");
  return -VAR_1;
 }

 FUNC_1("Using TCP for communications");

 VAR_5 = FUNC_3(VAR_6, VAR_4[0]);
 if (VAR_5) {
  FUNC_0(VAR_5, VAR_6);
  VAR_7 = 0;
 }
 else {
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
