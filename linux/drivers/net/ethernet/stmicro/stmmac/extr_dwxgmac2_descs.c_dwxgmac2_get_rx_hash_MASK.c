
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_desc {int des1; int des3; } ;
typedef enum pkt_hash_types { ____Placeholder_pkt_hash_types } pkt_hash_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dma_desc *VAR_6, u32 *VAR_7,
    enum pkt_hash_types *VAR_8)
{
 unsigned int VAR_9 = FUNC_0(VAR_6->des3);
 u32 VAR_10;

 if (VAR_9 & VAR_5) {
  VAR_10 = (VAR_9 & VAR_3) >> VAR_4;

  switch (VAR_10) {
  case 131:
  case 130:
  case 129:
  case 128:
   *VAR_8 = VAR_2;
   break;
  default:
   *VAR_8 = VAR_1;
   break;
  }

  *VAR_7 = FUNC_0(VAR_6->des1);
  return 0;
 }

 return -VAR_0;
}
