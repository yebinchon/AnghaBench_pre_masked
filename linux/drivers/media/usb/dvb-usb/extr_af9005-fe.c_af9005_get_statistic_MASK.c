
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dvb_frontend {struct af9005_fe_state* demodulator_priv; } ;
struct af9005_fe_state {scalar_t__ pre_vit_bit_count; int ber; scalar_t__ abort_count; int unc; int post_vit_bit_count; int post_vit_error_count; scalar_t__ pre_vit_error_count; } ;


 int FUNC_0 (struct dvb_frontend*,int *,int *,scalar_t__*) ;
 int FUNC_1 (struct dvb_frontend*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct dvb_frontend*,int*) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (struct dvb_frontend*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_0)
{
 struct af9005_fe_state *VAR_1 = VAR_0->demodulator_priv;
 int VAR_2, VAR_3;
 u64 VAR_4, VAR_5;

 FUNC_5("GET STATISTIC\n");
 VAR_2 = FUNC_2(VAR_0, &VAR_3);
 if (VAR_2)
  return VAR_2;
 if (!VAR_3) {
  FUNC_5("fecmon not available\n");
  return 0;
 }

 VAR_2 = FUNC_1(VAR_0, &VAR_1->pre_vit_error_count,
            &VAR_1->pre_vit_bit_count);
 if (VAR_2 == 0) {
  FUNC_4(VAR_0);
  if (VAR_1->pre_vit_bit_count > 0) {



   VAR_4 =
       (u64) VAR_1->pre_vit_error_count * (u64) 1000000000;
   VAR_5 = (u64) VAR_1->pre_vit_bit_count;
   VAR_1->ber = FUNC_6(VAR_4, VAR_5);
  } else {
   VAR_1->ber = 0xffffffff;
  }
 }

 VAR_2 = FUNC_0(VAR_0, &VAR_1->post_vit_error_count,
          &VAR_1->post_vit_bit_count,
          &VAR_1->abort_count);
 if (VAR_2 == 0) {
  VAR_2 = FUNC_3(VAR_0);
  VAR_1->unc += VAR_1->abort_count;
  if (VAR_2)
   return VAR_2;
 }
 return 0;
}
