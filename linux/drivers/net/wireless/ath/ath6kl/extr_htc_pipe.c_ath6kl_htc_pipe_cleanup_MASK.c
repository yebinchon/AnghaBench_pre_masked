
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htc_target {struct htc_target* dev; } ;
struct htc_packet {struct htc_packet* dev; } ;


 struct htc_target* FUNC_0 (struct htc_target*) ;
 int FUNC_1 (struct htc_target*) ;

__attribute__((used)) static void FUNC_2(struct htc_target *VAR_0)
{
 struct htc_packet *VAR_1;

 while (1) {
  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1 == ((void*)0))
   break;
  FUNC_1(VAR_1);
 }

 FUNC_1(VAR_0->dev);


 FUNC_1(VAR_0);
}
