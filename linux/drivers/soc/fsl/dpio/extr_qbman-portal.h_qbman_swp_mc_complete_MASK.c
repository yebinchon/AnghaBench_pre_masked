
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qbman_swp {int dummy; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (struct qbman_swp*) ;
 int FUNC_2 (struct qbman_swp*,void*,int ) ;

__attribute__((used)) static inline void *FUNC_3(struct qbman_swp *VAR_0, void *VAR_1,
       u8 VAR_2)
{
 int VAR_3 = 2000;

 FUNC_2(VAR_0, VAR_1, VAR_2);

 do {
  VAR_1 = FUNC_1(VAR_0);
 } while (!VAR_1 && VAR_3--);

 FUNC_0(!VAR_3);

 return VAR_1;
}
