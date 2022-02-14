
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_common {int dummy; } ;
typedef int arg ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cw1200_common*,int ,int *,int) ;

__attribute__((used)) static inline int FUNC_2(struct cw1200_common *VAR_1,
     bool VAR_2)
{
 __le32 VAR_3 = VAR_2 ? FUNC_0(1) : 0;

 return FUNC_1(VAR_1, VAR_0,
   &VAR_3, sizeof(VAR_3));
}
