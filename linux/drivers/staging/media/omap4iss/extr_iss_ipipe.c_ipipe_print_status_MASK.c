
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_ipipe_device {int dummy; } ;
struct iss_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct iss_device*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*) ;
 struct iss_device* FUNC_2 (struct iss_ipipe_device*) ;

__attribute__((used)) static void FUNC_3(struct iss_ipipe_device *VAR_10)
{
 struct iss_device *VAR_11 = FUNC_2(VAR_10);

 FUNC_1(VAR_11->dev, "-------------IPIPE Register dump-------------\n");

 FUNC_0(VAR_11, VAR_2);
 FUNC_0(VAR_11, VAR_6);
 FUNC_0(VAR_11, VAR_3);
 FUNC_0(VAR_11, VAR_1);
 FUNC_0(VAR_11, VAR_7);
 FUNC_0(VAR_11, VAR_8);
 FUNC_0(VAR_11, VAR_4);
 FUNC_0(VAR_11, VAR_5);
 FUNC_0(VAR_11, VAR_0);
 FUNC_0(VAR_11, VAR_9);

 FUNC_1(VAR_11->dev, "-----------------------------------------------\n");
}
