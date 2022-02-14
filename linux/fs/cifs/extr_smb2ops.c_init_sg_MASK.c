
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct smb_rqst {unsigned int rq_nvec; unsigned int rq_npages; int * rq_pages; TYPE_1__* rq_iov; } ;
struct scatterlist {int dummy; } ;
struct TYPE_2__ {scalar_t__ iov_len; int * iov_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct scatterlist* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (struct smb_rqst*,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct scatterlist*,unsigned int) ;
 int FUNC_3 (struct scatterlist*,int ,unsigned int,unsigned int) ;
 int FUNC_4 (struct scatterlist*,int *,scalar_t__) ;

__attribute__((used)) static struct scatterlist *
FUNC_5(int VAR_2, struct smb_rqst *VAR_3, u8 *VAR_4)
{
 unsigned int VAR_5;
 struct scatterlist *VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9 = 0;
 int VAR_10;

 VAR_5 = 1;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  VAR_5 += VAR_3[VAR_7].rq_nvec + VAR_3[VAR_7].rq_npages;

 VAR_6 = FUNC_0(VAR_5, sizeof(struct scatterlist), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 FUNC_2(VAR_6, VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_3[VAR_7].rq_nvec; VAR_8++) {




   VAR_10 = (VAR_7 == 0) && (VAR_8 == 0) ? 20 : 0;
   FUNC_4(&VAR_6[VAR_9++],
     VAR_3[VAR_7].rq_iov[VAR_8].iov_base + VAR_10,
     VAR_3[VAR_7].rq_iov[VAR_8].iov_len - VAR_10);
   }

  for (VAR_8 = 0; VAR_8 < VAR_3[VAR_7].rq_npages; VAR_8++) {
   unsigned int VAR_11, VAR_12;

   FUNC_1(&VAR_3[VAR_7], VAR_8, &VAR_11, &VAR_12);
   FUNC_3(&VAR_6[VAR_9++], VAR_3[VAR_7].rq_pages[VAR_8], VAR_11, VAR_12);
  }
 }
 FUNC_4(&VAR_6[VAR_9], VAR_4, VAR_1);
 return VAR_6;
}
