
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct iscsi_hdr* hdr; } ;
struct iscsi_tcp_conn {TYPE_1__ in; struct iscsi_conn* iscsi_conn; } ;
struct iscsi_segment {int dummy; } ;
struct iscsi_hdr {int flags; } ;
struct iscsi_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_conn*,struct iscsi_hdr*,int *,int ) ;
 int FUNC_1 (struct iscsi_tcp_conn*,struct iscsi_segment*) ;
 int FUNC_2 (struct iscsi_tcp_conn*) ;

__attribute__((used)) static int
FUNC_3(struct iscsi_tcp_conn *VAR_2,
     struct iscsi_segment *VAR_3)
{
 struct iscsi_conn *VAR_4 = VAR_2->iscsi_conn;
 struct iscsi_hdr *VAR_5 = VAR_2->in.hdr;
 int VAR_6;

 if (!FUNC_1(VAR_2, VAR_3))
  return VAR_0;


 if (VAR_5->flags & VAR_1) {
  VAR_6 = FUNC_0(VAR_4, VAR_2->in.hdr, ((void*)0), 0);
  if (VAR_6)
   return VAR_6;
 }

 FUNC_2(VAR_2);
 return 0;
}
