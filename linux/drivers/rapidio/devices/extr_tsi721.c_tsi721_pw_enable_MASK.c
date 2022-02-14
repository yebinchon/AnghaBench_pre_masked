
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsi721_device {scalar_t__ regs; } ;
struct rio_mport {struct tsi721_device* priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct rio_mport *VAR_5, int VAR_6)
{
 struct tsi721_device *VAR_7 = VAR_5->priv;
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_7->regs + VAR_0);

 if (VAR_6)
  VAR_8 |= VAR_1;
 else
  VAR_8 &= ~VAR_1;


 FUNC_1(VAR_3 | VAR_4,
    VAR_7->regs + VAR_2);

 FUNC_1(VAR_8, VAR_7->regs + VAR_0);

 return 0;
}
