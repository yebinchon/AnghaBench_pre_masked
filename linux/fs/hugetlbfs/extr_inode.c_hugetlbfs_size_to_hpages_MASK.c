
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hstate {unsigned long long max_huge_pages; } ;
typedef enum hugetlbfs_size_type { ____Placeholder_hugetlbfs_size_type } hugetlbfs_size_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long long,int) ;
 unsigned long long FUNC_1 (struct hstate*) ;

__attribute__((used)) static long
FUNC_2(struct hstate *VAR_2, unsigned long long VAR_3,
    enum hugetlbfs_size_type VAR_4)
{
 if (VAR_4 == VAR_0)
  return -1;

 if (VAR_4 == VAR_1) {
  VAR_3 <<= FUNC_1(VAR_2);
  VAR_3 *= VAR_2->max_huge_pages;
  FUNC_0(VAR_3, 100);
 }

 VAR_3 >>= FUNC_1(VAR_2);
 return VAR_3;
}
