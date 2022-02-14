
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct orc_scb {int status; } ;
struct orc_host {scalar_t__ scb_virt; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct orc_host*,struct orc_scb*) ;

__attribute__((used)) static irqreturn_t FUNC_2(struct orc_host * VAR_4)
{
 u8 VAR_5;
 struct orc_scb *VAR_6;


 if (FUNC_0(VAR_4->base + VAR_3) == 0)
  return VAR_1;

 do {

  VAR_5 = FUNC_0(VAR_4->base + VAR_2);


  VAR_6 = (struct orc_scb *) ((unsigned long) VAR_4->scb_virt + (unsigned long) (sizeof(struct orc_scb) * VAR_5));
  VAR_6->status = 0x0;

  FUNC_1(VAR_4, VAR_6);
 } while (FUNC_0(VAR_4->base + VAR_3));
 return VAR_0;
}
