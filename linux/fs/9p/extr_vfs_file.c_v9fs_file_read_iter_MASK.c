
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p9_fid {int dummy; } ;
struct kiocb {int ki_pos; TYPE_1__* ki_filp; } ;
struct iov_iter {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct p9_fid* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct iov_iter*) ;
 int FUNC_1 (struct p9_fid*,int,struct iov_iter*,int*) ;
 int FUNC_2 (int ,char*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct kiocb *VAR_1, struct iov_iter *VAR_2)
{
 struct p9_fid *VAR_3 = VAR_1->ki_filp->private_data;
 int VAR_4, VAR_5 = 0;

 FUNC_2(VAR_0, "count %zu offset %lld\n",
   FUNC_0(VAR_2), VAR_1->ki_pos);

 VAR_4 = FUNC_1(VAR_3, VAR_1->ki_pos, VAR_2, &VAR_5);
 if (!VAR_4)
  return VAR_5;

 VAR_1->ki_pos += VAR_4;
 return VAR_4;
}
