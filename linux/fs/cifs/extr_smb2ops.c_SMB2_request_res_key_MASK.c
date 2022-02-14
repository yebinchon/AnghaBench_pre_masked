
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct resume_key_req {int ResumeKey; } ;
struct copychunk_ioctl {int SourceKey; } ;
struct cifs_tcon {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ,int ,int,int *,int ,int ,char**,unsigned int*) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct resume_key_req*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(const unsigned int VAR_5, struct cifs_tcon *VAR_6,
       u64 VAR_7, u64 VAR_8,
       struct copychunk_ioctl *VAR_9)
{
 int VAR_10;
 unsigned int VAR_11;
 struct resume_key_req *VAR_12;

 VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8,
   VAR_3, 1 ,
   ((void*)0), 0 , VAR_0,
   (char **)&VAR_12, &VAR_11);

 if (VAR_10) {
  FUNC_1(VAR_4, "refcpy ioctl error %d getting resume key\n", VAR_10);
  goto req_res_key_exit;
 }
 if (VAR_11 < sizeof(struct resume_key_req)) {
  FUNC_1(VAR_4, "Invalid refcopy resume key length\n");
  VAR_10 = -VAR_2;
  goto req_res_key_exit;
 }
 FUNC_3(VAR_9->SourceKey, VAR_12->ResumeKey, VAR_1);

req_res_key_exit:
 FUNC_2(VAR_12);
 return VAR_10;
}
