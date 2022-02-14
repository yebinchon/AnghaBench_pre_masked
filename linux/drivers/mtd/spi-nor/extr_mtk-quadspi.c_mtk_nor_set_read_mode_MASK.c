
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {int read_proto; int read_opcode; } ;
struct mtk_nor {scalar_t__ base; struct spi_nor nor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;



 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mtk_nor *VAR_8)
{
 struct spi_nor *VAR_9 = &VAR_8->nor;

 switch (VAR_9->read_proto) {
 case 130:
  FUNC_0(VAR_9->read_opcode, VAR_8->base +
         VAR_5);
  FUNC_0(VAR_4, VAR_8->base +
         VAR_0);
  break;
 case 129:
  FUNC_0(VAR_9->read_opcode, VAR_8->base +
         VAR_5);
  FUNC_0(VAR_2, VAR_8->base +
         VAR_3);
  break;
 case 128:
  FUNC_0(VAR_9->read_opcode, VAR_8->base +
         VAR_6);
  FUNC_0(VAR_7, VAR_8->base +
         VAR_3);
  break;
 default:
  FUNC_0(VAR_1, VAR_8->base +
         VAR_3);
  break;
 }
}
