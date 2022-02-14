
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {unsigned int rq_npages; struct page** rq_pages; int rq_nvec; TYPE_1__* rq_iov; int rq_tailsz; int rq_pagesz; int rq_offset; } ;
struct smb2_transform_hdr {int dummy; } ;
struct page {int dummy; } ;
struct TCP_Server_Info {int cipher_type; } ;
struct TYPE_2__ {struct smb2_transform_hdr* iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct TCP_Server_Info*,int,struct smb_rqst*,int) ;
 int FUNC_3 (struct smb2_transform_hdr*,unsigned int,struct smb_rqst*,int ) ;
 struct page** FUNC_4 (unsigned int,int,int) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (char*,char*,unsigned int) ;
 int FUNC_8 (struct smb_rqst*,int,unsigned int*,unsigned int*) ;
 int FUNC_9 (int,struct smb_rqst*) ;
 scalar_t__ FUNC_10 (struct TCP_Server_Info*,struct smb_rqst*) ;

__attribute__((used)) static int
FUNC_11(struct TCP_Server_Info *VAR_4, int VAR_5,
         struct smb_rqst *VAR_6, struct smb_rqst *VAR_7)
{
 struct page **VAR_8;
 struct smb2_transform_hdr *VAR_9 = VAR_6[0].rq_iov[0].iov_base;
 unsigned int VAR_10;
 unsigned int VAR_11 = 0;
 int VAR_12, VAR_13;
 int VAR_14 = -VAR_0;

 for (VAR_12 = 1; VAR_12 < VAR_5; VAR_12++) {
  VAR_10 = VAR_7[VAR_12 - 1].rq_npages;
  VAR_8 = FUNC_4(VAR_10, sizeof(struct page *),
          VAR_2);
  if (!VAR_8)
   goto err_free;

  VAR_6[VAR_12].rq_pages = VAR_8;
  VAR_6[VAR_12].rq_npages = VAR_10;
  VAR_6[VAR_12].rq_offset = VAR_7[VAR_12 - 1].rq_offset;
  VAR_6[VAR_12].rq_pagesz = VAR_7[VAR_12 - 1].rq_pagesz;
  VAR_6[VAR_12].rq_tailsz = VAR_7[VAR_12 - 1].rq_tailsz;
  VAR_6[VAR_12].rq_iov = VAR_7[VAR_12 - 1].rq_iov;
  VAR_6[VAR_12].rq_nvec = VAR_7[VAR_12 - 1].rq_nvec;

  VAR_11 += FUNC_10(VAR_4, &VAR_7[VAR_12 - 1]);

  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
   VAR_8[VAR_13] = FUNC_0(VAR_2|VAR_3);
   if (!VAR_8[VAR_13])
    goto err_free;
  }


  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
   char *VAR_15, *VAR_16;
   unsigned int VAR_17, VAR_18;

   FUNC_8(&VAR_6[VAR_12], VAR_13, &VAR_18, &VAR_17);

   VAR_15 = (char *) FUNC_5(VAR_6[VAR_12].rq_pages[VAR_13]) + VAR_17;
   VAR_16 = (char *) FUNC_5(VAR_7[VAR_12 - 1].rq_pages[VAR_13]) + VAR_17;

   FUNC_7(VAR_15, VAR_16, VAR_18);
   FUNC_6(VAR_6[VAR_12].rq_pages[VAR_13]);
   FUNC_6(VAR_7[VAR_12 - 1].rq_pages[VAR_13]);
  }
 }


 FUNC_3(VAR_9, VAR_11, VAR_7, VAR_4->cipher_type);

 VAR_14 = FUNC_2(VAR_4, VAR_5, VAR_6, 1);
 FUNC_1(VAR_1, "Encrypt message returned %d\n", VAR_14);
 if (VAR_14)
  goto err_free;

 return VAR_14;

err_free:
 FUNC_9(VAR_5 - 1, &VAR_6[1]);
 return VAR_14;
}
