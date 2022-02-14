
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct smbd_connection {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_7__ {scalar_t__ count; TYPE_2__* bvec; TYPE_1__* kvec; } ;
struct msghdr {TYPE_3__ msg_iter; } ;
struct TYPE_6__ {unsigned int bv_offset; unsigned int bv_len; struct page* bv_page; } ;
struct TYPE_5__ {char* iov_base; unsigned int iov_len; } ;


 int VAR_0 ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct smbd_connection*,char*,unsigned int) ;
 int FUNC_4 (struct smbd_connection*,struct page*,unsigned int,unsigned int) ;

int FUNC_5(struct smbd_connection *VAR_3, struct msghdr *VAR_4)
{
 char *VAR_5;
 struct page *VAR_6;
 unsigned int VAR_7, VAR_8;
 int VAR_9;

 if (FUNC_1(&VAR_4->msg_iter) == VAR_2) {

  FUNC_0(VAR_1, "CIFS: invalid msg iter dir %u\n",
    FUNC_1(&VAR_4->msg_iter));
  VAR_9 = -VAR_0;
  goto out;
 }

 switch (FUNC_2(&VAR_4->msg_iter)) {
 case 128:
  VAR_5 = VAR_4->msg_iter.kvec->iov_base;
  VAR_7 = VAR_4->msg_iter.kvec->iov_len;
  VAR_9 = FUNC_3(VAR_3, VAR_5, VAR_7);
  break;

 case 129:
  VAR_6 = VAR_4->msg_iter.bvec->bv_page;
  VAR_8 = VAR_4->msg_iter.bvec->bv_offset;
  VAR_7 = VAR_4->msg_iter.bvec->bv_len;
  VAR_9 = FUNC_4(VAR_3, VAR_6, VAR_8, VAR_7);
  break;

 default:

  FUNC_0(VAR_1, "CIFS: invalid msg type %d\n",
    FUNC_2(&VAR_4->msg_iter));
  VAR_9 = -VAR_0;
 }

out:

 if (VAR_9 > 0)
  VAR_4->msg_iter.count = 0;
 return VAR_9;
}
