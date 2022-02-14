
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_isadma_desc {int chan; int size; int hw_addr; int mode; } ;


 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7(struct comedi_isadma_desc *VAR_0)
{
 unsigned long VAR_1;

 VAR_1 = FUNC_0();
 FUNC_1(VAR_0->chan);
 FUNC_6(VAR_0->chan, VAR_0->mode);
 FUNC_4(VAR_0->chan, VAR_0->hw_addr);
 FUNC_5(VAR_0->chan, VAR_0->size);
 FUNC_2(VAR_0->chan);
 FUNC_3(VAR_1);
}
