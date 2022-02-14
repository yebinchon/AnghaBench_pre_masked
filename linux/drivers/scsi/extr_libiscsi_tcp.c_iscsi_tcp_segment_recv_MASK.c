
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tcp_conn {int iscsi_conn; } ;
struct iscsi_segment {scalar_t__ copied; scalar_t__ data; scalar_t__ size; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct iscsi_tcp_conn*,struct iscsi_segment*,int,unsigned int) ;
 int FUNC_2 (scalar_t__,void const*,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct iscsi_tcp_conn *VAR_0,
         struct iscsi_segment *VAR_1, const void *VAR_2,
         unsigned int VAR_3)
{
 unsigned int VAR_4 = 0, VAR_5 = 0;

 while (!FUNC_1(VAR_0, VAR_1, 1, VAR_4)) {
  if (VAR_5 == VAR_3) {
   FUNC_0(VAR_0->iscsi_conn,
          "copied %d bytes\n", VAR_3);
   break;
  }

  VAR_4 = FUNC_3(VAR_3 - VAR_5, VAR_1->size - VAR_1->copied);
  FUNC_0(VAR_0->iscsi_conn, "copying %d\n", VAR_4);
  FUNC_2(VAR_1->data + VAR_1->copied, VAR_2 + VAR_5, VAR_4);
  VAR_5 += VAR_4;
 }
 return VAR_5;
}
