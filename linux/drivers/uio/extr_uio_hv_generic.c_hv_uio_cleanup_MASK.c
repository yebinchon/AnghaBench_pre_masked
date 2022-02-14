
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_uio_private_data {int recv_buf; scalar_t__ recv_gpadl; int send_buf; scalar_t__ send_gpadl; } ;
struct hv_device {int channel; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct hv_device *VAR_0, struct hv_uio_private_data *VAR_1)
{
 if (VAR_1->send_gpadl) {
  FUNC_1(VAR_0->channel, VAR_1->send_gpadl);
  VAR_1->send_gpadl = 0;
  FUNC_0(VAR_1->send_buf);
 }

 if (VAR_1->recv_gpadl) {
  FUNC_1(VAR_0->channel, VAR_1->recv_gpadl);
  VAR_1->recv_gpadl = 0;
  FUNC_0(VAR_1->recv_buf);
 }
}
