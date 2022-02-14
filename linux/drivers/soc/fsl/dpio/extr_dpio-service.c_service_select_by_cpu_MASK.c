
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa2_io {int dummy; } ;


 int VAR_0 ;
 struct dpaa2_io** VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline struct dpaa2_io *FUNC_3(struct dpaa2_io *VAR_2,
           int VAR_3)
{
 if (VAR_2)
  return VAR_2;

 if (VAR_3 != VAR_0 && VAR_3 >= FUNC_0())
  return ((void*)0);





 if (FUNC_2(VAR_3 < 0))
  VAR_3 = FUNC_1();


 return VAR_1[VAR_3];
}
