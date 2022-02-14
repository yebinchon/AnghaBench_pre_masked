
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct hynix_read_retry_otp {int nregs; int* regs; int size; int page; int * values; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nand_chip*,int) ;
 int FUNC_1 (struct nand_chip*,int,int ) ;
 int FUNC_2 (struct nand_chip*,int ,int ,void*,int ) ;
 int FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_2,
        const struct hynix_read_retry_otp *VAR_3,
        void *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_1);
 if (VAR_6)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3->nregs; VAR_5++) {
  VAR_6 = FUNC_1(VAR_2, VAR_3->regs[VAR_5],
           VAR_3->values[VAR_5]);
  if (VAR_6)
   return VAR_6;
 }

 VAR_6 = FUNC_0(VAR_2, VAR_0);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_0(VAR_2, 0x17);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_2, 0x4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_2, 0x19);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_2(VAR_2, VAR_3->page, 0, VAR_4, VAR_3->size);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_2, 0x38, 0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_0);
 if (VAR_6)
  return VAR_6;

 return FUNC_2(VAR_2, 0, 0, ((void*)0), 0);
}
