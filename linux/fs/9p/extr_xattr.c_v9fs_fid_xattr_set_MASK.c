
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fid {int dummy; } ;
struct kvec {void* iov_base; size_t iov_len; } ;
struct iov_iter {int dummy; } ;


 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_0 ;
 int FUNC_1 (struct p9_fid*) ;
 int VAR_1 ;
 struct p9_fid* FUNC_2 (struct p9_fid*) ;
 int FUNC_3 (struct iov_iter*,int ,struct kvec*,int,size_t) ;
 int FUNC_4 (struct p9_fid*) ;
 int FUNC_5 (struct p9_fid*,int ,struct iov_iter*,int*) ;
 int FUNC_6 (struct p9_fid*,char const*,size_t,int) ;
 int FUNC_7 (int ,char*,...) ;

int FUNC_8(struct p9_fid *VAR_2, const char *VAR_3,
     const void *VAR_4, size_t VAR_5, int VAR_6)
{
 struct kvec VAR_7 = {.iov_base = (void *)VAR_4, .iov_len = VAR_5};
 struct iov_iter VAR_8;
 int VAR_9, VAR_10;

 FUNC_3(&VAR_8, VAR_1, &VAR_7, 1, VAR_5);

 FUNC_7(VAR_0, "name = %s value_len = %zu flags = %d\n",
   VAR_3, VAR_5, VAR_6);


 VAR_2 = FUNC_2(VAR_2);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);




 VAR_9 = FUNC_6(VAR_2, VAR_3, VAR_5, VAR_6);
 if (VAR_9 < 0)
  FUNC_7(VAR_0, "p9_client_xattrcreate failed %d\n",
    VAR_9);
 else
  FUNC_5(VAR_2, 0, &VAR_8, &VAR_9);
 VAR_10 = FUNC_4(VAR_2);
 if (!VAR_9 && VAR_10)
  VAR_9 = VAR_10;
 return VAR_9;
}
