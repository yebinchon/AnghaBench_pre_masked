
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recv_buf {int reuse; int purb; int * pskb; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(struct adapter *VAR_3,
      struct recv_buf *VAR_4)
{
 VAR_4->pskb = ((void*)0);
 VAR_4->reuse = 0;
 VAR_4->purb = FUNC_0(0, VAR_0);
 if (!VAR_4->purb)
  return VAR_1;
 return VAR_2;
}
