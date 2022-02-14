
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct splice_desc {int len; TYPE_1__ u; } ;
struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {int offset; int page; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct pipe_inode_info *VAR_1, struct pipe_buffer *VAR_2,
   struct splice_desc *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2->page, VAR_2->offset, VAR_3->len, VAR_3->u.data);
 return VAR_4 == VAR_3->len ? VAR_4 : -VAR_0;
}
