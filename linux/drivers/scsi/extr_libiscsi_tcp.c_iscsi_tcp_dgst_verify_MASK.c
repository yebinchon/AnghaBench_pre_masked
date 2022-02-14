
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tcp_conn {int iscsi_conn; } ;
struct iscsi_segment {int digest_len; int digest; int recv_digest; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct iscsi_tcp_conn *VAR_0,
        struct iscsi_segment *VAR_1)
{
 if (!VAR_1->digest_len)
  return 1;

 if (FUNC_1(VAR_1->recv_digest, VAR_1->digest,
     VAR_1->digest_len)) {
  FUNC_0(VAR_0->iscsi_conn, "digest mismatch\n");
  return 0;
 }

 return 1;
}
