
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {int dummy; } ;
struct kvec {size_t iov_len; void* iov_base; } ;
typedef int loff_t ;


 int FUNC_0 (struct mtd_info*,struct kvec*,int,int ,size_t*) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_0, loff_t VAR_1, size_t VAR_2,
    size_t *VAR_3, const u_char *VAR_4)
{
 struct kvec VAR_5;

 VAR_5.iov_base = (void *) VAR_4;
 VAR_5.iov_len = VAR_2;

 return FUNC_0(VAR_0, &VAR_5, 1, VAR_1, VAR_3);
}
