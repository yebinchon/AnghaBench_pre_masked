
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct net_device {int dummy; } ;
struct ehea_port {int allmulti; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct ehea_port*,int ,int ) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct ehea_port* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2, int VAR_3)
{
 struct ehea_port *VAR_4 = FUNC_3(VAR_2);
 u64 VAR_5;

 if (!VAR_4->allmulti) {
  if (VAR_3) {

   FUNC_0(VAR_2);
   VAR_5 = FUNC_1(VAR_4, 0, VAR_1);
   if (!VAR_5)
    VAR_4->allmulti = 1;
   else
    FUNC_2(VAR_2,
        "failed enabling IFF_ALLMULTI\n");
  }
 } else {
  if (!VAR_3) {

   VAR_5 = FUNC_1(VAR_4, 0, VAR_0);
   if (!VAR_5)
    VAR_4->allmulti = 0;
   else
    FUNC_2(VAR_2,
        "failed disabling IFF_ALLMULTI\n");
  }
 }
}
