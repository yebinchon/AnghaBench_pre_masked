
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_tcp_conn {int iscsi_conn; struct iscsi_sw_tcp_conn* dd_data; } ;
struct TYPE_3__ {int total_size; int size; } ;
struct TYPE_4__ {TYPE_1__ segment; TYPE_1__ data_segment; } ;
struct iscsi_sw_tcp_conn {TYPE_2__ out; } ;
struct iscsi_segment {int dummy; } ;


 int FUNC_0 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct iscsi_tcp_conn *VAR_0,
          struct iscsi_segment *VAR_1)
{
 struct iscsi_sw_tcp_conn *VAR_2 = VAR_0->dd_data;

 VAR_2->out.segment = VAR_2->out.data_segment;
 FUNC_0(VAR_0->iscsi_conn,
    "Header done. Next segment size %u total_size %u\n",
    VAR_2->out.segment.size,
    VAR_2->out.segment.total_size);
 return 0;
}
