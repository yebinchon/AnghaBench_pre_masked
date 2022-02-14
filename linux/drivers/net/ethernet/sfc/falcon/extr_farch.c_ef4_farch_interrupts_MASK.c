
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int irq_level; } ;
typedef int ef4_oword_t ;


 int FUNC_0 (int ,int ,int ,int ,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ef4_nic*,int *,int ) ;

__attribute__((used)) static inline void FUNC_2(struct ef4_nic *VAR_4,
          bool VAR_5, bool VAR_6)
{
 ef4_oword_t VAR_7;

 FUNC_0(VAR_7,
        VAR_2, VAR_4->irq_level,
        VAR_1, VAR_6,
        VAR_0, VAR_5);
 FUNC_1(VAR_4, &VAR_7, VAR_3);
}
