
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct enc28j60_net {int bank; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct enc28j60_net*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct enc28j60_net *VAR_7, u8 VAR_8)
{
 u8 VAR_9 = (VAR_8 & VAR_0) >> 5;




 if (VAR_8 >= VAR_4 && VAR_8 <= VAR_1)
  return;


 if ((VAR_9 & VAR_2) != (VAR_7->bank & VAR_2)) {
  if (VAR_9 & VAR_2)
   FUNC_0(VAR_7, VAR_6, VAR_1,
     VAR_2);
  else
   FUNC_0(VAR_7, VAR_5, VAR_1,
     VAR_2);
 }
 if ((VAR_9 & VAR_3) != (VAR_7->bank & VAR_3)) {
  if (VAR_9 & VAR_3)
   FUNC_0(VAR_7, VAR_6, VAR_1,
     VAR_3);
  else
   FUNC_0(VAR_7, VAR_5, VAR_1,
     VAR_3);
 }
 VAR_7->bank = VAR_9;
}
