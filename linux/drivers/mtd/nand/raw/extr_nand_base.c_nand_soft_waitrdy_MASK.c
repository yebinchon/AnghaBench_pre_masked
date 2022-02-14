
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_sdr_timings {int tWB_max; } ;
struct nand_chip {int data_interface; } ;
typedef int status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (struct nand_chip*) ;
 struct nand_sdr_timings* FUNC_3 (int *) ;
 int FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_chip*,int*,int,int) ;
 int FUNC_6 (struct nand_chip*,int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (int) ;

int FUNC_10(struct nand_chip *VAR_4, unsigned long VAR_5)
{
 const struct nand_sdr_timings *VAR_6;
 u8 VAR_7 = 0;
 int VAR_8;

 if (!FUNC_4(VAR_4))
  return -VAR_0;


 VAR_6 = FUNC_3(&VAR_4->data_interface);
 FUNC_7(FUNC_0(VAR_6->tWB_max));

 VAR_8 = FUNC_6(VAR_4, ((void*)0));
 if (VAR_8)
  return VAR_8;

 VAR_5 = VAR_3 + FUNC_1(VAR_5);
 do {
  VAR_8 = FUNC_5(VAR_4, &VAR_7, sizeof(VAR_7), 1);
  if (VAR_8)
   break;

  if (VAR_7 & VAR_2)
   break;






  FUNC_9(10);
 } while (FUNC_8(VAR_3, VAR_5));






 FUNC_2(VAR_4);

 if (VAR_8)
  return VAR_8;

 return VAR_7 & VAR_2 ? 0 : -VAR_1;
}
