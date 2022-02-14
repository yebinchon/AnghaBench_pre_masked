
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcmf_p2p_info {int* dev_addr; int* int_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (int*,int*,int ) ;

__attribute__((used)) static void FUNC_3(struct brcmf_p2p_info *VAR_1, u8 *VAR_2)
{
 bool VAR_3 = 0;

 if (!VAR_2 || FUNC_1(VAR_2))
  VAR_3 = 1;




 if (VAR_3)
  FUNC_0(VAR_1->dev_addr);
 else
  FUNC_2(VAR_1->dev_addr, VAR_2, VAR_0);





 FUNC_2(VAR_1->int_addr, VAR_1->dev_addr, VAR_0);
 VAR_1->int_addr[0] |= 0x02;
 VAR_1->int_addr[4] ^= 0x80;
}
