
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rza1_port {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rza1_port*,int ,unsigned int,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct rza1_port *VAR_3,
       unsigned int VAR_4, bool VAR_5)
{
 unsigned long VAR_6;

 FUNC_1(&VAR_3->lock, VAR_6);

 FUNC_0(VAR_3, VAR_1, VAR_4, 1);
 if (VAR_5) {
  FUNC_0(VAR_3, VAR_2, VAR_4, 1);
  FUNC_0(VAR_3, VAR_0, VAR_4, 0);
 } else {
  FUNC_0(VAR_3, VAR_2, VAR_4, 0);
  FUNC_0(VAR_3, VAR_0, VAR_4, 1);
 }

 FUNC_2(&VAR_3->lock, VAR_6);
}
