
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct p9_fid {int dummy; } ;
struct kvec {void* iov_base; size_t iov_len; } ;
struct iov_iter {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_1 ;
 int FUNC_1 (struct p9_fid*) ;
 int VAR_2 ;
 int FUNC_2 (struct iov_iter*,int ,struct kvec*,int,size_t) ;
 int FUNC_3 (struct iov_iter*,size_t) ;
 int FUNC_4 (struct p9_fid*) ;
 int FUNC_5 (struct p9_fid*,int ,struct iov_iter*,int*) ;
 struct p9_fid* FUNC_6 (struct p9_fid*,char const*,size_t*) ;
 int FUNC_7 (int ,char*,int) ;

ssize_t FUNC_8(struct p9_fid *VAR_3, const char *VAR_4,
      void *VAR_5, size_t VAR_6)
{
 ssize_t VAR_7;
 u64 VAR_8;
 struct p9_fid *VAR_9;
 struct kvec VAR_10 = {.iov_base = VAR_5, .iov_len = VAR_6};
 struct iov_iter VAR_11;
 int VAR_12;

 FUNC_2(&VAR_11, VAR_2, &VAR_10, 1, VAR_6);

 VAR_9 = FUNC_6(VAR_3, VAR_4, &VAR_8);
 if (FUNC_0(VAR_9)) {
  VAR_7 = FUNC_1(VAR_9);
  FUNC_7(VAR_1, "p9_client_attrwalk failed %zd\n",
    VAR_7);
  return VAR_7;
 }
 if (VAR_8 > VAR_6) {
  if (!VAR_6)
   VAR_7 = VAR_8;
  else
   VAR_7 = -VAR_0;
 } else {
  FUNC_3(&VAR_11, VAR_8);
  VAR_7 = FUNC_5(VAR_9, 0, &VAR_11, &VAR_12);
  if (VAR_12)
   VAR_7 = VAR_12;
 }
 FUNC_4(VAR_9);
 return VAR_7;
}
