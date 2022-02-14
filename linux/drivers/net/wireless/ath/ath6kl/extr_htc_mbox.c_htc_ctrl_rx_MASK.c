
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htc_target {int * endpoint; } ;
struct htc_packet {scalar_t__ endpoint; scalar_t__ act_len; scalar_t__ buf; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (struct htc_target*,struct htc_packet*,int *) ;
 int FUNC_4 (struct htc_target*,struct htc_packet*) ;

__attribute__((used)) static void FUNC_5(struct htc_target *VAR_4, struct htc_packet *VAR_5)
{
 if (VAR_5->endpoint != VAR_2) {
  FUNC_0(1);
  return;
 }

 if (VAR_5->status == -VAR_1) {
  FUNC_4(VAR_4, VAR_5);
  return;
 }

 if (VAR_5->act_len > 0) {
  FUNC_2("htc_ctrl_rx, got message with len:%zu\n",
      VAR_5->act_len + VAR_3);

  FUNC_1(VAR_0,
    "htc rx unexpected endpoint 0 message", "",
    VAR_5->buf - VAR_3,
    VAR_5->act_len + VAR_3);
 }

 FUNC_3(VAR_4, VAR_5, &VAR_4->endpoint[0]);
}
