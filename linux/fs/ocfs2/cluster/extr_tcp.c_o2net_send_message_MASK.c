
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct kvec {void* iov_base; int iov_len; } ;


 int FUNC_0 (int ,int ,struct kvec*,int,int ,int*) ;

int FUNC_1(u32 VAR_0, u32 VAR_1, void *VAR_2, u32 VAR_3,
         u8 VAR_4, int *VAR_5)
{
 struct kvec VAR_6 = {
  .iov_base = VAR_2,
  .iov_len = VAR_3,
 };
 return FUNC_0(VAR_0, VAR_1, &VAR_6, 1,
          VAR_4, VAR_5);
}
