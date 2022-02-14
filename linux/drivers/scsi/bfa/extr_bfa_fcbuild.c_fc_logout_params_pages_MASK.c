
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct fchs_s {int dummy; } ;
struct fc_tprlo_s {int payload_len; } ;
struct fc_prlo_s {int payload_len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

int
FUNC_1(struct fchs_s *VAR_1, u8 VAR_2)
{
 int VAR_3 = 0;
 struct fc_prlo_s *VAR_4;
 struct fc_tprlo_s *VAR_5;

 if (VAR_2 == VAR_0) {
  VAR_4 = (struct fc_prlo_s *) (VAR_1 + 1);
  VAR_3 = (FUNC_0(VAR_4->payload_len) - 4) / 16;
 } else {
  VAR_5 = (struct fc_tprlo_s *) (VAR_1 + 1);
  VAR_3 = (FUNC_0(VAR_5->payload_len) - 4) / 16;
 }
 return VAR_3;
}
