
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct iscsi_segment {int total_copied; int total_size; } ;
struct TYPE_2__ {struct iscsi_segment segment; } ;
struct iscsi_sw_tcp_conn {TYPE_1__ out; } ;
struct iscsi_conn {struct iscsi_tcp_conn* dd_data; } ;



__attribute__((used)) static inline int FUNC_0(struct iscsi_conn *VAR_0)
{
 struct iscsi_tcp_conn *VAR_1 = VAR_0->dd_data;
 struct iscsi_sw_tcp_conn *VAR_2 = VAR_1->dd_data;
 struct iscsi_segment *VAR_3 = &VAR_2->out.segment;

 return VAR_3->total_copied - VAR_3->total_size;
}
