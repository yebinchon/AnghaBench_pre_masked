
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_tunn_update_udp_port {int port; scalar_t__ b_update_port; } ;
struct qed_tunn_update_type {int dummy; } ;
typedef int __le16 ;


 int FUNC_0 (int*,struct qed_tunn_update_type*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(u8 *VAR_0,
       struct qed_tunn_update_type *VAR_1,
       u8 *VAR_2,
       __le16 *VAR_3,
       struct qed_tunn_update_udp_port *VAR_4)
{
 FUNC_0(VAR_0, VAR_1);
 if (VAR_4->b_update_port) {
  *VAR_2 = 1;
  *VAR_3 = FUNC_1(VAR_4->port);
 }
}
