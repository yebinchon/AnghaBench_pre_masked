
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct msghdr {int msg_iter; } ;
struct bio_vec {unsigned int bv_len; unsigned int bv_offset; struct page* bv_page; } ;
struct TCP_Server_Info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct TCP_Server_Info*,struct msghdr*) ;
 int FUNC_1 (int *,int ,struct bio_vec*,int,unsigned int) ;

int
FUNC_2(struct TCP_Server_Info *VAR_1, struct page *VAR_2,
 unsigned int VAR_3, unsigned int VAR_4)
{
 struct msghdr VAR_5;
 struct bio_vec VAR_6 = {
  .bv_page = VAR_2, .bv_len = VAR_4, .bv_offset = VAR_3};
 FUNC_1(&VAR_5.msg_iter, VAR_0, &VAR_6, 1, VAR_4);
 return FUNC_0(VAR_1, &VAR_5);
}
