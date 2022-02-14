
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iscsi_tcp_task {int dummy; } ;
struct iscsi_task {scalar_t__ hdr_max; struct iscsi_tcp_task* dd_data; struct iscsi_tcp_task* hdr; } ;
struct iscsi_sw_tcp_hdrbuf {int dummy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct iscsi_task *VAR_1, uint8_t VAR_2)
{
 struct iscsi_tcp_task *VAR_3 = VAR_1->dd_data;

 VAR_1->hdr = VAR_1->dd_data + sizeof(*VAR_3);
 VAR_1->hdr_max = sizeof(struct iscsi_sw_tcp_hdrbuf) - VAR_0;
 return 0;
}
