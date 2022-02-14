
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_desc_info {int dummy; } ;
typedef int __be16 ;


 int FUNC_0 (struct rocker_desc_info*,int,int,int *) ;

__attribute__((used)) static inline int
FUNC_1(struct rocker_desc_info *VAR_0, int VAR_1, __be16 VAR_2)
{
 __be16 VAR_3 = VAR_2;

 return FUNC_0(VAR_0, VAR_1, sizeof(__be16), &VAR_3);
}
