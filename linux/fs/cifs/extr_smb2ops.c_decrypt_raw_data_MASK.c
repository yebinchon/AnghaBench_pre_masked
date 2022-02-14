
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rqst {int rq_nvec; unsigned int rq_npages; unsigned int rq_pagesz; unsigned int rq_tailsz; struct page** rq_pages; struct kvec* rq_iov; int * member_0; } ;
struct smb2_transform_hdr {int dummy; } ;
struct page {int dummy; } ;
struct kvec {char* iov_base; int iov_len; } ;
struct TCP_Server_Info {unsigned int total_read; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct TCP_Server_Info*,int,struct smb_rqst*,int ) ;
 int FUNC_2 (char*,char*,unsigned int) ;

__attribute__((used)) static int
FUNC_3(struct TCP_Server_Info *VAR_2, char *VAR_3,
   unsigned int VAR_4, struct page **VAR_5,
   unsigned int VAR_6, unsigned int VAR_7)
{
 struct kvec VAR_8[2];
 struct smb_rqst VAR_9 = {((void*)0)};
 int VAR_10;

 VAR_8[0].iov_base = VAR_3;
 VAR_8[0].iov_len = sizeof(struct smb2_transform_hdr);
 VAR_8[1].iov_base = VAR_3 + sizeof(struct smb2_transform_hdr);
 VAR_8[1].iov_len = VAR_4;

 VAR_9.rq_iov = VAR_8;
 VAR_9.rq_nvec = 2;
 VAR_9.rq_pages = VAR_5;
 VAR_9.rq_npages = VAR_6;
 VAR_9.rq_pagesz = VAR_1;
 VAR_9.rq_tailsz = (VAR_7 % VAR_1) ? : VAR_1;

 VAR_10 = FUNC_1(VAR_2, 1, &VAR_9, 0);
 FUNC_0(VAR_0, "Decrypt message returned %d\n", VAR_10);

 if (VAR_10)
  return VAR_10;

 FUNC_2(VAR_3, VAR_8[1].iov_base, VAR_4);

 VAR_2->total_read = VAR_4 + VAR_7;

 return VAR_10;
}
