
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int accept_any_vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;




 int VAR_7 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_8, u32 VAR_9,
       unsigned long *VAR_10,
       unsigned long *VAR_11)
{

 *VAR_10 = 0;
 *VAR_11 = 0;

 switch (VAR_9) {
 case 130:




  break;
 case 129:
  FUNC_2(VAR_5, VAR_10);
  FUNC_2(VAR_4, VAR_10);
  FUNC_2(VAR_3, VAR_10);


  FUNC_2(VAR_5, VAR_11);
  FUNC_2(VAR_4, VAR_11);
  FUNC_2(VAR_3, VAR_11);

  if (VAR_8->accept_any_vlan) {
   FUNC_2(VAR_2, VAR_10);
   FUNC_2(VAR_2, VAR_11);
  }

  break;
 case 131:
  FUNC_2(VAR_5, VAR_10);
  FUNC_2(VAR_0, VAR_10);
  FUNC_2(VAR_3, VAR_10);


  FUNC_2(VAR_5, VAR_11);
  FUNC_2(VAR_0, VAR_11);
  FUNC_2(VAR_3, VAR_11);

  if (VAR_8->accept_any_vlan) {
   FUNC_2(VAR_2, VAR_10);
   FUNC_2(VAR_2, VAR_11);
  }

  break;
 case 128:




  FUNC_2(VAR_6, VAR_10);
  FUNC_2(VAR_5, VAR_10);
  FUNC_2(VAR_0, VAR_10);
  FUNC_2(VAR_3, VAR_10);


  FUNC_2(VAR_0, VAR_11);
  FUNC_2(VAR_3, VAR_11);

  if (FUNC_1(VAR_8))
   FUNC_2(VAR_1, VAR_11);
  else
   FUNC_2(VAR_5, VAR_11);

  FUNC_2(VAR_2, VAR_10);
  FUNC_2(VAR_2, VAR_11);

  break;
 default:
  FUNC_0("Unknown rx_mode: %d\n", VAR_9);
  return -VAR_7;
 }

 return 0;
}
