
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int count; unsigned int nr_segs; } ;
struct msghdr {TYPE_1__ msg_iter; } ;
struct bio_vec {int bv_page; } ;
struct afs_call {scalar_t__ first; scalar_t__ last; unsigned int first_offset; int rxcall; TYPE_2__* net; } ;
typedef scalar_t__ pgoff_t ;
struct TYPE_4__ {int socket; } ;


 int VAR_0 ;
 int FUNC_0 (struct afs_call*,struct msghdr*,struct bio_vec*,scalar_t__,scalar_t__,unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct msghdr*,unsigned int,int ) ;
 int FUNC_3 (struct afs_call*,struct msghdr*,scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_4 (struct afs_call*,scalar_t__,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct afs_call *VAR_2, struct msghdr *VAR_3)
{
 struct bio_vec VAR_4[VAR_0];
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8;
 pgoff_t VAR_9 = VAR_2->first, VAR_10 = VAR_2->last;
 int VAR_11;

 VAR_8 = VAR_2->first_offset;
 VAR_2->first_offset = 0;

 do {
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_9, VAR_10, VAR_8);
  FUNC_3(VAR_2, VAR_3, VAR_9, VAR_10, VAR_8);

  VAR_8 = 0;
  VAR_5 = VAR_3->msg_iter.count;
  VAR_6 = VAR_3->msg_iter.nr_segs;

  VAR_11 = FUNC_2(VAR_2->net->socket, VAR_2->rxcall, VAR_3,
          VAR_5, VAR_1);
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
   FUNC_1(VAR_4[VAR_7].bv_page);
  if (VAR_11 < 0)
   break;

  VAR_9 += VAR_6;
 } while (VAR_9 <= VAR_10);

 FUNC_4(VAR_2, VAR_2->first, VAR_10, VAR_9, VAR_11);
 return VAR_11;
}
