
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int dummy; } ;
struct ca_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dst_state*,struct ca_msg*,struct ca_msg*,int,int ) ;
 int FUNC_1 (int ,int ,int,char*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct dst_state *VAR_6, struct ca_msg *VAR_7, struct ca_msg *VAR_8)
{
 int VAR_9 = 0;





 if (VAR_9) {
  if ((FUNC_0(VAR_6, VAR_7, VAR_8, 1, VAR_3)) < 0) {
   FUNC_1(VAR_5, VAR_0, 1, " ca_set_pmt.. failed !");
   return -VAR_2;
  }



  FUNC_1(VAR_5, VAR_0, 1, " Not there yet");
 }

 if (!VAR_9) {
  if ((FUNC_0(VAR_6, VAR_7, VAR_8, 0, VAR_4)) < 0) {
   FUNC_1(VAR_5, VAR_0, 1, " ca_set_pmt.. failed !");
   return -VAR_2;
  }
  FUNC_1(VAR_5, VAR_1, 1, " ca_set_pmt.. success !");


 }
 return 0;
}
