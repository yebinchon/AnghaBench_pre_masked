
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dst_state {int mac_address; int rxbuffer; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int*,int) ;
 scalar_t__ FUNC_2 (struct dst_state*,int*,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,char,int) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int FUNC_6(struct dst_state *VAR_0)
{
 u8 VAR_1[] = { 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
 VAR_1[7] = FUNC_1(VAR_1, 7);
 if (FUNC_2(VAR_0, VAR_1, 8) < 0) {
  FUNC_0(2, "Unsupported Command\n");
  return -1;
 }
 FUNC_4(&VAR_0->mac_address, '\0', 8);
 FUNC_3(&VAR_0->mac_address, &VAR_0->rxbuffer, 6);
 FUNC_5("MAC Address=[%pM]\n", VAR_0->mac_address);

 return 0;
}
