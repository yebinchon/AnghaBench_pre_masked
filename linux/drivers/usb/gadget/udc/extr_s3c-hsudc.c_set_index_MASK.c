
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_hsudc {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct s3c_hsudc *VAR_2, int VAR_3)
{
 VAR_3 &= VAR_1;
 FUNC_0(VAR_3, VAR_2->regs + VAR_0);
}
