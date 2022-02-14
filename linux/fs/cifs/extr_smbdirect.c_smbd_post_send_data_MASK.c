
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smbd_connection {int dummy; } ;
struct scatterlist {int dummy; } ;
struct kvec {scalar_t__ iov_len; int iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct scatterlist*,int) ;
 int FUNC_2 (struct scatterlist*,int ,scalar_t__) ;
 int FUNC_3 (struct smbd_connection*,struct scatterlist*,int ,int) ;

__attribute__((used)) static int FUNC_4(
 struct smbd_connection *VAR_3, struct kvec *VAR_4, int VAR_5,
 int VAR_6)
{
 int VAR_7;
 u32 VAR_8 = 0;
 struct scatterlist VAR_9[VAR_1];

 if (VAR_5 > VAR_1) {
  FUNC_0(VAR_2, "Can't fit data to SGL, n_vec=%d\n", VAR_5);
  return -VAR_0;
 }

 FUNC_1(VAR_9, VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_8 += VAR_4[VAR_7].iov_len;
  FUNC_2(&VAR_9[VAR_7], VAR_4[VAR_7].iov_base, VAR_4[VAR_7].iov_len);
 }

 return FUNC_3(VAR_3, VAR_9, VAR_8, VAR_6);
}
