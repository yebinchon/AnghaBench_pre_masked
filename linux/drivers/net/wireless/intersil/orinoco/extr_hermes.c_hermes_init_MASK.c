
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hermes {int inten; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hermes*,int ,int ,int ,int ,int *) ;
 int FUNC_1 (struct hermes*,int ) ;
 int FUNC_2 (struct hermes*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct hermes *VAR_8)
{
 u16 VAR_9;
 int VAR_10 = 0;
 int VAR_11;


 VAR_8->inten = 0x0;
 FUNC_2(VAR_8, VAR_7, 0);
 FUNC_2(VAR_8, VAR_3, 0xffff);







 VAR_11 = VAR_1;
 VAR_9 = FUNC_1(VAR_8, VAR_0);
 while (VAR_11 && (VAR_9 & VAR_5)) {
  if (VAR_9 == 0xffff)

   return -VAR_2;

  VAR_11--;
  FUNC_3(1);
  VAR_9 = FUNC_1(VAR_8, VAR_0);
 }







 VAR_9 = FUNC_1(VAR_8, VAR_4);
 FUNC_2(VAR_8, VAR_3, VAR_9);



 VAR_10 = FUNC_0(VAR_8, VAR_6, 0, 0, 0, ((void*)0));

 return VAR_10;
}
