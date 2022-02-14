
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct iscsi_segment {scalar_t__ total_copied; scalar_t__ total_size; int (* done ) (struct iscsi_tcp_conn*,struct iscsi_segment*) ;} ;
struct TYPE_2__ {struct iscsi_segment segment; } ;
struct iscsi_sw_tcp_conn {TYPE_1__ out; } ;
struct iscsi_conn {unsigned int txdata_octets; struct iscsi_tcp_conn* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iscsi_conn*,char*,int) ;
 int FUNC_1 (struct iscsi_conn*,int) ;
 int FUNC_2 (struct iscsi_tcp_conn*,struct iscsi_segment*) ;
 int FUNC_3 (struct iscsi_tcp_conn*,struct iscsi_segment*) ;

__attribute__((used)) static int FUNC_4(struct iscsi_conn *VAR_3)
{
 struct iscsi_tcp_conn *VAR_4 = VAR_3->dd_data;
 struct iscsi_sw_tcp_conn *VAR_5 = VAR_4->dd_data;
 struct iscsi_segment *VAR_6 = &VAR_5->out.segment;
 unsigned int VAR_7 = 0;
 int VAR_8 = 0;

 while (1) {
  VAR_8 = FUNC_2(VAR_4, VAR_6);





  if (VAR_8 == -VAR_0)
   return VAR_8;
  else if (VAR_8 < 0) {
   VAR_8 = VAR_2;
   goto error;
  } else if (VAR_8 == 0)
   break;

  VAR_7 += VAR_8;

  if (VAR_6->total_copied >= VAR_6->total_size) {
   if (VAR_6->done != ((void*)0)) {
    VAR_8 = VAR_6->done(VAR_4, VAR_6);
    if (VAR_8 != 0)
     goto error;
   }
  }
 }

 FUNC_0(VAR_3, "xmit %d bytes\n", VAR_7);

 VAR_3->txdata_octets += VAR_7;
 return VAR_7;

error:


 FUNC_0(VAR_3, "Error sending PDU, errno=%d\n", VAR_8);
 FUNC_1(VAR_3, VAR_8);
 return -VAR_1;
}
