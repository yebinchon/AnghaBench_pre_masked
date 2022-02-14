
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_bmap {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nilfs_bmap*,int) ;

__attribute__((used)) static int FUNC_1(struct nilfs_bmap *VAR_2,
        __u64 *VAR_3, __u64 *VAR_4, int VAR_5)
{
 __u64 VAR_6;
 __u64 VAR_7;
 int VAR_8;

 if (VAR_5 > VAR_1)
  VAR_5 = VAR_1;
 VAR_8 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_7 = FUNC_0(VAR_2, VAR_6);
  if (VAR_7 != VAR_0) {
   VAR_3[VAR_8] = VAR_6;
   VAR_4[VAR_8] = VAR_7;
   VAR_8++;
  }
 }
 return VAR_8;
}
