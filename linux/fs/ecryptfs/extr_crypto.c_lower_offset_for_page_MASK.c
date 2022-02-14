
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ index; } ;
struct ecryptfs_crypt_stat {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecryptfs_crypt_stat*) ;

__attribute__((used)) static loff_t FUNC_1(struct ecryptfs_crypt_stat *VAR_1,
        struct page *VAR_2)
{
 return FUNC_0(VAR_1) +
        ((loff_t)VAR_2->index << VAR_0);
}
